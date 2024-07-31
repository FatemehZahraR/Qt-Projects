#include "removemember.h"
#include "ui_removemember.h"
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <memberinfo.h>

RemoveMember::RemoveMember(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RemoveMember)
{
    ui->setupUi(this);
}

RemoveMember::~RemoveMember()
{
    delete ui;
}

bool MemberHasCurrentlyBorrowed (QString& CodeToCheck) {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadOnly)) {
        qDebug() << "Book.csv is not opened in MemberHasCurrentlyBorrowed() function";
    }
    bool hasBorrowed = false;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString status = parts[3].trimmed();
        if (status == CodeToCheck) {
            hasBorrowed = true;
            break;
        }
    }
    BookData.close();
    return hasBorrowed;
}

void RemoveByMembershipCode (QString& CodeToRemove) {
    QFile MemberData ("Members.csv");
    if (!MemberData.open(QIODevice::ReadWrite)) {
        qDebug() << "Member.csv is not opened in RemoveByMembershipCode() method";
        return;
    }
    QString NewData;
    while (!MemberData.atEnd()) {
        QString line = MemberData.readLine();
        QStringList parts = line.split(',');
        QString CodeToCheck = parts[2].trimmed();
        if (CodeToCheck != CodeToRemove) {
            NewData += line;
        }
    }
    MemberData.resize(0);
    QTextStream write (&MemberData);
    write << NewData;
    MemberData.close();
}

void RemoveMember::on_RemoveButton_clicked()
{
    QString MembershipCode = ui->MembershipCodeLE->text();
    if (!MemberInfo::MemberExists(MembershipCode)) {
        QMessageBox::warning(this,"Error","This member does not exists",QMessageBox::Ok);
        return;
    } if (MemberHasCurrentlyBorrowed(MembershipCode)) {
        QMessageBox::warning(this,"Error","Cannot remove this member; they currently have a borrowed book.",QMessageBox::Ok);
        return;
    }
    RemoveByMembershipCode(MembershipCode);
    RemoveMember::~RemoveMember();
}

