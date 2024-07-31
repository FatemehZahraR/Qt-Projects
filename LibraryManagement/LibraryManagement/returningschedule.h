#ifndef RETURNINGSCHEDULE_H
#define RETURNINGSCHEDULE_H

#include <QDialog>

namespace Ui {
class ReturningSchedule;
}

class ReturningSchedule : public QDialog
{
    Q_OBJECT

public:
    explicit ReturningSchedule(QWidget *parent = nullptr);
    ~ReturningSchedule();
    void display ();

private:
    Ui::ReturningSchedule *ui;
};

#endif // RETURNINGSCHEDULE_H
