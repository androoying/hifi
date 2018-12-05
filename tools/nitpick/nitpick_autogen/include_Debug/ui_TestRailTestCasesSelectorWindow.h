/********************************************************************************
** Form generated from reading UI file 'TestRailTestCasesSelectorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTRAILTESTCASESSELECTORWINDOW_H
#define UI_TESTRAILTESTCASESSELECTORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TestRailTestCasesSelectorWindow
{
public:
    QLabel *errorLabel;
    QLabel *label;
    QLabel *label_2;
    QPushButton *OKButton;
    QPushButton *cancelButton;
    QLineEdit *passwordLineEdit;
    QLabel *label_3;
    QLineEdit *projectIDLineEdit;
    QLabel *label_4;
    QPushButton *acceptButton;
    QComboBox *releasesComboBox;
    QLabel *releasesLabel;
    QLineEdit *urlLineEdit;
    QLineEdit *userLineEdit;
    QLineEdit *suiteIDLineEdit;
    QLabel *label_5;

    void setupUi(QDialog *TestRailTestCasesSelectorWindow)
    {
        if (TestRailTestCasesSelectorWindow->objectName().isEmpty())
            TestRailTestCasesSelectorWindow->setObjectName(QStringLiteral("TestRailTestCasesSelectorWindow"));
        TestRailTestCasesSelectorWindow->resize(489, 474);
        errorLabel = new QLabel(TestRailTestCasesSelectorWindow);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(30, 850, 500, 28));
        QFont font;
        font.setPointSize(12);
        errorLabel->setFont(font);
        label = new QLabel(TestRailTestCasesSelectorWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 125, 121, 20));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label_2 = new QLabel(TestRailTestCasesSelectorWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 25, 121, 20));
        label_2->setFont(font1);
        OKButton = new QPushButton(TestRailTestCasesSelectorWindow);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        OKButton->setEnabled(false);
        OKButton->setGeometry(QRect(120, 420, 93, 28));
        cancelButton = new QPushButton(TestRailTestCasesSelectorWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(280, 420, 93, 28));
        passwordLineEdit = new QLineEdit(TestRailTestCasesSelectorWindow);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(200, 120, 231, 24));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(TestRailTestCasesSelectorWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 75, 121, 20));
        label_3->setFont(font1);
        projectIDLineEdit = new QLineEdit(TestRailTestCasesSelectorWindow);
        projectIDLineEdit->setObjectName(QStringLiteral("projectIDLineEdit"));
        projectIDLineEdit->setGeometry(QRect(200, 170, 231, 24));
        projectIDLineEdit->setEchoMode(QLineEdit::Normal);
        label_4 = new QLabel(TestRailTestCasesSelectorWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 175, 121, 20));
        label_4->setFont(font1);
        acceptButton = new QPushButton(TestRailTestCasesSelectorWindow);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setGeometry(QRect(200, 270, 231, 28));
        releasesComboBox = new QComboBox(TestRailTestCasesSelectorWindow);
        releasesComboBox->setObjectName(QStringLiteral("releasesComboBox"));
        releasesComboBox->setEnabled(false);
        releasesComboBox->setGeometry(QRect(270, 350, 161, 22));
        releasesLabel = new QLabel(TestRailTestCasesSelectorWindow);
        releasesLabel->setObjectName(QStringLiteral("releasesLabel"));
        releasesLabel->setEnabled(true);
        releasesLabel->setGeometry(QRect(80, 350, 181, 20));
        releasesLabel->setFont(font1);
        urlLineEdit = new QLineEdit(TestRailTestCasesSelectorWindow);
        urlLineEdit->setObjectName(QStringLiteral("urlLineEdit"));
        urlLineEdit->setGeometry(QRect(200, 20, 231, 24));
        urlLineEdit->setEchoMode(QLineEdit::Normal);
        userLineEdit = new QLineEdit(TestRailTestCasesSelectorWindow);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(200, 70, 231, 24));
        userLineEdit->setEchoMode(QLineEdit::Normal);
        suiteIDLineEdit = new QLineEdit(TestRailTestCasesSelectorWindow);
        suiteIDLineEdit->setObjectName(QStringLiteral("suiteIDLineEdit"));
        suiteIDLineEdit->setGeometry(QRect(200, 215, 231, 24));
        suiteIDLineEdit->setEchoMode(QLineEdit::Normal);
        label_5 = new QLabel(TestRailTestCasesSelectorWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 220, 121, 20));
        label_5->setFont(font1);
        QWidget::setTabOrder(urlLineEdit, userLineEdit);
        QWidget::setTabOrder(userLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, projectIDLineEdit);
        QWidget::setTabOrder(projectIDLineEdit, suiteIDLineEdit);
        QWidget::setTabOrder(suiteIDLineEdit, acceptButton);
        QWidget::setTabOrder(acceptButton, releasesComboBox);
        QWidget::setTabOrder(releasesComboBox, OKButton);
        QWidget::setTabOrder(OKButton, cancelButton);

        retranslateUi(TestRailTestCasesSelectorWindow);

        QMetaObject::connectSlotsByName(TestRailTestCasesSelectorWindow);
    } // setupUi

    void retranslateUi(QDialog *TestRailTestCasesSelectorWindow)
    {
        TestRailTestCasesSelectorWindow->setWindowTitle(QApplication::translate("TestRailTestCasesSelectorWindow", "TestRail Test Case Selector Window", nullptr));
        errorLabel->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "similarity", nullptr));
        label->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "TestRail Password", nullptr));
        label_2->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "TestRail URL", nullptr));
        OKButton->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "OK", nullptr));
        cancelButton->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "Cancel", nullptr));
        label_3->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "TestRail User", nullptr));
        label_4->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "TestRail Project ID", nullptr));
        acceptButton->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "Accept", nullptr));
        releasesLabel->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "TestRail Added for Release", nullptr));
        label_5->setText(QApplication::translate("TestRailTestCasesSelectorWindow", "TestRail Suite ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestRailTestCasesSelectorWindow: public Ui_TestRailTestCasesSelectorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTRAILTESTCASESSELECTORWINDOW_H
