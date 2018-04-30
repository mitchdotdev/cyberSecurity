#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include "requestpamphlet.h"

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

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    requestPamphlet rP;
};

#endif // MAINWINDOW_H
