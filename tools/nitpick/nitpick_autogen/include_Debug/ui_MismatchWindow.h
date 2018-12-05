/********************************************************************************
** Form generated from reading UI file 'MismatchWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISMATCHWINDOW_H
#define UI_MISMATCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MismatchWindow
{
public:
    QLabel *expectedImage;
    QLabel *resultImage;
    QLabel *diffImage;
    QLabel *resultFilename;
    QLabel *expectedFilename;
    QLabel *imagePath;
    QPushButton *passTestButton;
    QPushButton *failTestButton;
    QPushButton *abortTestsButton;
    QLabel *errorLabel;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *MismatchWindow)
    {
        if (MismatchWindow->objectName().isEmpty())
            MismatchWindow->setObjectName(QStringLiteral("MismatchWindow"));
        MismatchWindow->setWindowModality(Qt::ApplicationModal);
        MismatchWindow->resize(1782, 942);
        expectedImage = new QLabel(MismatchWindow);
        expectedImage->setObjectName(QStringLiteral("expectedImage"));
        expectedImage->setGeometry(QRect(10, 25, 800, 450));
        resultImage = new QLabel(MismatchWindow);
        resultImage->setObjectName(QStringLiteral("resultImage"));
        resultImage->setGeometry(QRect(900, 25, 800, 450));
        diffImage = new QLabel(MismatchWindow);
        diffImage->setObjectName(QStringLiteral("diffImage"));
        diffImage->setGeometry(QRect(540, 480, 800, 450));
        resultFilename = new QLabel(MismatchWindow);
        resultFilename->setObjectName(QStringLiteral("resultFilename"));
        resultFilename->setGeometry(QRect(60, 660, 480, 28));
        QFont font;
        font.setPointSize(12);
        resultFilename->setFont(font);
        expectedFilename = new QLabel(MismatchWindow);
        expectedFilename->setObjectName(QStringLiteral("expectedFilename"));
        expectedFilename->setGeometry(QRect(60, 630, 480, 28));
        expectedFilename->setFont(font);
        imagePath = new QLabel(MismatchWindow);
        imagePath->setObjectName(QStringLiteral("imagePath"));
        imagePath->setGeometry(QRect(20, 600, 1200, 28));
        imagePath->setFont(font);
        passTestButton = new QPushButton(MismatchWindow);
        passTestButton->setObjectName(QStringLiteral("passTestButton"));
        passTestButton->setGeometry(QRect(30, 790, 75, 23));
        failTestButton = new QPushButton(MismatchWindow);
        failTestButton->setObjectName(QStringLiteral("failTestButton"));
        failTestButton->setGeometry(QRect(120, 790, 75, 23));
        abortTestsButton = new QPushButton(MismatchWindow);
        abortTestsButton->setObjectName(QStringLiteral("abortTestsButton"));
        abortTestsButton->setGeometry(QRect(210, 790, 121, 23));
        errorLabel = new QLabel(MismatchWindow);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(30, 850, 500, 28));
        errorLabel->setFont(font);
        label = new QLabel(MismatchWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 5, 151, 16));
        label_2 = new QLabel(MismatchWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(930, 5, 151, 16));

        retranslateUi(MismatchWindow);

        QMetaObject::connectSlotsByName(MismatchWindow);
    } // setupUi

    void retranslateUi(QDialog *MismatchWindow)
    {
        MismatchWindow->setWindowTitle(QApplication::translate("MismatchWindow", "MismatchWindow", nullptr));
        expectedImage->setText(QApplication::translate("MismatchWindow", "expected image", nullptr));
        resultImage->setText(QApplication::translate("MismatchWindow", "result image", nullptr));
        diffImage->setText(QApplication::translate("MismatchWindow", "diff image", nullptr));
        resultFilename->setText(QApplication::translate("MismatchWindow", "result image filename", nullptr));
        expectedFilename->setText(QApplication::translate("MismatchWindow", "expected image filename", nullptr));
        imagePath->setText(QApplication::translate("MismatchWindow", "image path", nullptr));
        passTestButton->setText(QApplication::translate("MismatchWindow", "Pass", nullptr));
        failTestButton->setText(QApplication::translate("MismatchWindow", "Fail", nullptr));
        abortTestsButton->setText(QApplication::translate("MismatchWindow", "Abort current test", nullptr));
        errorLabel->setText(QApplication::translate("MismatchWindow", "similarity", nullptr));
        label->setText(QApplication::translate("MismatchWindow", "Expected Image", nullptr));
        label_2->setText(QApplication::translate("MismatchWindow", "Actual Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MismatchWindow: public Ui_MismatchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISMATCHWINDOW_H
