#ifndef ADDCUSTOMERWINDOW_H
#define ADDCUSTOMERWINDOW_H

#include <QDialog>

namespace Ui {
class addcustomerwindow;
}

class addcustomerwindow : public QDialog
{
    Q_OBJECT

public:
    explicit addcustomerwindow(QWidget *parent = 0);
    ~addcustomerwindow();

private slots:
    void on_addButton_clicked();

signals:
    void customerAdded();

private:
    Ui::addcustomerwindow *ui;
};

#endif // ADDCUSTOMERWINDOW_H
