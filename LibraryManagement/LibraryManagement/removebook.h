#ifndef REMOVEBOOK_H
#define REMOVEBOOK_H

#include <QWidget>

namespace Ui {
class RemoveBook;
}

class RemoveBook : public QWidget
{
    Q_OBJECT

public:
    explicit RemoveBook(QWidget *parent = nullptr);
    ~RemoveBook();

private slots:
    void on_RemoveButton_clicked();

private:
    Ui::RemoveBook *ui;
};

#endif // REMOVEBOOK_H
