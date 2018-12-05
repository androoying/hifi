/********************************************************************************
** Form generated from reading UI file 'TestRailResultsSelectorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTRAILRESULTSSELECTORWINDOW_H
#define UI_TESTRAILRESULTSSELECTORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TestRailResultsSelectorWindow
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
    QComboBox *runsComboBox;
    QLabel *runsLabel;
    QLineEdit *urlLineEdit;
    QLineEdit *userLineEdit;
    QLineEdit *suiteIDLineEdit;
    QLabel *label_5;

    void setupUi(QDialog *TestRailResultsSelectorWindow)
    {
        if (TestRailResultsSelectorWindow->objectName().isEmpty())
            TestRailResultsSelectorWindow->setObjectName(QStringLiteral("TestRailResultsSelectorWindow"));
        TestRailResultsSelectorWindow->resize(533, 474);
        errorLabel = new QLabel(TestRailResultsSelectorWindow);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(30, 850, 500, 28));
        QFont font;
        font.setPointSize(12);
        errorLabel->setFont(font);
        label = new QLabel(TestRailResultsSelectorWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 125, 121, 20));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label_2 = new QLabel(TestRailResultsSelectorWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 25, 121, 20));
        label_2->setFont(font1);
        OKButton = new QPushButton(TestRailResultsSelectorWindow);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        OKButton->setEnabled(false);
        OKButton->setGeometry(QRect(120, 420, 93, 28));
        cancelButton = new QPushButton(TestRailResultsSelectorWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(280, 420, 93, 28));
        passwordLineEdit = new QLineEdit(TestRailResultsSelectorWindow);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(200, 120, 231, 24));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(TestRailResultsSelectorWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 75, 121, 20));
        label_3->setFont(font1);
        projectIDLineEdit = new QLineEdit(TestRailResultsSelectorWindow);
        projectIDLineEdit->setObjectName(QStringLiteral("projectIDLineEdit"));
        projectIDLineEdit->setGeometry(QRect(200, 170, 231, 24));
        projectIDLineEdit->setEchoMode(QLineEdit::Normal);
        label_4 = new QLabel(TestRailResultsSelectorWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 175, 121, 20));
        label_4->setFont(font1);
        acceptButton = new QPushButton(TestRailResultsSelectorWindow);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setGeometry(QRect(200, 270, 231, 28));
        runsComboBox = new QComboBox(TestRailResultsSelectorWindow);
        runsComboBox->setObjectName(QStringLiteral("runsComboBox"));
        runsComboBox->setEnabled(false);
        runsComboBox->setGeometry(QRect(160, 350, 271, 22));
        runsLabel = new QLabel(TestRailResultsSelectorWindow);
        runsLabel->setObjectName(QStringLiteral("runsLabel"));
        runsLabel->setEnabled(true);
        runsLabel->setGeometry(QRect(80, 350, 71, 20));
        runsLabel->setFont(font1);
        urlLineEdit = new QLineEdit(TestRailResultsSelectorWindow);
        urlLineEdit->setObjectName(QStringLiteral("urlLineEdit"));
        urlLineEdit->setGeometry(QRect(200, 20, 231, 24));
        urlLineEdit->setEchoMode(QLineEdit::Normal);
        userLineEdit = new QLineEdit(TestRailResultsSelectorWindow);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(200, 70, 231, 24));
        userLineEdit->setEchoMode(QLineEdit::Normal);
        suiteIDLineEdit = new QLineEdit(TestRailResultsSelectorWindow);
        suiteIDLineEdit->setObjectName(QStringLiteral("suiteIDLineEdit"));
        suiteIDLineEdit->setGeometry(QRect(200, 215, 231, 24));
        suiteIDLineEdit->setEchoMode(QLineEdit::Normal);
        label_5 = new QLabel(TestRailResultsSelectorWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 220, 121, 20));
        label_5->setFont(font1);
        QWidget::setTabOrder(urlLineEdit, userLineEdit);
        QWidget::setTabOrder(userLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, projectIDLineEdit);
        QWidget::setTabOrder(projectIDLineEdit, suiteIDLineEdit);
        QWidget::setTabOrder(suiteIDLineEdit, acceptButton);
        QWidget::setTabOrder(acceptButton, runsComboBox);
        QWidget::setTabOrder(runsComboBox, OKButton);
        QWidget::setTabOrder(OKButton, cancelButton);

        retranslateUi(TestRailResultsSelectorWindow);

        QMetaObject::connectSlotsByName(TestRailResultsSelectorWindow);
    } // setupUi

    void retranslateUi(QDialog *TestRailResultsSelectorWindow)
    {
        TestRailResultsSelectorWindow->setWindowTitle(QApplication::translate("TestRailResultsSelectorWindow", "TestRail Test Case Selector Window", nullptr));
        errorLabel->setText(QApplication::translate("TestRailResultsSelectorWindow", "similarity", nullptr));
        label->setText(QApplication::translate("TestRailResultsSelectorWindow", "TestRail Password", nullptr));
        label_2->setText(QApplication::translate("TestRailResultsSelectorWindow", "TestRail URL", nullptr));
        OKButton->setText(QApplication::translate("TestRailResultsSelectorWindow", "OK", nullptr));
        cancelButton->setText(QApplication::translate("TestRailResultsSelectorWindow", "Cancel", nullptr));
        label_3->setText(QApplication::translate("TestRailResultsSelectorWindow", "TestRail User", nullptr));
        label_4->setText(QApplication::translate("TestRailResultsSelectorWindow", "TestRail Project ID", nullptr));
        acceptButton->setText(QApplication::translate("TestRailResultsSelectorWindow", "Accept", nullptr));
        runsLabel->setText(QApplication::translate("TestRailResultsSelectorWindow", "TestRail Run", nullptr));
        label_5->setText(QApplication::translate("TestRailResultsSelectorWindow", "TestRail Suite ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestRailResultsSelectorWindow: public Ui_TestRailResultsSelectorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTRAILRESULTSSELECTORWINDOW_H
