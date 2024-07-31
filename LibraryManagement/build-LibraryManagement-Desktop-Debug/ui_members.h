/********************************************************************************
** Form generated from reading UI file 'members.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERS_H
#define UI_MEMBERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Members
{
public:
    QLabel *label;
    QPushButton *AddButton;
    QPushButton *RemoveButton;
    QListWidget *listWidget;

    void setupUi(QWidget *Members)
    {
        if (Members->objectName().isEmpty())
            Members->setObjectName(QString::fromUtf8("Members"));
        Members->resize(648, 578);
        label = new QLabel(Members);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 121, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        AddButton = new QPushButton(Members);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(310, 510, 140, 40));
        AddButton->setMinimumSize(QSize(140, 40));
        AddButton->setMaximumSize(QSize(140, 40));
        RemoveButton = new QPushButton(Members);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        RemoveButton->setGeometry(QRect(460, 510, 140, 40));
        RemoveButton->setMinimumSize(QSize(140, 40));
        RemoveButton->setMaximumSize(QSize(140, 40));
        listWidget = new QListWidget(Members);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 70, 581, 421));

        retranslateUi(Members);

        QMetaObject::connectSlotsByName(Members);
    } // setupUi

    void retranslateUi(QWidget *Members)
    {
        Members->setWindowTitle(QCoreApplication::translate("Members", "Form", nullptr));
        label->setText(QCoreApplication::translate("Members", "Members:", nullptr));
        AddButton->setText(QCoreApplication::translate("Members", "Add Member", nullptr));
        RemoveButton->setText(QCoreApplication::translate("Members", "Remove Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Members: public Ui_Members {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERS_H
