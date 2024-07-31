#include "memberinfo.h"
#include <QFile>
#include <QDebug>

void MemberInfo::set(QString FirstName, QString LastName) {
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->MembershipCode = GenerateMembershipCode();
}

QString MemberInfo::GetFirstName () {
    return this->FirstName;
}

QString MemberInfo::GetLastName () {
    return this->LastName;
}

QString MemberInfo::GetMembershipCode () {
    return this->MembershipCode;
}

QString MemberInfo::GenerateMembershipCode () {
    QFile MemberData ("Members.csv");
    if(!MemberData.open(QIODevice::ReadOnly)) {
        qDebug() << "Members.csv file was not opened in GenerateMembershipCode() method";
        return QString ();
    }
    QString lastLine;
    while (!MemberData.atEnd()) {
        lastLine = MemberData.readLine();
    }
    QStringList parts = lastLine.split(',');
    QString temp = parts[2];
    long int code = temp.toLong() + 1;
    return QString::number(code);
}

bool MemberInfo::MemberExists (QString code) {
    QFile MemberData ("Members.csv");
    if (!MemberData.open(QIODevice::ReadOnly)) {
        qDebug () << "Members.csv file was not opened in MemberInfo::MemberExists() method";
    }
    bool found = false;
    while (!MemberData.atEnd()) {
        QString line = MemberData.readLine();
        QStringList parts = line.split(',');
        QString currentCode = parts[2].trimmed();
        if (currentCode == code) {
            found = true;
            break;
        }
    }
    return found;
}

bool MemberInfo::MemberHasReachedLimits (QString code){
    QFile MemberData ("Members.csv");
    if (!MemberData.open(QIODevice::ReadOnly)) {
        qDebug () << "Members.csv file was not opened in MemberInfo::MemberHasReachedLimits() method";
    }
    bool hasReachedLimits = true;
    while (!MemberData.atEnd()) {
        QString line = MemberData.readLine();
        QStringList parts = line.split(',');
        QString currentCode = parts[2].trimmed();
        if (currentCode == code) {
            QString temp = parts[3].trimmed();
            int status = temp.toInt();
            if (status < 2) {
                hasReachedLimits = false;
                break;

            }
        }
    }
    return hasReachedLimits;
}
