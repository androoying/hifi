//
//  selection.js
//
//  Created by David Rowe on 21 Jul 2017.
//  Copyright 2017 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

/* global Selection */

Selection = function (side) {
    // Manages set of selected entities. Currently supports just one set of linked entities.

    "use strict";

    var selection = [],
        intersectedEntityID = null,
        intersectedEntityIndex,
        rootEntityID = null,
        rootPosition,
        rootOrientation,
        scaleFactor,
        scaleRotation,
        scaleCenter,
        scalePosition,
        scaleOrientation,
        scaleRootOffset,
        scaleRootOrientation,
        ENTITY_TYPE = "entity",
        ENTITY_TYPES_WITH_COLOR = ["Box", "Sphere", "Shape", "ParticleEffect"];


    if (!this instanceof Selection) {
        return new Selection(side);
    }

    function traverseEntityTree(id, result) {
        // Recursively traverses tree of entities and their children, gather IDs and properties.
        // The root entity is always the first entry.
        var children,
            properties,
            SELECTION_PROPERTIES = ["position", "registrationPoint", "rotation", "dimensions", "parentID", "localPosition",
                "dynamic", "collisionless", "userData"],
            i,
            length;

        properties = Entities.getEntityProperties(id, SELECTION_PROPERTIES);
        result.push({
            id: id,
            position: properties.position,
            parentID: properties.parentID,
            localPosition: properties.localPosition,
            registrationPoint: properties.registrationPoint,
            rotation: properties.rotation,
            dimensions: properties.dimensions,
            dynamic: properties.dynamic,
            collisionless: properties.collisionless,
            userData: properties.userData
        });

        if (id === intersectedEntityID) {
            intersectedEntityIndex = result.length - 1;
        }

        children = Entities.getChildrenIDs(id);
        for (i = 0, length = children.length; i < length; i += 1) {
            if (Entities.getNestableType(children[i]) === ENTITY_TYPE) {
                traverseEntityTree(children[i], result);
            }
        }
    }

    function select(intersectionEntityID) {
        var entityProperties,
            PARENT_PROPERTIES = ["parentID", "position", "rotation", "dymamic", "collisionless"];

        intersectedEntityID = intersectionEntityID;

        // Find root parent.
        rootEntityID = Entities.rootOf(intersectedEntityID);

        // Selection position and orientation is that of the root entity.
        entityProperties = Entities.getEntityProperties(rootEntityID, PARENT_PROPERTIES);
        rootPosition = entityProperties.position;
        rootOrientation = entityProperties.rotation;

        // Find all children.
        selection = [];
        traverseEntityTree(rootEntityID, selection);
    }

    function getIntersectedEntityID() {
        return intersectedEntityID;
    }

    function getIntersectedEntityIndex() {
        return intersectedEntityIndex;
    }

    function getRootEntityID() {
        return rootEntityID;
    }

    function getSelection() {
        return selection;
    }

    function count() {
        return selection.length;
    }

    function getBoundingBox() {
        var center,
            localCenter,
            orientation,
            inverseOrientation,
            dimensions,
            min,
            max,
            i,
            j,
            length,
            registration,
            position,
            rotation,
            corners = [],
            NUM_CORNERS = 8;

        if (selection.length === 1) {
            if (Vec3.equal(selection[0].registrationPoint, Vec3.HALF)) {
                center = rootPosition;
            } else {
                center = Vec3.sum(rootPosition,
                    Vec3.multiplyQbyV(rootOrientation,
                        Vec3.multiplyVbyV(selection[0].dimensions,
                            Vec3.subtract(Vec3.HALF, selection[0].registrationPoint))));
            }
            localCenter = Vec3.multiplyQbyV(Quat.inverse(rootOrientation), Vec3.subtract(center, rootPosition));
            orientation = rootOrientation;
            dimensions = selection[0].dimensions;
        } else if (selection.length > 1) {
            // Find min & max x, y, z values of entities' dimension box corners in root entity coordinate system.
            // Note: Don't use entities' bounding boxes because they're in world coordinates and may make the calculated
            // bounding box be larger than necessary.
            min = Vec3.multiplyVbyV(Vec3.subtract(Vec3.ZERO, selection[0].registrationPoint), selection[0].dimensions);
            max = Vec3.multiplyVbyV(Vec3.subtract(Vec3.ONE, selection[0].registrationPoint), selection[0].dimensions);
            inverseOrientation = Quat.inverse(rootOrientation);
            for (i = 1, length = selection.length; i < length; i += 1) {

                registration = selection[i].registrationPoint;
                corners[0] = { x: -registration.x, y: -registration.y, z: -registration.z };
                corners[1] = { x: -registration.x, y: -registration.y, z: 1.0 - registration.z };
                corners[2] = { x: -registration.x, y: 1.0 - registration.y, z: -registration.z };
                corners[3] = { x: -registration.x, y: 1.0 - registration.y, z: 1.0 - registration.z };
                corners[4] = { x: 1.0 - registration.x, y: -registration.y, z: -registration.z };
                corners[5] = { x: 1.0 - registration.x, y: -registration.y, z: 1.0 - registration.z };
                corners[6] = { x: 1.0 - registration.x, y: 1.0 - registration.y, z: -registration.z };
                corners[7] = { x: 1.0 - registration.x, y: 1.0 - registration.y, z: 1.0 - registration.z };

                position = selection[i].position;
                rotation = selection[i].rotation;
                dimensions = selection[i].dimensions;

                for (j = 0; j < NUM_CORNERS; j += 1) {
                    // Corner position in world coordinates.
                    corners[j] = Vec3.sum(position, Vec3.multiplyQbyV(rotation, Vec3.multiplyVbyV(corners[j], dimensions)));
                    // Corner position in root entity coordinates.
                    corners[j] = Vec3.multiplyQbyV(inverseOrientation, Vec3.subtract(corners[j], rootPosition));
                    // Update min & max.
                    min = Vec3.min(corners[j], min);
                    max = Vec3.max(corners[j], max);
                }
            }

            // Calculate bounding box.
            center = Vec3.sum(rootPosition,
                Vec3.multiplyQbyV(rootOrientation, Vec3.multiply(0.5, Vec3.sum(min, max))));
            localCenter = Vec3.multiply(0.5, Vec3.sum(min, max));
            orientation = rootOrientation;
            dimensions = Vec3.subtract(max, min);
        }

        return {
            center: center,
            localCenter: localCenter,
            orientation: orientation,
            dimensions: dimensions
        };
    }

    function doKick(entityID) {
        var properties,
            DYNAMIC_VELOCITY_THRESHOLD = 0.05,  // See EntityMotionState.cpp DYNAMIC_LINEAR_VELOCITY_THRESHOLD
            DYNAMIC_VELOCITY_KICK = { x: 0, y: 0.1, z: 0 };

        if (entityID === rootEntityID) {
            // Don't kick if have started editing entity again.
            return;
        }

        properties = Entities.getEntityProperties(entityID, ["velocity", "gravity", "parentID"]);
        if (Vec3.length(properties.gravity) > 0 && Vec3.length(properties.velocity) < DYNAMIC_VELOCITY_THRESHOLD) {
            Entities.editEntity(entityID, { velocity: DYNAMIC_VELOCITY_KICK });
        }
    }

    function kickPhysics(entityID) {
        // Gives entities a small kick to start off physics, if necessary.
        var KICK_DELAY = 500;  // ms

        // Give physics a chance to catch up. Avoids some erratic behavior.
        Script.setTimeout(function () { doKick(entityID); }, KICK_DELAY);
    }

    function startEditing() {
        var count,
            i;

        // Disable entity set's physics.
        for (i = 0, count = selection.length; i < count; i += 1) {
            Entities.editEntity(selection[i].id, {
                dynamic: false,         // So that gravity doesn't fight with us trying to hold the entity in place.
                collisionless: true     // So that entity doesn't bump us about as we resize the entity.
            });
        }
    }

    function finishEditing() {
        var i;

        // Restore entity set's physics.
        // Note: Need to apply children-first in order to avoid children's relative positions sometimes drifting.
        for (i = selection.length - 1; i >= 0; i -= 1) {
            Entities.editEntity(selection[i].id, {
                dynamic: selection[i].dynamic,
                collisionless: selection[i].collisionless
            });
        }

        // Kick off physics if necessary.
        if (selection.length > 0 && selection[0].dynamic) {
            kickPhysics(selection[0].id);
        }
    }

    function getPositionAndOrientation() {
        // Position and orientation of root entity.
        return {
            position: rootPosition,
            orientation: rootOrientation
        };
    }

    function setPositionAndOrientation(position, orientation) {
        // Position and orientation of root entity.
        rootPosition = position;
        rootOrientation = orientation;
        Entities.editEntity(rootEntityID, {
            position: position,
            rotation: orientation
        });
    }

    function startDirectScaling(center) {
        // Save initial position and orientation so that can scale relative to these without accumulating float errors.
        scaleRootOffset = Vec3.subtract(rootPosition, center);
        scaleRootOrientation = rootOrientation;
    }

    function directScale(factor, rotation, center) {
        // Scale, position, and rotate selection.
        var i,
            length;

        // Scale, position, and orient root.
        rootPosition = Vec3.sum(center, Vec3.multiply(factor, Vec3.multiplyQbyV(rotation, scaleRootOffset)));
        rootOrientation = Quat.multiply(rotation, scaleRootOrientation);
        Entities.editEntity(selection[0].id, {
            dimensions: Vec3.multiply(factor, selection[0].dimensions),
            position: rootPosition,
            rotation: rootOrientation
        });

        // Scale and position children.
        for (i = 1, length = selection.length; i < length; i += 1) {
            Entities.editEntity(selection[i].id, {
                dimensions: Vec3.multiply(factor, selection[i].dimensions),
                localPosition: Vec3.multiply(factor, selection[i].localPosition)
            });
        }

        // Save most recent scale parameters.
        scaleFactor = factor;
        scaleRotation = rotation;
        scaleCenter = center;
    }

    function finishDirectScaling() {
        // Update selection with final entity properties.
        var i,
            length;
        // Final scale, position, and orientaation of root.
        rootPosition = Vec3.sum(scaleCenter, Vec3.multiply(scaleFactor, Vec3.multiplyQbyV(scaleRotation, scaleRootOffset)));
        rootOrientation = Quat.multiply(scaleRotation, scaleRootOrientation);
        selection[0].dimensions = Vec3.multiply(scaleFactor, selection[0].dimensions);
        selection[0].position = rootPosition;
        selection[0].rotation = rootOrientation;

        // Final scale and position of children.
        for (i = 1, length = selection.length; i < length; i += 1) {
            selection[i].dimensions = Vec3.multiply(scaleFactor, selection[i].dimensions);
            selection[i].localPosition = Vec3.multiply(scaleFactor, selection[i].localPosition);
        }
    }

    function startHandleScaling() {
        // Nothing to do.
    }

    function handleScale(factor, position, orientation) {
        // Scale and reposition and orient selection.
        var i,
            length;

        // Scale and position root.
        rootPosition = position;
        rootOrientation = orientation;
        Entities.editEntity(selection[0].id, {
            dimensions: Vec3.multiplyVbyV(factor, selection[0].dimensions),
            position: rootPosition,
            rotation: rootOrientation
        });

        // Scale and position children.
        // Only corner handles are used for scaling multiple entities so scale factor is the same in all dimensions.
        // Therefore don't need to take into account orientation relative to parent when scaling local position.
        for (i = 1, length = selection.length; i < length; i += 1) {
            Entities.editEntity(selection[i].id, {
                dimensions: Vec3.multiplyVbyV(factor, selection[i].dimensions),
                localPosition: Vec3.multiplyVbyV(factor, selection[i].localPosition)
            });
        }

        // Save most recent scale parameters.
        scaleFactor = factor;
        scalePosition = position;
        scaleOrientation = orientation;
    }

    function finishHandleScaling() {
        // Update selection with final entity properties.
        var i,
            length;

        // Final scale and position of root.
        selection[0].dimensions = Vec3.multiplyVbyV(scaleFactor, selection[0].dimensions);
        selection[0].position = scalePosition;
        selection[0].rotation = scaleOrientation;

        // Final scale and position of children.
        for (i = 1, length = selection.length; i < length; i += 1) {
            selection[i].dimensions = Vec3.multiplyVbyV(scaleFactor, selection[i].dimensions);
            selection[i].localPosition = Vec3.multiplyVbyV(scaleFactor, selection[i].localPosition);
        }
    }

    function cloneEntities() {
        var parentIDIndexes = [],
            intersectedEntityIndex = 0,
            parentID,
            properties,
            i,
            j,
            length;

        // Map parent IDs; find intersectedEntityID's index.
        for (i = 1, length = selection.length; i < length; i += 1) {
            if (selection[i].id === intersectedEntityID) {
                intersectedEntityIndex = i;
            }
            parentID = selection[i].parentID;
            for (j = 0; j < i; j += 1) {
                if (parentID === selection[j].id) {
                    parentIDIndexes[i] = j;
                    break;
                }
            }
        }

        // Clone entities.
        for (i = 0, length = selection.length; i < length; i += 1) {
            properties = Entities.getEntityProperties(selection[i].id);
            if (i > 0) {
                properties.parentID = selection[parentIDIndexes[i]].id;
            }
            selection[i].id = Entities.addEntity(properties);
        }

        intersectedEntityID = selection[intersectedEntityIndex].id;
        rootEntityID = selection[0].id;
    }

    function applyColor(color, isApplyToAll) {
        // Entities without a color property simply ignore the edit.
        var properties,
            isOK = false,
            i,
            length;

        if (isApplyToAll) {
            for (i = 0, length = selection.length; i < length; i += 1) {
                properties = Entities.getEntityProperties(selection[i].id, "color");
                if (ENTITY_TYPES_WITH_COLOR.indexOf(properties.type) !== -1) {
                    Entities.editEntity(selection[i].id, {
                        color: color
                    });
                    isOK = true;
                }
            }
        } else {
            properties = Entities.getEntityProperties(intersectedEntityID, "type");
            if (ENTITY_TYPES_WITH_COLOR.indexOf(properties.type) !== -1) {
                Entities.editEntity(intersectedEntityID, {
                    color: color
                });
                isOK = true;
            }
        }

        return isOK;
    }

    function getColor(entityID) {
        var properties;

        properties = Entities.getEntityProperties(entityID, "color");
        if (ENTITY_TYPES_WITH_COLOR.indexOf(properties.type) === -1) {
            // Some entities don't have a color property.
            return null;
        }

        return properties.color;
    }

    function updatePhysicsUserData(userDataString, physicsUserData) {
        var userData = {};

        if (userDataString !== "") {
            try {
                userData = JSON.parse(userDataString);
            } catch (e) {
                App.log(side, "ERROR: Invalid userData in entity being updated! " + userDataString);
            }
        }

        if (!userData.hasOwnProperty("grabbableKey")) {
            userData.grabbableKey = {};
        }
        userData.grabbableKey.grabbable = physicsUserData.grabbableKey.grabbable;

        return JSON.stringify(userData);
    }

    function applyPhysics(physicsProperties) {
        // Regarding trees of entities, when physics is to be enabled the physics engine currently:
        // - Only works with physics applied to the root entity; i.e., child entities are ignored for collisions.
        // - Requires child entities to be dynamic if the root entity is dynamic, otherwise child entities can drift.
        // - Requires child entities to be collisionless, otherwise the entity tree can become self-propelled.
        // See also: Groups.group() and ungroup().
        var properties,
            i,
            length;

        // Make children cater to physicsProperties.
        properties = {
            dynamic: physicsProperties.dynamic,
            collisionless: physicsProperties.dynamic || physicsProperties.collisionless
        };
        for (i = 1, length = selection.length; i < length; i += 1) {
            Entities.editEntity(selection[i].id, properties);
        }

        // Set root per physicsProperties.
        properties = Object.clone(physicsProperties);
        properties.userData = updatePhysicsUserData(selection[intersectedEntityIndex].userData, physicsProperties.userData);
        Entities.editEntity(rootEntityID, properties);

        // Kick off physics if necessary.
        if (physicsProperties.dynamic) {
            kickPhysics(rootEntityID);
        }
    }

    function clear() {
        selection = [];
        intersectedEntityID = null;
        rootEntityID = null;
    }

    function deleteEntities() {
        if (rootEntityID) {
            Entities.deleteEntity(rootEntityID);  // Children are automatically deleted.
            clear();
        }
    }

    function destroy() {
        clear();
    }

    return {
        select: select,
        selection: getSelection,
        count: count,
        intersectedEntityID: getIntersectedEntityID,
        intersectedEntityIndex: getIntersectedEntityIndex,
        rootEntityID: getRootEntityID,
        boundingBox: getBoundingBox,
        getPositionAndOrientation: getPositionAndOrientation,
        setPositionAndOrientation: setPositionAndOrientation,
        startEditing: startEditing,
        startDirectScaling: startDirectScaling,
        directScale: directScale,
        finishDirectScaling: finishDirectScaling,
        startHandleScaling: startHandleScaling,
        handleScale: handleScale,
        finishHandleScaling: finishHandleScaling,
        finishEditing: finishEditing,
        cloneEntities: cloneEntities,
        applyColor: applyColor,
        getColor: getColor,
        applyPhysics: applyPhysics,
        deleteEntities: deleteEntities,
        clear: clear,
        destroy: destroy
    };
};

Selection.prototype = {};
