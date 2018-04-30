#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->testimonial1_text->setVisible(true);
    ui->testimonial1_text->setReadOnly(true);
    ui->testimonial2_text->setVisible(false);
    ui->testimonial3_text->setVisible(false);

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
}

void MainWindow::on_firstTestimonial_clicked()
{
    ui->testimonial1_text->setVisible(true);
    ui->testimonial1_text->setReadOnly(true);

    ui->testimonial2_text->setVisible(false);
    ui->testimonial3_text->setVisible(false);
}

void MainWindow::on_secondTestimonial_clicked()
{
    ui->testimonial2_text->setVisible(true);
    ui->testimonial2_text->setReadOnly(true);

    ui->testimonial1_text->setVisible(false);
    ui->testimonial3_text->setVisible(false);
}

void MainWindow::on_thirdTestimonial_clicked()
{
    ui->testimonial3_text->setVisible(true);
    ui->testimonial3_text->setReadOnly(true);

    ui->testimonial1_text->setVisible(false);
    ui->testimonial2_text->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_order_clicked()
{
    QMessageBox orderMsg;
    if( ui->lineEdit_name->text().isEmpty() || ui->lineEdit_address->text().isEmpty() || ui->lineEdit_zipCode->text().isEmpty() ||
        !(ui->radioButton_Regular->isChecked() || ui->radioButton_Premium->isChecked() || ui->radioButton_Executive->isChecked()) )
    {
        orderMsg.setText("All text fields must be completed");
        orderMsg.exec();
    } else {
        orderMsg.setText("Package Ordered! You will be billed each month until canceled");
        orderMsg.exec();

        ui->lineEdit_name->clear();
        ui->lineEdit_address->clear();
        ui->lineEdit_zipCode->clear();
    }
}
