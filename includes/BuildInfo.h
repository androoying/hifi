//
//  BuildInfo.h.in
//  cmake/templates
//
//  Created by Stephen Birarda on 1/14/16.
//  Copyright 2015 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#define USE_STABLE_GLOBAL_SERVICES 0

#include <QString>

namespace BuildInfo {
    // WARNING: This file has been auto-generated.
    // Check cmake/templates/BuildInfo.h.in if you want to modify it.

    const QString INTERFACE_NAME = "Interface";
    const QString ASSIGNMENT_CLIENT_NAME = "assignment-client";
    const QString DOMAIN_SERVER_NAME = "domain-server";
    const QString AC_CLIENT_SERVER_NAME = "ac-client";
    const QString MODIFIED_ORGANIZATION = "High Fidelity - dev";
    const QString ORGANIZATION_DOMAIN = "highfidelity.io";
    const QString VERSION = "dev";
    const QString BUILD_NUMBER = "0";
    const QString BUILD_GLOBAL_SERVICES = "DEVELOPMENT";
    const QString BUILD_TIME = "05/12/2018";

    enum BuildType {
        Dev,
        PR,
        Master,
        Stable
    };

#if defined(PR_BUILD)
    const BuildType BUILD_TYPE = PR;
    const QString BUILD_TYPE_STRING = "pr";
#elif defined(PRODUCTION_BUILD)
    const BuildType BUILD_TYPE = 0 ? Stable : Master;
    const QString BUILD_TYPE_STRING = 0 ? "stable" : "master";
#else
    const BuildType BUILD_TYPE = Dev;
    const QString BUILD_TYPE_STRING = "dev";
#endif

}
