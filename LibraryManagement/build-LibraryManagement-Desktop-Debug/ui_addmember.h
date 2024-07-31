/********************************************************************************
** Form generated from reading UI file 'addmember.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMember
{
public:
    QPushButton *SaveButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLineEdit *MembershipLe;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLineEdit *FirstNameLE;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout_2;
    QLineEdit *LastNameLE;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AddMember)
    {
        if (AddMember->objectName().isEmpty())
            AddMember->setObjectName(QString::fromUtf8("AddMember"));
        AddMember->resize(336, 497);
        SaveButton = new QPushButton(AddMember);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setGeometry(QRect(90, 310, 150, 40));
        widget = new QWidget(AddMember);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 370, 208, 71));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        MembershipLe = new QLineEdit(widget);
        MembershipLe->setObjectName(QString::fromUtf8("MembershipLe"));
        MembershipLe->setMinimumSize(QSize(200, 40));
        MembershipLe->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, MembershipLe);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(15);
        label_3->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        widget1 = new QWidget(AddMember);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(61, 51, 210, 244));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        FirstNameLE = new QLineEdit(widget1);
        FirstNameLE->setObjectName(QString::fromUtf8("FirstNameLE"));
        FirstNameLE->setMinimumSize(QSize(200, 40));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, FirstNameLE);


        verticalLayout->addLayout(formLayout_3);

        horizontalSpacer = new QSpacerItem(118, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        LastNameLE = new QLineEdit(widget1);
        LastNameLE->setObjectName(QString::fromUtf8("LastNameLE"));
        LastNameLE->setMinimumSize(QSize(200, 40));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, LastNameLE);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);


        verticalLayout->addLayout(formLayout_2);

        horizontalSpacer_2 = new QSpacerItem(118, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);


        retranslateUi(AddMember);

        QMetaObject::connectSlotsByName(AddMember);
    } // setupUi

    void retranslateUi(QWidget *AddMember)
    {
        AddMember->setWindowTitle(QCoreApplication::translate("AddMember", "Form", nullptr));
        SaveButton->setText(QCoreApplication::translate("AddMember", "Save", nullptr));
        label_3->setText(QCoreApplication::translate("AddMember", "Membership Code", nullptr));
        label->setText(QCoreApplication::translate("AddMember", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddMember", "Last Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMember: public Ui_AddMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
