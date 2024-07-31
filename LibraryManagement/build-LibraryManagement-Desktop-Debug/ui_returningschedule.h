/********************************************************************************
** Form generated from reading UI file 'returningschedule.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNINGSCHEDULE_H
#define UI_RETURNINGSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ReturningSchedule
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *ReturningSchedule)
    {
        if (ReturningSchedule->objectName().isEmpty())
            ReturningSchedule->setObjectName(QString::fromUtf8("ReturningSchedule"));
        ReturningSchedule->resize(601, 481);
        buttonBox = new QDialogButtonBox(ReturningSchedule);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(230, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableWidget = new QTableWidget(ReturningSchedule);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 110, 531, 291));
        label = new QLabel(ReturningSchedule);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 391, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        retranslateUi(ReturningSchedule);
        QObject::connect(buttonBox, SIGNAL(accepted()), ReturningSchedule, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ReturningSchedule, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReturningSchedule);
    } // setupUi

    void retranslateUi(QDialog *ReturningSchedule)
    {
        ReturningSchedule->setWindowTitle(QCoreApplication::translate("ReturningSchedule", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ReturningSchedule", "Books that must be returned by today:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturningSchedule: public Ui_ReturningSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNINGSCHEDULE_H
