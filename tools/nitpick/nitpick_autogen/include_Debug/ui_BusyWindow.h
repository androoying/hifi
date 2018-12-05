/********************************************************************************
** Form generated from reading UI file 'BusyWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSYWINDOW_H
#define UI_BUSYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_BusyWindow
{
public:
    QLabel *errorLabel;
    QProgressBar *progressBar;
    QLabel *label;

    void setupUi(QDialog *BusyWindow)
    {
        if (BusyWindow->objectName().isEmpty())
            BusyWindow->setObjectName(QStringLiteral("BusyWindow"));
        BusyWindow->setWindowModality(Qt::ApplicationModal);
        BusyWindow->resize(542, 189);
        errorLabel = new QLabel(BusyWindow);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(30, 850, 500, 28));
        QFont font;
        font.setPointSize(12);
        errorLabel->setFont(font);
        progressBar = new QProgressBar(BusyWindow);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(40, 40, 481, 101));
        progressBar->setMaximum(0);
        progressBar->setValue(0);
        label = new QLabel(BusyWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 431, 61));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        retranslateUi(BusyWindow);

        QMetaObject::connectSlotsByName(BusyWindow);
    } // setupUi

    void retranslateUi(QDialog *BusyWindow)
    {
        BusyWindow->setWindowTitle(QApplication::translate("BusyWindow", "Updating TestRail - please wait", nullptr));
        errorLabel->setText(QApplication::translate("BusyWindow", "similarity", nullptr));
        label->setText(QApplication::translate("BusyWindow", "Please wait for this window to close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BusyWindow: public Ui_BusyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSYWINDOW_H
