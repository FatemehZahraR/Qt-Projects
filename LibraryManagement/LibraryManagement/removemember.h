#ifndef REMOVEMEMBER_H
#define REMOVEMEMBER_H

#include <QWidget>

namespace Ui {
class RemoveMember;
}

class RemoveMember : public QWidget
{
    Q_OBJECT

public:
    explicit RemoveMember(QWidget *parent = nullptr);
    ~RemoveMember();

private slots:
    void on_RemoveButton_clicked();

private:
    Ui::RemoveMember *ui;
};

#endif // REMOVEMEMBER_H
