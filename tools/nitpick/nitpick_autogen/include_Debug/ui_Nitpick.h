/********************************************************************************
** Form generated from reading UI file 'Nitpick.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NITPICK_H
#define UI_NITPICK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NitpickClass
{
public:
    QAction *actionClose;
    QAction *actionAbout;
    QAction *actionContent;
    QWidget *centralWidget;
    QPushButton *closeButton;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QPushButton *createTestsButton;
    QPushButton *createMDFileButton;
    QPushButton *createAllMDFilesButton;
    QPushButton *createTestsOutlineButton;
    QPushButton *createRecursiveScriptButton;
    QPushButton *createAllRecursiveScriptsButton;
    QPushButton *createTestAutoScriptButton;
    QPushButton *createAllTestAutoScriptsButton;
    QWidget *tab_4;
    QPushButton *hideTaskbarButton;
    QPushButton *showTaskbarButton;
    QWidget *tab;
    QPushButton *runNowButton;
    QGroupBox *daysGroupBox;
    QCheckBox *sundayCheckBox;
    QCheckBox *wednesdayCheckBox;
    QCheckBox *tuesdayCheckBox;
    QCheckBox *thursdayCheckBox;
    QCheckBox *fridayCheckBox;
    QCheckBox *saturdayCheckBox;
    QCheckBox *mondayCheckBox;
    QGroupBox *timesGroupBox;
    QTimeEdit *timeEdit1;
    QTimeEdit *timeEdit2;
    QTimeEdit *timeEdit3;
    QTimeEdit *timeEdit4;
    QCheckBox *timeEdit1checkBox;
    QCheckBox *timeEdit2checkBox;
    QCheckBox *timeEdit3checkBox;
    QCheckBox *timeEdit4checkBox;
    QPushButton *setWorkingFolderButton;
    QLabel *workingFolderLabel;
    QPlainTextEdit *plainTextEdit;
    QLabel *workingFolderLabel_2;
    QLabel *statusLabel;
    QCheckBox *checkBoxServerless;
    QCheckBox *checkBoxRunLatest;
    QLabel *workingFolderLabel_3;
    QLineEdit *urlLineEdit;
    QWidget *tab_2;
    QCheckBox *checkBoxInteractiveMode;
    QPushButton *evaluateTestsButton;
    QWidget *tab_3;
    QPushButton *updateTestRailRunResultsButton;
    QRadioButton *createPythonScriptRadioButton;
    QPushButton *createTestRailRunButton;
    QPushButton *createTestRailTestCasesButton;
    QRadioButton *createXMLScriptRadioButton;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *createWebPagePushButton;
    QCheckBox *updateAWSCheckBox;
    QLineEdit *awsURLLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QProgressBar *progressBar;
    QLineEdit *userLineEdit;
    QLineEdit *branchLineEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NitpickClass)
    {
        if (NitpickClass->objectName().isEmpty())
            NitpickClass->setObjectName(QStringLiteral("NitpickClass"));
        NitpickClass->resize(720, 870);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NitpickClass->sizePolicy().hasHeightForWidth());
        NitpickClass->setSizePolicy(sizePolicy);
        actionClose = new QAction(NitpickClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionAbout = new QAction(NitpickClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionContent = new QAction(NitpickClass);
        actionContent->setObjectName(QStringLiteral("actionContent"));
        centralWidget = new QWidget(NitpickClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(470, 750, 100, 40));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(45, 140, 630, 580));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        createTestsButton = new QPushButton(tab_1);
        createTestsButton->setObjectName(QStringLiteral("createTestsButton"));
        createTestsButton->setGeometry(QRect(195, 60, 220, 40));
        createMDFileButton = new QPushButton(tab_1);
        createMDFileButton->setObjectName(QStringLiteral("createMDFileButton"));
        createMDFileButton->setGeometry(QRect(70, 180, 220, 40));
        createAllMDFilesButton = new QPushButton(tab_1);
        createAllMDFilesButton->setObjectName(QStringLiteral("createAllMDFilesButton"));
        createAllMDFilesButton->setGeometry(QRect(320, 180, 220, 40));
        createTestsOutlineButton = new QPushButton(tab_1);
        createTestsOutlineButton->setObjectName(QStringLiteral("createTestsOutlineButton"));
        createTestsOutlineButton->setGeometry(QRect(195, 120, 220, 40));
        createRecursiveScriptButton = new QPushButton(tab_1);
        createRecursiveScriptButton->setObjectName(QStringLiteral("createRecursiveScriptButton"));
        createRecursiveScriptButton->setGeometry(QRect(70, 300, 220, 40));
        createAllRecursiveScriptsButton = new QPushButton(tab_1);
        createAllRecursiveScriptsButton->setObjectName(QStringLiteral("createAllRecursiveScriptsButton"));
        createAllRecursiveScriptsButton->setGeometry(QRect(320, 300, 220, 40));
        createTestAutoScriptButton = new QPushButton(tab_1);
        createTestAutoScriptButton->setObjectName(QStringLiteral("createTestAutoScriptButton"));
        createTestAutoScriptButton->setGeometry(QRect(70, 240, 220, 40));
        createAllTestAutoScriptsButton = new QPushButton(tab_1);
        createAllTestAutoScriptsButton->setObjectName(QStringLiteral("createAllTestAutoScriptsButton"));
        createAllTestAutoScriptsButton->setGeometry(QRect(320, 240, 220, 40));
        tabWidget->addTab(tab_1, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        hideTaskbarButton = new QPushButton(tab_4);
        hideTaskbarButton->setObjectName(QStringLiteral("hideTaskbarButton"));
        hideTaskbarButton->setGeometry(QRect(200, 130, 211, 40));
        showTaskbarButton = new QPushButton(tab_4);
        showTaskbarButton->setObjectName(QStringLiteral("showTaskbarButton"));
        showTaskbarButton->setGeometry(QRect(200, 200, 211, 40));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        runNowButton = new QPushButton(tab);
        runNowButton->setObjectName(QStringLiteral("runNowButton"));
        runNowButton->setEnabled(false);
        runNowButton->setGeometry(QRect(10, 160, 161, 51));
        daysGroupBox = new QGroupBox(tab);
        daysGroupBox->setObjectName(QStringLiteral("daysGroupBox"));
        daysGroupBox->setEnabled(false);
        daysGroupBox->setGeometry(QRect(20, 240, 91, 241));
        sundayCheckBox = new QCheckBox(daysGroupBox);
        sundayCheckBox->setObjectName(QStringLiteral("sundayCheckBox"));
        sundayCheckBox->setGeometry(QRect(10, 210, 80, 17));
        wednesdayCheckBox = new QCheckBox(daysGroupBox);
        wednesdayCheckBox->setObjectName(QStringLiteral("wednesdayCheckBox"));
        wednesdayCheckBox->setGeometry(QRect(10, 90, 80, 17));
        tuesdayCheckBox = new QCheckBox(daysGroupBox);
        tuesdayCheckBox->setObjectName(QStringLiteral("tuesdayCheckBox"));
        tuesdayCheckBox->setGeometry(QRect(10, 60, 80, 17));
        thursdayCheckBox = new QCheckBox(daysGroupBox);
        thursdayCheckBox->setObjectName(QStringLiteral("thursdayCheckBox"));
        thursdayCheckBox->setGeometry(QRect(10, 120, 80, 17));
        fridayCheckBox = new QCheckBox(daysGroupBox);
        fridayCheckBox->setObjectName(QStringLiteral("fridayCheckBox"));
        fridayCheckBox->setGeometry(QRect(10, 150, 80, 17));
        saturdayCheckBox = new QCheckBox(daysGroupBox);
        saturdayCheckBox->setObjectName(QStringLiteral("saturdayCheckBox"));
        saturdayCheckBox->setGeometry(QRect(10, 180, 80, 17));
        mondayCheckBox = new QCheckBox(daysGroupBox);
        mondayCheckBox->setObjectName(QStringLiteral("mondayCheckBox"));
        mondayCheckBox->setGeometry(QRect(10, 30, 80, 17));
        timesGroupBox = new QGroupBox(tab);
        timesGroupBox->setObjectName(QStringLiteral("timesGroupBox"));
        timesGroupBox->setEnabled(false);
        timesGroupBox->setGeometry(QRect(130, 240, 161, 191));
        timeEdit1 = new QTimeEdit(timesGroupBox);
        timeEdit1->setObjectName(QStringLiteral("timeEdit1"));
        timeEdit1->setGeometry(QRect(30, 20, 118, 22));
        timeEdit2 = new QTimeEdit(timesGroupBox);
        timeEdit2->setObjectName(QStringLiteral("timeEdit2"));
        timeEdit2->setGeometry(QRect(30, 60, 118, 22));
        timeEdit3 = new QTimeEdit(timesGroupBox);
        timeEdit3->setObjectName(QStringLiteral("timeEdit3"));
        timeEdit3->setGeometry(QRect(30, 100, 118, 22));
        timeEdit4 = new QTimeEdit(timesGroupBox);
        timeEdit4->setObjectName(QStringLiteral("timeEdit4"));
        timeEdit4->setGeometry(QRect(30, 140, 118, 22));
        timeEdit1checkBox = new QCheckBox(timesGroupBox);
        timeEdit1checkBox->setObjectName(QStringLiteral("timeEdit1checkBox"));
        timeEdit1checkBox->setGeometry(QRect(10, 23, 21, 17));
        timeEdit2checkBox = new QCheckBox(timesGroupBox);
        timeEdit2checkBox->setObjectName(QStringLiteral("timeEdit2checkBox"));
        timeEdit2checkBox->setGeometry(QRect(10, 63, 21, 17));
        timeEdit3checkBox = new QCheckBox(timesGroupBox);
        timeEdit3checkBox->setObjectName(QStringLiteral("timeEdit3checkBox"));
        timeEdit3checkBox->setGeometry(QRect(10, 103, 21, 17));
        timeEdit4checkBox = new QCheckBox(timesGroupBox);
        timeEdit4checkBox->setObjectName(QStringLiteral("timeEdit4checkBox"));
        timeEdit4checkBox->setGeometry(QRect(10, 143, 21, 17));
        setWorkingFolderButton = new QPushButton(tab);
        setWorkingFolderButton->setObjectName(QStringLiteral("setWorkingFolderButton"));
        setWorkingFolderButton->setGeometry(QRect(10, 20, 161, 28));
        workingFolderLabel = new QLabel(tab);
        workingFolderLabel->setObjectName(QStringLiteral("workingFolderLabel"));
        workingFolderLabel->setGeometry(QRect(190, 20, 321, 31));
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(300, 210, 311, 331));
        workingFolderLabel_2 = new QLabel(tab);
        workingFolderLabel_2->setObjectName(QStringLiteral("workingFolderLabel_2"));
        workingFolderLabel_2->setGeometry(QRect(300, 170, 41, 31));
        statusLabel = new QLabel(tab);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(350, 170, 271, 31));
        checkBoxServerless = new QCheckBox(tab);
        checkBoxServerless->setObjectName(QStringLiteral("checkBoxServerless"));
        checkBoxServerless->setGeometry(QRect(20, 70, 120, 20));
        checkBoxServerless->setChecked(false);
        checkBoxRunLatest = new QCheckBox(tab);
        checkBoxRunLatest->setObjectName(QStringLiteral("checkBoxRunLatest"));
        checkBoxRunLatest->setGeometry(QRect(20, 100, 120, 20));
        checkBoxRunLatest->setChecked(true);
        workingFolderLabel_3 = new QLabel(tab);
        workingFolderLabel_3->setObjectName(QStringLiteral("workingFolderLabel_3"));
        workingFolderLabel_3->setGeometry(QRect(128, 95, 31, 31));
        urlLineEdit = new QLineEdit(tab);
        urlLineEdit->setObjectName(QStringLiteral("urlLineEdit"));
        urlLineEdit->setEnabled(false);
        urlLineEdit->setGeometry(QRect(170, 100, 451, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        checkBoxInteractiveMode = new QCheckBox(tab_2);
        checkBoxInteractiveMode->setObjectName(QStringLiteral("checkBoxInteractiveMode"));
        checkBoxInteractiveMode->setGeometry(QRect(190, 180, 131, 20));
        evaluateTestsButton = new QPushButton(tab_2);
        evaluateTestsButton->setObjectName(QStringLiteral("evaluateTestsButton"));
        evaluateTestsButton->setGeometry(QRect(330, 170, 181, 51));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        updateTestRailRunResultsButton = new QPushButton(tab_3);
        updateTestRailRunResultsButton->setObjectName(QStringLiteral("updateTestRailRunResultsButton"));
        updateTestRailRunResultsButton->setGeometry(QRect(240, 220, 160, 40));
        createPythonScriptRadioButton = new QRadioButton(tab_3);
        createPythonScriptRadioButton->setObjectName(QStringLiteral("createPythonScriptRadioButton"));
        createPythonScriptRadioButton->setGeometry(QRect(170, 100, 95, 20));
        createPythonScriptRadioButton->setChecked(true);
        createTestRailRunButton = new QPushButton(tab_3);
        createTestRailRunButton->setObjectName(QStringLiteral("createTestRailRunButton"));
        createTestRailRunButton->setGeometry(QRect(240, 160, 160, 40));
        createTestRailTestCasesButton = new QPushButton(tab_3);
        createTestRailTestCasesButton->setObjectName(QStringLiteral("createTestRailTestCasesButton"));
        createTestRailTestCasesButton->setGeometry(QRect(240, 100, 160, 40));
        createXMLScriptRadioButton = new QRadioButton(tab_3);
        createXMLScriptRadioButton->setObjectName(QStringLiteral("createXMLScriptRadioButton"));
        createXMLScriptRadioButton->setGeometry(QRect(170, 120, 95, 20));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 601, 300));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 350, 601, 151));
        createWebPagePushButton = new QPushButton(groupBox_2);
        createWebPagePushButton->setObjectName(QStringLiteral("createWebPagePushButton"));
        createWebPagePushButton->setEnabled(true);
        createWebPagePushButton->setGeometry(QRect(270, 30, 160, 51));
        updateAWSCheckBox = new QCheckBox(groupBox_2);
        updateAWSCheckBox->setObjectName(QStringLiteral("updateAWSCheckBox"));
        updateAWSCheckBox->setGeometry(QRect(150, 42, 111, 17));
        awsURLLineEdit = new QLineEdit(groupBox_2);
        awsURLLineEdit->setObjectName(QStringLiteral("awsURLLineEdit"));
        awsURLLineEdit->setGeometry(QRect(20, 90, 561, 21));
        tabWidget->addTab(tab_3, QString());
        groupBox->raise();
        updateTestRailRunResultsButton->raise();
        createPythonScriptRadioButton->raise();
        createTestRailRunButton->raise();
        createTestRailTestCasesButton->raise();
        createXMLScriptRadioButton->raise();
        groupBox_2->raise();
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 80, 110, 16));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 40, 110, 16));
        label_4->setFont(font);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(80, 760, 255, 23));
        progressBar->setValue(24);
        userLineEdit = new QLineEdit(centralWidget);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(220, 40, 161, 21));
        branchLineEdit = new QLineEdit(centralWidget);
        branchLineEdit->setObjectName(QStringLiteral("branchLineEdit"));
        branchLineEdit->setGeometry(QRect(220, 80, 161, 21));
        NitpickClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NitpickClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        NitpickClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NitpickClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NitpickClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NitpickClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NitpickClass->setStatusBar(statusBar);
        QWidget::setTabOrder(userLineEdit, branchLineEdit);
        QWidget::setTabOrder(branchLineEdit, createTestsButton);
        QWidget::setTabOrder(createTestsButton, createMDFileButton);
        QWidget::setTabOrder(createMDFileButton, createAllMDFilesButton);
        QWidget::setTabOrder(createAllMDFilesButton, createTestsOutlineButton);
        QWidget::setTabOrder(createTestsOutlineButton, createRecursiveScriptButton);
        QWidget::setTabOrder(createRecursiveScriptButton, createAllRecursiveScriptsButton);
        QWidget::setTabOrder(createAllRecursiveScriptsButton, createTestAutoScriptButton);
        QWidget::setTabOrder(createTestAutoScriptButton, createAllTestAutoScriptsButton);
        QWidget::setTabOrder(createAllTestAutoScriptsButton, hideTaskbarButton);
        QWidget::setTabOrder(hideTaskbarButton, showTaskbarButton);
        QWidget::setTabOrder(showTaskbarButton, runNowButton);
        QWidget::setTabOrder(runNowButton, sundayCheckBox);
        QWidget::setTabOrder(sundayCheckBox, wednesdayCheckBox);
        QWidget::setTabOrder(wednesdayCheckBox, tuesdayCheckBox);
        QWidget::setTabOrder(tuesdayCheckBox, thursdayCheckBox);
        QWidget::setTabOrder(thursdayCheckBox, fridayCheckBox);
        QWidget::setTabOrder(fridayCheckBox, saturdayCheckBox);
        QWidget::setTabOrder(saturdayCheckBox, mondayCheckBox);
        QWidget::setTabOrder(mondayCheckBox, timeEdit1);
        QWidget::setTabOrder(timeEdit1, timeEdit2);
        QWidget::setTabOrder(timeEdit2, timeEdit3);
        QWidget::setTabOrder(timeEdit3, timeEdit4);
        QWidget::setTabOrder(timeEdit4, timeEdit1checkBox);
        QWidget::setTabOrder(timeEdit1checkBox, timeEdit2checkBox);
        QWidget::setTabOrder(timeEdit2checkBox, timeEdit3checkBox);
        QWidget::setTabOrder(timeEdit3checkBox, timeEdit4checkBox);
        QWidget::setTabOrder(timeEdit4checkBox, setWorkingFolderButton);
        QWidget::setTabOrder(setWorkingFolderButton, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, checkBoxServerless);
        QWidget::setTabOrder(checkBoxServerless, checkBoxRunLatest);
        QWidget::setTabOrder(checkBoxRunLatest, urlLineEdit);
        QWidget::setTabOrder(urlLineEdit, checkBoxInteractiveMode);
        QWidget::setTabOrder(checkBoxInteractiveMode, evaluateTestsButton);
        QWidget::setTabOrder(evaluateTestsButton, updateTestRailRunResultsButton);
        QWidget::setTabOrder(updateTestRailRunResultsButton, createPythonScriptRadioButton);
        QWidget::setTabOrder(createPythonScriptRadioButton, createTestRailRunButton);
        QWidget::setTabOrder(createTestRailRunButton, createTestRailTestCasesButton);
        QWidget::setTabOrder(createTestRailTestCasesButton, createXMLScriptRadioButton);
        QWidget::setTabOrder(createXMLScriptRadioButton, createWebPagePushButton);
        QWidget::setTabOrder(createWebPagePushButton, updateAWSCheckBox);
        QWidget::setTabOrder(updateAWSCheckBox, awsURLLineEdit);
        QWidget::setTabOrder(awsURLLineEdit, closeButton);
        QWidget::setTabOrder(closeButton, tabWidget);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionClose);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionContent);

        retranslateUi(NitpickClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NitpickClass);
    } // setupUi

    void retranslateUi(QMainWindow *NitpickClass)
    {
        NitpickClass->setWindowTitle(QApplication::translate("NitpickClass", "Nitpick", nullptr));
        actionClose->setText(QApplication::translate("NitpickClass", "Close", nullptr));
        actionAbout->setText(QApplication::translate("NitpickClass", "About", nullptr));
        actionContent->setText(QApplication::translate("NitpickClass", "Content", nullptr));
        closeButton->setText(QApplication::translate("NitpickClass", "Close", nullptr));
        createTestsButton->setText(QApplication::translate("NitpickClass", "Create Tests", nullptr));
        createMDFileButton->setText(QApplication::translate("NitpickClass", "Create MD file", nullptr));
        createAllMDFilesButton->setText(QApplication::translate("NitpickClass", "Create all  MD files", nullptr));
        createTestsOutlineButton->setText(QApplication::translate("NitpickClass", "Create Tests Outline", nullptr));
        createRecursiveScriptButton->setText(QApplication::translate("NitpickClass", "Create Recursive Script", nullptr));
        createAllRecursiveScriptsButton->setText(QApplication::translate("NitpickClass", "Create all  Recursive Scripts", nullptr));
        createTestAutoScriptButton->setText(QApplication::translate("NitpickClass", "Create testAuto script", nullptr));
        createAllTestAutoScriptsButton->setText(QApplication::translate("NitpickClass", "Create all testAuto scripts", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("NitpickClass", "Create", nullptr));
        hideTaskbarButton->setText(QApplication::translate("NitpickClass", "Hide Windows Taskbar", nullptr));
        showTaskbarButton->setText(QApplication::translate("NitpickClass", "Show Windows Taskbar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("NitpickClass", "Windows", nullptr));
        runNowButton->setText(QApplication::translate("NitpickClass", "Run now", nullptr));
        daysGroupBox->setTitle(QApplication::translate("NitpickClass", "Days", nullptr));
        sundayCheckBox->setText(QApplication::translate("NitpickClass", "Sunday", nullptr));
        wednesdayCheckBox->setText(QApplication::translate("NitpickClass", "Wednesday", nullptr));
        tuesdayCheckBox->setText(QApplication::translate("NitpickClass", "Tuesday", nullptr));
        thursdayCheckBox->setText(QApplication::translate("NitpickClass", "Thursday", nullptr));
        fridayCheckBox->setText(QApplication::translate("NitpickClass", "Friday", nullptr));
        saturdayCheckBox->setText(QApplication::translate("NitpickClass", "Saturday", nullptr));
        mondayCheckBox->setText(QApplication::translate("NitpickClass", "Monday", nullptr));
        timesGroupBox->setTitle(QApplication::translate("NitpickClass", "Times", nullptr));
        timeEdit1checkBox->setText(QString());
        timeEdit2checkBox->setText(QString());
        timeEdit3checkBox->setText(QString());
        timeEdit4checkBox->setText(QString());
        setWorkingFolderButton->setText(QApplication::translate("NitpickClass", "Set Working Folder", nullptr));
        workingFolderLabel->setText(QApplication::translate("NitpickClass", "(not set...)", nullptr));
        workingFolderLabel_2->setText(QApplication::translate("NitpickClass", "Status:", nullptr));
        statusLabel->setText(QApplication::translate("NitpickClass", "#######", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxServerless->setToolTip(QApplication::translate("NitpickClass", "<html><head/><body><p>If unchecked, will not show results during evaluation</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxServerless->setText(QApplication::translate("NitpickClass", "Server-less", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxRunLatest->setToolTip(QApplication::translate("NitpickClass", "<html><head/><body><p>If unchecked, will not show results during evaluation</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxRunLatest->setText(QApplication::translate("NitpickClass", "Run Latest", nullptr));
        workingFolderLabel_3->setText(QApplication::translate("NitpickClass", "URL", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("NitpickClass", "Run", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxInteractiveMode->setToolTip(QApplication::translate("NitpickClass", "<html><head/><body><p>If unchecked, will not show results during evaluation</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxInteractiveMode->setText(QApplication::translate("NitpickClass", "Interactive Mode", nullptr));
        evaluateTestsButton->setText(QApplication::translate("NitpickClass", "Evaluate Test", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("NitpickClass", "Evaluate", nullptr));
        updateTestRailRunResultsButton->setText(QApplication::translate("NitpickClass", "Update Run Results", nullptr));
        createPythonScriptRadioButton->setText(QApplication::translate("NitpickClass", "Python", nullptr));
        createTestRailRunButton->setText(QApplication::translate("NitpickClass", "Create Run", nullptr));
        createTestRailTestCasesButton->setText(QApplication::translate("NitpickClass", "Create Test Cases", nullptr));
        createXMLScriptRadioButton->setText(QApplication::translate("NitpickClass", "XML", nullptr));
        groupBox->setTitle(QApplication::translate("NitpickClass", "TestRail", nullptr));
        groupBox_2->setTitle(QApplication::translate("NitpickClass", "Amazon Web Services", nullptr));
        createWebPagePushButton->setText(QApplication::translate("NitpickClass", "Create Web Page", nullptr));
        updateAWSCheckBox->setText(QApplication::translate("NitpickClass", "Update AWS", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("NitpickClass", "Web Interface", nullptr));
        label_3->setText(QApplication::translate("NitpickClass", "GitHub Branch", nullptr));
        label_4->setText(QApplication::translate("NitpickClass", "GitHub User", nullptr));
        menuFile->setTitle(QApplication::translate("NitpickClass", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("NitpickClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NitpickClass: public Ui_NitpickClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NITPICK_H
