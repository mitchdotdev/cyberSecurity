#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTextEdit>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_firstTestimonial_clicked();

    void on_secondTestimonial_clicked();

    void on_thirdTestimonial_clicked();

    void on_pushButton_order_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
