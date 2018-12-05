/********************************************************************************
** Form generated from reading UI file 'TestRailRunSelectorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTRAILRUNSELECTORWINDOW_H
#define UI_TESTRAILRUNSELECTORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TestRailRunSelectorWindow
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
    QComboBox *sectionsComboBox;
    QLabel *milestoneLabel;
    QLineEdit *urlLineEdit;
    QLineEdit *userLineEdit;
    QLineEdit *suiteIDLineEdit;
    QLabel *label_5;

    void setupUi(QDialog *TestRailRunSelectorWindow)
    {
        if (TestRailRunSelectorWindow->objectName().isEmpty())
            TestRailRunSelectorWindow->setObjectName(QStringLiteral("TestRailRunSelectorWindow"));
        TestRailRunSelectorWindow->setWindowModality(Qt::ApplicationModal);
        TestRailRunSelectorWindow->resize(489, 474);
        errorLabel = new QLabel(TestRailRunSelectorWindow);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(30, 850, 500, 28));
        QFont font;
        font.setPointSize(12);
        errorLabel->setFont(font);
        label = new QLabel(TestRailRunSelectorWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 125, 121, 20));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label_2 = new QLabel(TestRailRunSelectorWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 25, 121, 20));
        label_2->setFont(font1);
        OKButton = new QPushButton(TestRailRunSelectorWindow);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        OKButton->setEnabled(false);
        OKButton->setGeometry(QRect(120, 420, 93, 28));
        cancelButton = new QPushButton(TestRailRunSelectorWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(280, 420, 93, 28));
        passwordLineEdit = new QLineEdit(TestRailRunSelectorWindow);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(200, 120, 231, 24));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(TestRailRunSelectorWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 75, 121, 20));
        label_3->setFont(font1);
        projectIDLineEdit = new QLineEdit(TestRailRunSelectorWindow);
        projectIDLineEdit->setObjectName(QStringLiteral("projectIDLineEdit"));
        projectIDLineEdit->setGeometry(QRect(200, 170, 231, 24));
        projectIDLineEdit->setEchoMode(QLineEdit::Normal);
        label_4 = new QLabel(TestRailRunSelectorWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 175, 121, 20));
        label_4->setFont(font1);
        acceptButton = new QPushButton(TestRailRunSelectorWindow);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setGeometry(QRect(200, 270, 231, 28));
        sectionsComboBox = new QComboBox(TestRailRunSelectorWindow);
        sectionsComboBox->setObjectName(QStringLiteral("sectionsComboBox"));
        sectionsComboBox->setEnabled(false);
        sectionsComboBox->setGeometry(QRect(140, 350, 311, 22));
        milestoneLabel = new QLabel(TestRailRunSelectorWindow);
        milestoneLabel->setObjectName(QStringLiteral("milestoneLabel"));
        milestoneLabel->setEnabled(true);
        milestoneLabel->setGeometry(QRect(20, 350, 121, 20));
        milestoneLabel->setFont(font1);
        urlLineEdit = new QLineEdit(TestRailRunSelectorWindow);
        urlLineEdit->setObjectName(QStringLiteral("urlLineEdit"));
        urlLineEdit->setGeometry(QRect(200, 20, 231, 24));
        urlLineEdit->setEchoMode(QLineEdit::Normal);
        userLineEdit = new QLineEdit(TestRailRunSelectorWindow);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(200, 70, 231, 24));
        userLineEdit->setEchoMode(QLineEdit::Normal);
        suiteIDLineEdit = new QLineEdit(TestRailRunSelectorWindow);
        suiteIDLineEdit->setObjectName(QStringLiteral("suiteIDLineEdit"));
        suiteIDLineEdit->setGeometry(QRect(200, 215, 231, 24));
        suiteIDLineEdit->setEchoMode(QLineEdit::Normal);
        label_5 = new QLabel(TestRailRunSelectorWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 220, 121, 20));
        label_5->setFont(font1);
        QWidget::setTabOrder(urlLineEdit, userLineEdit);
        QWidget::setTabOrder(userLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, projectIDLineEdit);
        QWidget::setTabOrder(projectIDLineEdit, suiteIDLineEdit);
        QWidget::setTabOrder(suiteIDLineEdit, acceptButton);
        QWidget::setTabOrder(acceptButton, sectionsComboBox);
        QWidget::setTabOrder(sectionsComboBox, OKButton);
        QWidget::setTabOrder(OKButton, cancelButton);

        retranslateUi(TestRailRunSelectorWindow);

        QMetaObject::connectSlotsByName(TestRailRunSelectorWindow);
    } // setupUi

    void retranslateUi(QDialog *TestRailRunSelectorWindow)
    {
        TestRailRunSelectorWindow->setWindowTitle(QApplication::translate("TestRailRunSelectorWindow", "TestRail Run Selector Window", nullptr));
        errorLabel->setText(QApplication::translate("TestRailRunSelectorWindow", "similarity", nullptr));
        label->setText(QApplication::translate("TestRailRunSelectorWindow", "TestRail Password", nullptr));
        label_2->setText(QApplication::translate("TestRailRunSelectorWindow", "TestRail URL", nullptr));
        OKButton->setText(QApplication::translate("TestRailRunSelectorWindow", "OK", nullptr));
        cancelButton->setText(QApplication::translate("TestRailRunSelectorWindow", "Cancel", nullptr));
        label_3->setText(QApplication::translate("TestRailRunSelectorWindow", "TestRail User", nullptr));
        label_4->setText(QApplication::translate("TestRailRunSelectorWindow", "TestRail Project ID", nullptr));
        acceptButton->setText(QApplication::translate("TestRailRunSelectorWindow", "Accept", nullptr));
        milestoneLabel->setText(QApplication::translate("TestRailRunSelectorWindow", "TestRail Sections", nullptr));
        label_5->setText(QApplication::translate("TestRailRunSelectorWindow", "TestRail Suite ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestRailRunSelectorWindow: public Ui_TestRailRunSelectorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTRAILRUNSELECTORWINDOW_H
