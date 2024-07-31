#ifndef MEMBERINFO_H
#define MEMBERINFO_H
#include <QString>

class MemberInfo
{
    QString FirstName, LastName, MembershipCode;
public:
    void set(QString, QString);
    QString GetFirstName ();
    QString GetLastName ();
    QString GetMembershipCode ();
    QString GenerateMembershipCode ();
    static bool MemberExists (QString);
    static bool MemberHasReachedLimits (QString);
};

#endif // MEMBERINFO_H
