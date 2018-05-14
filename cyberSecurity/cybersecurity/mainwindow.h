/** @file mainwindow.h
 *  @brief main window in which there are multiple tabs including: welcome, packages, reviews, help, and order
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTextEdit>
#include <iostream>
#include "dbmanager.h"
#include "models.h"

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

    void on_pushButton_order_clicked();

    void on_loginButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
