/********************************************************************************
** Form generated from reading UI file 'removemember.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEMEMBER_H
#define UI_REMOVEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveMember
{
public:
    QPushButton *RemoveButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *MembershipCodeLE;

    void setupUi(QWidget *RemoveMember)
    {
        if (RemoveMember->objectName().isEmpty())
            RemoveMember->setObjectName(QString::fromUtf8("RemoveMember"));
        RemoveMember->resize(329, 246);
        RemoveButton = new QPushButton(RemoveMember);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        RemoveButton->setGeometry(QRect(100, 150, 120, 40));
        RemoveButton->setMinimumSize(QSize(120, 40));
        widget = new QWidget(RemoveMember);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 50, 208, 71));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        MembershipCodeLE = new QLineEdit(widget);
        MembershipCodeLE->setObjectName(QString::fromUtf8("MembershipCodeLE"));
        MembershipCodeLE->setMinimumSize(QSize(200, 40));
        MembershipCodeLE->setMaximumSize(QSize(200, 40));
        QFont font1;
        font1.setPointSize(13);
        MembershipCodeLE->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, MembershipCodeLE);


        retranslateUi(RemoveMember);

        QMetaObject::connectSlotsByName(RemoveMember);
    } // setupUi

    void retranslateUi(QWidget *RemoveMember)
    {
        RemoveMember->setWindowTitle(QCoreApplication::translate("RemoveMember", "Form", nullptr));
        RemoveButton->setText(QCoreApplication::translate("RemoveMember", "Remove", nullptr));
        label->setText(QCoreApplication::translate("RemoveMember", "Membership Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveMember: public Ui_RemoveMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEMEMBER_H
