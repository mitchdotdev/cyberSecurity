#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->helpText->setText("To use iCyberSecurity, select the appropriate package and download the installer."
                      " After it has finished installing follow the installation wizard for the setup "
                      "proccess. Open the Application and select what you would like to protect and"
                      " what level of protection you want to give it then hit apply.");
    ui->welcomeText->setText("Welcome to iCyberSecurity! We Pride ourselves on providing the best"
                             " protection available! We offer a variety of packages in order to best "
                             "provide what you need at a reasonable price. All packages come with our"
                             " protection gaurantee or your money back. In order to browse our"
                             " available packages, visit the package tab above. "
                             "For help on how to operate your new cyber security program, "
                             "naviagate to the help tab above. Please feal free to contact us using"
                             " any of the methods below! Thank you for your patronage.");
}

MainWindow::~MainWindow()
{
    delete ui;
}
