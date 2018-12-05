/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_6;
    QWidget *logArea;
    QVBoxLayout *verticalLayout_5;
    QWidget *inputArea;
    QHBoxLayout *horizontalLayout_2;
    QLabel *promptGutterLabel;
    QTextEdit *promptTextEdit;

    void setupUi(QWidget *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QStringLiteral("Console"));
        Console->resize(1055, 205);
        Console->setStyleSheet(QStringLiteral("QDialog { background: white }"));
        verticalLayout = new QVBoxLayout(Console);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Console);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1040, 205));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        widget_2 = new QWidget(scrollAreaWidgetContents);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(widget_2);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        logArea = new QWidget(widget_2);
        logArea->setObjectName(QStringLiteral("logArea"));
        sizePolicy.setHeightForWidth(logArea->sizePolicy().hasHeightForWidth());
        logArea->setSizePolicy(sizePolicy);
        logArea->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout_5 = new QVBoxLayout(logArea);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);

        verticalLayout_6->addWidget(logArea);

        inputArea = new QWidget(widget_2);
        inputArea->setObjectName(QStringLiteral("inputArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(inputArea->sizePolicy().hasHeightForWidth());
        inputArea->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(inputArea);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        promptGutterLabel = new QLabel(inputArea);
        promptGutterLabel->setObjectName(QStringLiteral("promptGutterLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(promptGutterLabel->sizePolicy().hasHeightForWidth());
        promptGutterLabel->setSizePolicy(sizePolicy3);
        promptGutterLabel->setMinimumSize(QSize(16, 23));
        promptGutterLabel->setMaximumSize(QSize(16, 23));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        promptGutterLabel->setFont(font);
        promptGutterLabel->setStyleSheet(QStringLiteral("padding: 0px 0 0 0;"));
        promptGutterLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(promptGutterLabel, 0, Qt::AlignTop);

        promptTextEdit = new QTextEdit(inputArea);
        promptTextEdit->setObjectName(QStringLiteral("promptTextEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(promptTextEdit->sizePolicy().hasHeightForWidth());
        promptTextEdit->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setFamily(QStringLiteral("Inconsolata,Lucida Console,Andale Mono,Monaco"));
        promptTextEdit->setFont(font1);
        promptTextEdit->setFrameShape(QFrame::NoFrame);
        promptTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        promptTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(promptTextEdit);


        verticalLayout_6->addWidget(inputArea);


        verticalLayout_3->addWidget(widget_2, 0, Qt::AlignTop);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout->addWidget(widget);


        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QWidget *Console)
    {
        Console->setWindowTitle(QApplication::translate("Console", "Dialog", nullptr));
        promptGutterLabel->setText(QApplication::translate("Console", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
