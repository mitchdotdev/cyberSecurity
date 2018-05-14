/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *welcomeTab;
    QVBoxLayout *verticalLayout;
    QTextEdit *welcomeText;
    QLabel *label_3;
    QLineEdit *userEdit;
    QLabel *label_4;
    QLineEdit *passEdit;
    QLabel *loginStatus;
    QPushButton *loginButton;
    QWidget *packageTab;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *guaranteeText;
    QWidget *reviewsTab;
    QVBoxLayout *verticalLayout_11;
    QTextEdit *testimonial3_text;
    QTextEdit *testimonial2_text;
    QTextEdit *testimonial1_text;
    QHBoxLayout *horizontalLayout;
    QWidget *tab;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Pick_Package;
    QRadioButton *radioButton_Regular;
    QRadioButton *radioButton_Premium;
    QRadioButton *radioButton_Executive;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Name;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_name;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Address;
    QLineEdit *lineEdit_address;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_ZipCode;
    QSpinBox *spinBox_zipCode;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_State;
    QComboBox *comboBox_States;
    QPushButton *pushButton_order;
    QWidget *helpTab;
    QVBoxLayout *verticalLayout_9;
    QTextEdit *helpText;
    QTextEdit *contactText_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(576, 581);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        welcomeTab = new QWidget();
        welcomeTab->setObjectName(QStringLiteral("welcomeTab"));
        verticalLayout = new QVBoxLayout(welcomeTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        welcomeText = new QTextEdit(welcomeTab);
        welcomeText->setObjectName(QStringLiteral("welcomeText"));
        welcomeText->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(welcomeText);

        label_3 = new QLabel(welcomeTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        userEdit = new QLineEdit(welcomeTab);
        userEdit->setObjectName(QStringLiteral("userEdit"));

        verticalLayout->addWidget(userEdit);

        label_4 = new QLabel(welcomeTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        passEdit = new QLineEdit(welcomeTab);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passEdit);

        loginStatus = new QLabel(welcomeTab);
        loginStatus->setObjectName(QStringLiteral("loginStatus"));

        verticalLayout->addWidget(loginStatus);

        loginButton = new QPushButton(welcomeTab);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        verticalLayout->addWidget(loginButton);

        tabWidget->addTab(welcomeTab, QString());
        packageTab = new QWidget();
        packageTab->setObjectName(QStringLiteral("packageTab"));
        verticalLayout_10 = new QVBoxLayout(packageTab);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        pushButton = new QPushButton(packageTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_10->addWidget(pushButton);

        label = new QLabel(packageTab);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_10->addWidget(label);

        guaranteeText = new QTextEdit(packageTab);
        guaranteeText->setObjectName(QStringLiteral("guaranteeText"));
        guaranteeText->setFrameShape(QFrame::NoFrame);
        guaranteeText->setReadOnly(true);

        verticalLayout_10->addWidget(guaranteeText);

        tabWidget->addTab(packageTab, QString());
        reviewsTab = new QWidget();
        reviewsTab->setObjectName(QStringLiteral("reviewsTab"));
        verticalLayout_11 = new QVBoxLayout(reviewsTab);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        testimonial3_text = new QTextEdit(reviewsTab);
        testimonial3_text->setObjectName(QStringLiteral("testimonial3_text"));
        testimonial3_text->setFrameShape(QFrame::NoFrame);
        testimonial3_text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial3_text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_11->addWidget(testimonial3_text);

        testimonial2_text = new QTextEdit(reviewsTab);
        testimonial2_text->setObjectName(QStringLiteral("testimonial2_text"));
        testimonial2_text->setFrameShape(QFrame::NoFrame);
        testimonial2_text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial2_text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_11->addWidget(testimonial2_text);

        testimonial1_text = new QTextEdit(reviewsTab);
        testimonial1_text->setObjectName(QStringLiteral("testimonial1_text"));
        testimonial1_text->setFrameShape(QFrame::NoFrame);
        testimonial1_text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial1_text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_11->addWidget(testimonial1_text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout_11->addLayout(horizontalLayout);

        tabWidget->addTab(reviewsTab, QString());
        testimonial1_text->raise();
        testimonial2_text->raise();
        testimonial3_text->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_12 = new QVBoxLayout(tab);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Pick_Package = new QLabel(tab);
        label_Pick_Package->setObjectName(QStringLiteral("label_Pick_Package"));
        QFont font;
        font.setPointSize(8);
        label_Pick_Package->setFont(font);
        label_Pick_Package->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_Pick_Package);


        verticalLayout_12->addLayout(horizontalLayout_2);

        radioButton_Regular = new QRadioButton(tab);
        radioButton_Regular->setObjectName(QStringLiteral("radioButton_Regular"));
        radioButton_Regular->setFont(font);
        radioButton_Regular->setIconSize(QSize(16, 16));

        verticalLayout_12->addWidget(radioButton_Regular);

        radioButton_Premium = new QRadioButton(tab);
        radioButton_Premium->setObjectName(QStringLiteral("radioButton_Premium"));
        radioButton_Premium->setFont(font);

        verticalLayout_12->addWidget(radioButton_Premium);

        radioButton_Executive = new QRadioButton(tab);
        radioButton_Executive->setObjectName(QStringLiteral("radioButton_Executive"));
        radioButton_Executive->setFont(font);

        verticalLayout_12->addWidget(radioButton_Executive);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_Name = new QLabel(tab);
        label_Name->setObjectName(QStringLiteral("label_Name"));
        label_Name->setFont(font);

        verticalLayout_4->addWidget(label_Name);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout_4->addLayout(verticalLayout_2);

        lineEdit_name = new QLineEdit(tab);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout_4->addWidget(lineEdit_name);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_Address = new QLabel(tab);
        label_Address->setObjectName(QStringLiteral("label_Address"));
        label_Address->setFont(font);

        verticalLayout_5->addWidget(label_Address);

        lineEdit_address = new QLineEdit(tab);
        lineEdit_address->setObjectName(QStringLiteral("lineEdit_address"));

        verticalLayout_5->addWidget(lineEdit_address);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_ZipCode = new QLabel(tab);
        label_ZipCode->setObjectName(QStringLiteral("label_ZipCode"));
        label_ZipCode->setFont(font);

        verticalLayout_6->addWidget(label_ZipCode);

        spinBox_zipCode = new QSpinBox(tab);
        spinBox_zipCode->setObjectName(QStringLiteral("spinBox_zipCode"));
        spinBox_zipCode->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_zipCode->setMaximum(99999);

        verticalLayout_6->addWidget(spinBox_zipCode);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_State = new QLabel(tab);
        label_State->setObjectName(QStringLiteral("label_State"));
        label_State->setFont(font);

        verticalLayout_7->addWidget(label_State);

        comboBox_States = new QComboBox(tab);
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->addItem(QString());
        comboBox_States->setObjectName(QStringLiteral("comboBox_States"));

        verticalLayout_7->addWidget(comboBox_States);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_12->addLayout(verticalLayout_8);

        pushButton_order = new QPushButton(tab);
        pushButton_order->setObjectName(QStringLiteral("pushButton_order"));
        pushButton_order->setFont(font);

        verticalLayout_12->addWidget(pushButton_order);

        tabWidget->addTab(tab, QString());
        helpTab = new QWidget();
        helpTab->setObjectName(QStringLiteral("helpTab"));
        verticalLayout_9 = new QVBoxLayout(helpTab);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        helpText = new QTextEdit(helpTab);
        helpText->setObjectName(QStringLiteral("helpText"));
        helpText->setFrameShape(QFrame::NoFrame);
        helpText->setFrameShadow(QFrame::Plain);
        helpText->setReadOnly(true);

        verticalLayout_9->addWidget(helpText);

        contactText_2 = new QTextEdit(helpTab);
        contactText_2->setObjectName(QStringLiteral("contactText_2"));
        contactText_2->setFrameShape(QFrame::NoFrame);
        contactText_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contactText_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contactText_2->setReadOnly(true);

        verticalLayout_9->addWidget(contactText_2);

        tabWidget->addTab(helpTab, QString());

        verticalLayout_3->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "iCyberSecurity", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Password", nullptr));
        loginStatus->setText(QString());
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(welcomeTab), QApplication::translate("MainWindow", "Welcome", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Request a pamphlet", nullptr));
        label->setText(QApplication::translate("MainWindow", "\n"
"\n"
"Regular - $500/month\n"
"	\342\200\242  Ensures that all passwords follow our security protocols.\n"
"	\342\200\242  Passes all traffic through out secure servers.\n"
"	\342\200\242  Scans all incoming emails and downloads for malware.\n"
"	\342\200\242  Runs weekly security checks and scans\n"
"	\342\200\242  Maintenance and upgrades against the latest security threats every 6 months\n"
"\n"
"Premium - $1000/month\n"
"	\342\200\242  Provides a dongle with encrypted passwords that changes every hour\n"
"	\342\200\242  Passes all traffic through out secure servers.\n"
"	\342\200\242  Runs daily security checks and scans.\n"
"	\342\200\242  Scans all incoming emails and downloads for malware.\n"
"	\342\200\242  Implements a secure mode if there are any security breaches\n"
"	\342\200\242  Maintenance and upgrades against the latest security threats every 3 months\n"
"\n"
"Executive - $1200/month\n"
"	\342\200\242  Provides a dongle with encrypted passwords that changes every 10 minutes\n"
"	\342\200\242"
                        "  Passes all traffic through out secure servers.\n"
"	\342\200\242  Runs hourly security checks and scans.\n"
"	\342\200\242  Scans all incoming emails and downloads for malware.\n"
"	\342\200\242  Implements a secure mode if there are any security breaches\n"
"	\342\200\242  Maintenance and upgrades against the latest security threats every month\n"
"", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(packageTab), QApplication::translate("MainWindow", "Packages", nullptr));
        testimonial3_text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">&quot;Being a tech company security is of the utmost importance. iCyberSecurity has consistently been a step ahead and has protected us from potential cyber threats!&quot;</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> - Mark Zuckerberg</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-i"
                        "ndent:0px;\"><span style=\" font-size:8pt;\"> (founder of Facebook)</span></p></body></html>", nullptr));
        testimonial2_text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">&quot;Although we started as a small business, iCyberSecurity has provided top notch cyber security as we have scaled throughout the years!&quot;</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> - Elon Musk</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font"
                        "-size:8pt;\"> (founder of Tesla)</span></p></body></html>", nullptr));
        testimonial1_text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">&quot;iCyberSecurity has helped my small business stay safe from all kinds of cyber threats for 10+ years!&quot;</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> - Jeff Bezos</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> (founder of some c"
                        "ompany called Amazon)</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(reviewsTab), QApplication::translate("MainWindow", "Reviews", nullptr));
        label_Pick_Package->setText(QApplication::translate("MainWindow", "Pick your package\n"
"Enter your info", nullptr));
        radioButton_Regular->setText(QApplication::translate("MainWindow", "Regular $500/month", nullptr));
        radioButton_Premium->setText(QApplication::translate("MainWindow", "Premium $1000/month", nullptr));
        radioButton_Executive->setText(QApplication::translate("MainWindow", "Executive $1200/month", nullptr));
        label_Name->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_Address->setText(QApplication::translate("MainWindow", "Street Address", nullptr));
        label_ZipCode->setText(QApplication::translate("MainWindow", "Zip Code", nullptr));
        label_State->setText(QApplication::translate("MainWindow", "State", nullptr));
        comboBox_States->setItemText(0, QApplication::translate("MainWindow", "AL", nullptr));
        comboBox_States->setItemText(1, QApplication::translate("MainWindow", "AK", nullptr));
        comboBox_States->setItemText(2, QApplication::translate("MainWindow", "AZ", nullptr));
        comboBox_States->setItemText(3, QApplication::translate("MainWindow", "AR", nullptr));
        comboBox_States->setItemText(4, QApplication::translate("MainWindow", "CA", nullptr));
        comboBox_States->setItemText(5, QApplication::translate("MainWindow", "CO", nullptr));
        comboBox_States->setItemText(6, QApplication::translate("MainWindow", "CT", nullptr));
        comboBox_States->setItemText(7, QApplication::translate("MainWindow", "DE", nullptr));
        comboBox_States->setItemText(8, QApplication::translate("MainWindow", "FL", nullptr));
        comboBox_States->setItemText(9, QApplication::translate("MainWindow", "GA", nullptr));
        comboBox_States->setItemText(10, QApplication::translate("MainWindow", "HI", nullptr));
        comboBox_States->setItemText(11, QApplication::translate("MainWindow", "ID", nullptr));
        comboBox_States->setItemText(12, QApplication::translate("MainWindow", "IL", nullptr));
        comboBox_States->setItemText(13, QApplication::translate("MainWindow", "IN", nullptr));
        comboBox_States->setItemText(14, QApplication::translate("MainWindow", "IA", nullptr));
        comboBox_States->setItemText(15, QApplication::translate("MainWindow", "KA", nullptr));
        comboBox_States->setItemText(16, QApplication::translate("MainWindow", "KY", nullptr));
        comboBox_States->setItemText(17, QApplication::translate("MainWindow", "LA", nullptr));
        comboBox_States->setItemText(18, QApplication::translate("MainWindow", "ME", nullptr));
        comboBox_States->setItemText(19, QApplication::translate("MainWindow", "MD", nullptr));
        comboBox_States->setItemText(20, QApplication::translate("MainWindow", "MA", nullptr));
        comboBox_States->setItemText(21, QApplication::translate("MainWindow", "MI", nullptr));
        comboBox_States->setItemText(22, QApplication::translate("MainWindow", "MN", nullptr));
        comboBox_States->setItemText(23, QApplication::translate("MainWindow", "MS", nullptr));
        comboBox_States->setItemText(24, QApplication::translate("MainWindow", "MO", nullptr));
        comboBox_States->setItemText(25, QApplication::translate("MainWindow", "MT", nullptr));
        comboBox_States->setItemText(26, QApplication::translate("MainWindow", "NE", nullptr));
        comboBox_States->setItemText(27, QApplication::translate("MainWindow", "NV", nullptr));
        comboBox_States->setItemText(28, QApplication::translate("MainWindow", "NH", nullptr));
        comboBox_States->setItemText(29, QApplication::translate("MainWindow", "NJ", nullptr));
        comboBox_States->setItemText(30, QApplication::translate("MainWindow", "NM", nullptr));
        comboBox_States->setItemText(31, QApplication::translate("MainWindow", "NY", nullptr));
        comboBox_States->setItemText(32, QApplication::translate("MainWindow", "NC", nullptr));
        comboBox_States->setItemText(33, QApplication::translate("MainWindow", "ND", nullptr));
        comboBox_States->setItemText(34, QApplication::translate("MainWindow", "OH", nullptr));
        comboBox_States->setItemText(35, QApplication::translate("MainWindow", "OK", nullptr));
        comboBox_States->setItemText(36, QApplication::translate("MainWindow", "OR", nullptr));
        comboBox_States->setItemText(37, QApplication::translate("MainWindow", "PA", nullptr));
        comboBox_States->setItemText(38, QApplication::translate("MainWindow", "RI", nullptr));
        comboBox_States->setItemText(39, QApplication::translate("MainWindow", "SC", nullptr));
        comboBox_States->setItemText(40, QApplication::translate("MainWindow", "SD", nullptr));
        comboBox_States->setItemText(41, QApplication::translate("MainWindow", "TN", nullptr));
        comboBox_States->setItemText(42, QApplication::translate("MainWindow", "TX", nullptr));
        comboBox_States->setItemText(43, QApplication::translate("MainWindow", "UT", nullptr));
        comboBox_States->setItemText(44, QApplication::translate("MainWindow", "VT", nullptr));
        comboBox_States->setItemText(45, QApplication::translate("MainWindow", "VA", nullptr));
        comboBox_States->setItemText(46, QApplication::translate("MainWindow", "WA", nullptr));
        comboBox_States->setItemText(47, QApplication::translate("MainWindow", "WV", nullptr));
        comboBox_States->setItemText(48, QApplication::translate("MainWindow", "WI", nullptr));
        comboBox_States->setItemText(49, QApplication::translate("MainWindow", "WY", nullptr));

        pushButton_order->setText(QApplication::translate("MainWindow", "ORDER!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Order", nullptr));
        contactText_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Contact Us</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">iCyberSecurity@gmail.com</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(949) 129 - 2339</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(helpTab), QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
