#ifndef RETURNINIGBOOK_H
#define RETURNINIGBOOK_H

#include <QWidget>

namespace Ui {
class ReturninigBook;
}

class ReturninigBook : public QWidget
{
    Q_OBJECT

public:
    explicit ReturninigBook(QWidget *parent = nullptr);
    ~ReturninigBook();

private slots:
    void on_SubmitButton_clicked();

private:
    Ui::ReturninigBook *ui;
};

#endif // RETURNINIGBOOK_H
