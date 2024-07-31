/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *usernameLE;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *passwordLE;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoginButton;
    QPushButton *CreateNewAccButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(705, 541);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 90, 271, 321));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/login/login1.jpeg")));
        label_3->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 90, 311, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        usernameLE = new QLineEdit(layoutWidget);
        usernameLE->setObjectName(QString::fromUtf8("usernameLE"));
        usernameLE->setMinimumSize(QSize(300, 35));

        formLayout->setWidget(1, QFormLayout::LabelRole, usernameLE);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(188, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        passwordLE = new QLineEdit(layoutWidget);
        passwordLE->setObjectName(QString::fromUtf8("passwordLE"));
        passwordLE->setMinimumSize(QSize(300, 35));
        passwordLE->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, passwordLE);


        gridLayout->addLayout(formLayout_2, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(188, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setMinimumSize(QSize(100, 35));

        horizontalLayout->addWidget(LoginButton);

        CreateNewAccButton = new QPushButton(layoutWidget);
        CreateNewAccButton->setObjectName(QString::fromUtf8("CreateNewAccButton"));
        CreateNewAccButton->setMinimumSize(QSize(200, 35));

        horizontalLayout->addWidget(CreateNewAccButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 705, 22));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QFont font1;
        font1.setPointSize(13);
        font1.setItalic(true);
        statusbar->setFont(font1);
        statusbar->setFocusPolicy(Qt::NoFocus);
        statusbar->setAutoFillBackground(true);
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("Login", "Username", nullptr));
        usernameLE->setPlaceholderText(QCoreApplication::translate("Login", "username", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        passwordLE->setPlaceholderText(QCoreApplication::translate("Login", "password", nullptr));
        LoginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        CreateNewAccButton->setText(QCoreApplication::translate("Login", "Create a New Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
