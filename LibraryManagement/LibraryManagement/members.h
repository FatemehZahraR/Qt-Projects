#ifndef MEMBERS_H
#define MEMBERS_H

#include <QWidget>

namespace Ui {
class Members;
}

class Members : public QWidget
{
    Q_OBJECT

public:
    explicit Members(QWidget *parent = nullptr);
    ~Members();
    void display();

private slots:
    void on_AddButton_clicked();

    void on_RemoveButton_clicked();

private:
    Ui::Members *ui;
};

#endif // MEMBERS_H
