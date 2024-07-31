/********************************************************************************
** Form generated from reading UI file 'createnewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWACCOUNT_H
#define UI_CREATENEWACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewAccount
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *AdministratorPassLE;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLineEdit *NewUserName;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QLineEdit *NewPassword;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *SubmitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateNewAccount)
    {
        if (CreateNewAccount->objectName().isEmpty())
            CreateNewAccount->setObjectName(QString::fromUtf8("CreateNewAccount"));
        CreateNewAccount->resize(400, 474);
        centralwidget = new QWidget(CreateNewAccount);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 40, 261, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        AdministratorPassLE = new QLineEdit(layoutWidget);
        AdministratorPassLE->setObjectName(QString::fromUtf8("AdministratorPassLE"));
        AdministratorPassLE->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(AdministratorPassLE, 1, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        NewUserName = new QLineEdit(layoutWidget);
        NewUserName->setObjectName(QString::fromUtf8("NewUserName"));

        gridLayout_2->addWidget(NewUserName, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        NewPassword = new QLineEdit(layoutWidget);
        NewPassword->setObjectName(QString::fromUtf8("NewPassword"));
        NewPassword->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(NewPassword, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalSpacer_3 = new QSpacerItem(118, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        SubmitButton = new QPushButton(layoutWidget);
        SubmitButton->setObjectName(QString::fromUtf8("SubmitButton"));

        verticalLayout->addWidget(SubmitButton);

        CreateNewAccount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateNewAccount);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 22));
        CreateNewAccount->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateNewAccount);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        statusbar->setFont(font1);
        statusbar->setAutoFillBackground(true);
        CreateNewAccount->setStatusBar(statusbar);

        retranslateUi(CreateNewAccount);

        QMetaObject::connectSlotsByName(CreateNewAccount);
    } // setupUi

    void retranslateUi(QMainWindow *CreateNewAccount)
    {
        CreateNewAccount->setWindowTitle(QCoreApplication::translate("CreateNewAccount", "MainWindow", nullptr));
        AdministratorPassLE->setPlaceholderText(QCoreApplication::translate("CreateNewAccount", "administrator password:", nullptr));
        label->setText(QCoreApplication::translate("CreateNewAccount", "Administrator Password:", nullptr));
        NewUserName->setText(QString());
        NewUserName->setPlaceholderText(QCoreApplication::translate("CreateNewAccount", "username", nullptr));
        label_2->setText(QCoreApplication::translate("CreateNewAccount", "New Username:", nullptr));
        NewPassword->setText(QString());
        NewPassword->setPlaceholderText(QCoreApplication::translate("CreateNewAccount", "password", nullptr));
        label_3->setText(QCoreApplication::translate("CreateNewAccount", "New Password", nullptr));
        SubmitButton->setText(QCoreApplication::translate("CreateNewAccount", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateNewAccount: public Ui_CreateNewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWACCOUNT_H
