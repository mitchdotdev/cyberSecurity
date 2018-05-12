#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->helpText->setText("To use iCyberSecurity, select the appropriate package and download the installer."
                      " After it has finished installing follow the installation wizard for the setup "
                      "proccess. Open the Application and select what you would like to protect and"
                      " what level of protection you want to give it then hit apply.");
    ui->helpText->setReadOnly(true);
    ui->welcomeText->setText("Welcome to iCyberSecurity! We Pride ourselves on providing the best"
                             " protection available! We offer a variety of packages in order to best "
                             "provide what you need at a reasonable price. All packages come with our"
                             " protection gaurantee or your money back. In order to browse our"
                             " available packages, visit the package tab above. "
                             "For help on how to operate your new cyber security program, "
                             "naviagate to the help tab above. Please feal free to contact us using"
                             " any of the methods below! Thank you for your patronage.");
    ui->welcomeText->setReadOnly(true);
    ui->guaranteeText->setText("Guarantee Policy:\n\nServices are guaranteed to protect from malware, "
                               "spyware, viruses and hacking only when used properly. "
                               "iCyberSecurity Inc. will not take responsibility for failure of the "
                               "organization to follow through with proper security protocols. If there"
                               " is a security breach, iCyberSecurity will reimbursed the client "
                               "6 months’ fees and a gaggle of super fluffy pet bunnies. "
                               "In addition iCyberSecurity will perform a clean sweep of the system "
                               "and remove all malicious software and security breaches. In order to "
                               "verify that the client adheres to the proper protocols, logs of "
                               "computer usage, log-ins, uploads and downloads, web usage and emails "
                               "will be kept.");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_order_clicked()
{
    QMessageBox orderMsg;
    if( ui->lineEdit_name->text().isEmpty() || ui->lineEdit_address->text().isEmpty() || ui->spinBox_zipCode->text().isEmpty() ||
        !(ui->radioButton_Regular->isChecked() || ui->radioButton_Premium->isChecked() || ui->radioButton_Executive->isChecked()) )
    {
        orderMsg.setText("All text fields must be completed");
        orderMsg.exec();
    } else {
        orderMsg.setText("Package Ordered! You will be billed each month until canceled");
        orderMsg.exec();

        ui->lineEdit_name->clear();
        ui->lineEdit_address->clear();
        ui->spinBox_zipCode->clear();
    }
}

void MainWindow::on_loginButton_clicked()
{
    adminwindow addWin;

    if(DbManager::instance().VerifyLogin(credentials(ui->userEdit->text(), ui->passEdit->text())))
    {
        ui->loginStatus->setText("Login Accepted");
        addWin.setModal(true);
        addWin.exec();
    }
    else
    {
        ui->loginStatus->setText("Invalid username or password");
    }
}
