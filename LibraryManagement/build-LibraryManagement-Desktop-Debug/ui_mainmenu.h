/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BooksButton;
    QSpacerItem *verticalSpacer;
    QPushButton *MembersButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *LendingButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *ReturningBookButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ReturningScheduleButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(901, 503);
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 120, 582, 91));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BooksButton = new QPushButton(widget);
        BooksButton->setObjectName(QString::fromUtf8("BooksButton"));
        BooksButton->setMinimumSize(QSize(250, 70));
        BooksButton->setMaximumSize(QSize(150, 50));

        horizontalLayout->addWidget(BooksButton);

        verticalSpacer = new QSpacerItem(68, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        MembersButton = new QPushButton(widget);
        MembersButton->setObjectName(QString::fromUtf8("MembersButton"));
        MembersButton->setMinimumSize(QSize(250, 70));
        MembersButton->setMaximumSize(QSize(150, 50));

        horizontalLayout->addWidget(MembersButton);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 240, 862, 101));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LendingButton = new QPushButton(widget1);
        LendingButton->setObjectName(QString::fromUtf8("LendingButton"));
        LendingButton->setMinimumSize(QSize(250, 70));
        LendingButton->setMaximumSize(QSize(150, 50));

        horizontalLayout_2->addWidget(LendingButton);

        verticalSpacer_2 = new QSpacerItem(38, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_2);

        ReturningBookButton = new QPushButton(widget1);
        ReturningBookButton->setObjectName(QString::fromUtf8("ReturningBookButton"));
        ReturningBookButton->setMinimumSize(QSize(250, 70));
        ReturningBookButton->setMaximumSize(QSize(150, 50));

        horizontalLayout_2->addWidget(ReturningBookButton);

        verticalSpacer_3 = new QSpacerItem(48, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_3);

        ReturningScheduleButton = new QPushButton(widget1);
        ReturningScheduleButton->setObjectName(QString::fromUtf8("ReturningScheduleButton"));
        ReturningScheduleButton->setMinimumSize(QSize(250, 70));
        ReturningScheduleButton->setMaximumSize(QSize(150, 50));

        horizontalLayout_2->addWidget(ReturningScheduleButton);

        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 901, 22));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainMenu->setStatusBar(statusbar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainWindow", nullptr));
        BooksButton->setText(QCoreApplication::translate("MainMenu", "Books", nullptr));
        MembersButton->setText(QCoreApplication::translate("MainMenu", "Members", nullptr));
        LendingButton->setText(QCoreApplication::translate("MainMenu", "Lending Book", nullptr));
        ReturningBookButton->setText(QCoreApplication::translate("MainMenu", "Returning Book", nullptr));
        ReturningScheduleButton->setText(QCoreApplication::translate("MainMenu", "Returning schedule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
