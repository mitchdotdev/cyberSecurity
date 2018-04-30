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
#include <QtWidgets/QSpacerItem>
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
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *welcomeTab;
    QTextEdit *welcomeText;
    QWidget *packageTab;
    QLabel *label;
    QLabel *label_2;
    QWidget *reviewsTab;
    QTextEdit *testimonial1_text;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *firstTestimonial;
    QRadioButton *secondTestimonial;
    QRadioButton *thirdTestimonial;
    QTextEdit *testimonial2_text;
    QTextEdit *testimonial3_text;
    QWidget *tab;
    QPushButton *pushButton_order;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_Regular;
    QRadioButton *radioButton_Premium;
    QRadioButton *radioButton_Executive;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Name;
    QLineEdit *lineEdit_name;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Address;
    QLineEdit *lineEdit_address;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_ZipCode;
    QLineEdit *lineEdit_zipCode;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_State;
    QComboBox *comboBox_States;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Pick_Package;
    QSpacerItem *horizontalSpacer;
    QLabel *label_Enter_Info;
    QWidget *helpTab;
    QTextEdit *helpText;
    QTextEdit *contactText_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1053, 710);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        welcomeTab = new QWidget();
        welcomeTab->setObjectName(QStringLiteral("welcomeTab"));
        welcomeText = new QTextEdit(welcomeTab);
        welcomeText->setObjectName(QStringLiteral("welcomeText"));
        welcomeText->setGeometry(QRect(0, 0, 1031, 621));
        tabWidget->addTab(welcomeTab, QString());
        packageTab = new QWidget();
        packageTab->setObjectName(QStringLiteral("packageTab"));
        label = new QLabel(packageTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 711, 351));
        label_2 = new QLabel(packageTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 420, 1021, 191));
        tabWidget->addTab(packageTab, QString());
        reviewsTab = new QWidget();
        reviewsTab->setObjectName(QStringLiteral("reviewsTab"));
        testimonial1_text = new QTextEdit(reviewsTab);
        testimonial1_text->setObjectName(QStringLiteral("testimonial1_text"));
        testimonial1_text->setGeometry(QRect(240, 100, 541, 131));
        testimonial1_text->setFrameShape(QFrame::NoFrame);
        testimonial1_text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial1_text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        layoutWidget = new QWidget(reviewsTab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 460, 361, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        firstTestimonial = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(firstTestimonial);
        firstTestimonial->setObjectName(QStringLiteral("firstTestimonial"));

        horizontalLayout->addWidget(firstTestimonial);

        secondTestimonial = new QRadioButton(layoutWidget);
        buttonGroup->addButton(secondTestimonial);
        secondTestimonial->setObjectName(QStringLiteral("secondTestimonial"));

        horizontalLayout->addWidget(secondTestimonial);

        thirdTestimonial = new QRadioButton(layoutWidget);
        buttonGroup->addButton(thirdTestimonial);
        thirdTestimonial->setObjectName(QStringLiteral("thirdTestimonial"));

        horizontalLayout->addWidget(thirdTestimonial);

        secondTestimonial->raise();
        firstTestimonial->raise();
        thirdTestimonial->raise();
        testimonial2_text = new QTextEdit(reviewsTab);
        testimonial2_text->setObjectName(QStringLiteral("testimonial2_text"));
        testimonial2_text->setGeometry(QRect(280, 100, 461, 181));
        testimonial2_text->setFrameShape(QFrame::NoFrame);
        testimonial2_text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial2_text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial3_text = new QTextEdit(reviewsTab);
        testimonial3_text->setObjectName(QStringLiteral("testimonial3_text"));
        testimonial3_text->setGeometry(QRect(270, 100, 461, 181));
        testimonial3_text->setFrameShape(QFrame::NoFrame);
        testimonial3_text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial3_text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(reviewsTab, QString());
        layoutWidget->raise();
        testimonial1_text->raise();
        testimonial2_text->raise();
        testimonial3_text->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_order = new QPushButton(tab);
        pushButton_order->setObjectName(QStringLiteral("pushButton_order"));
        pushButton_order->setGeometry(QRect(820, 320, 121, 31));
        QFont font;
        font.setPointSize(19);
        pushButton_order->setFont(font);
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 270, 271, 211));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_Regular = new QRadioButton(widget);
        radioButton_Regular->setObjectName(QStringLiteral("radioButton_Regular"));
        QFont font1;
        font1.setPointSize(16);
        radioButton_Regular->setFont(font1);
        radioButton_Regular->setIconSize(QSize(16, 16));

        verticalLayout_2->addWidget(radioButton_Regular);

        radioButton_Premium = new QRadioButton(widget);
        radioButton_Premium->setObjectName(QStringLiteral("radioButton_Premium"));
        radioButton_Premium->setFont(font1);

        verticalLayout_2->addWidget(radioButton_Premium);

        radioButton_Executive = new QRadioButton(widget);
        radioButton_Executive->setObjectName(QStringLiteral("radioButton_Executive"));
        radioButton_Executive->setFont(font1);

        verticalLayout_2->addWidget(radioButton_Executive);

        widget1 = new QWidget(tab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(431, 239, 241, 281));
        verticalLayout_8 = new QVBoxLayout(widget1);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_Name = new QLabel(widget1);
        label_Name->setObjectName(QStringLiteral("label_Name"));
        QFont font2;
        font2.setPointSize(15);
        label_Name->setFont(font2);

        verticalLayout_4->addWidget(label_Name);

        lineEdit_name = new QLineEdit(widget1);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout_4->addWidget(lineEdit_name);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_Address = new QLabel(widget1);
        label_Address->setObjectName(QStringLiteral("label_Address"));
        label_Address->setFont(font2);

        verticalLayout_5->addWidget(label_Address);

        lineEdit_address = new QLineEdit(widget1);
        lineEdit_address->setObjectName(QStringLiteral("lineEdit_address"));

        verticalLayout_5->addWidget(lineEdit_address);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_ZipCode = new QLabel(widget1);
        label_ZipCode->setObjectName(QStringLiteral("label_ZipCode"));
        label_ZipCode->setFont(font2);

        verticalLayout_6->addWidget(label_ZipCode);

        lineEdit_zipCode = new QLineEdit(widget1);
        lineEdit_zipCode->setObjectName(QStringLiteral("lineEdit_zipCode"));

        verticalLayout_6->addWidget(lineEdit_zipCode);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_State = new QLabel(widget1);
        label_State->setObjectName(QStringLiteral("label_State"));
        label_State->setFont(font2);

        verticalLayout_7->addWidget(label_State);

        comboBox_States = new QComboBox(widget1);
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

        widget2 = new QWidget(tab);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(112, 87, 431, 22));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Pick_Package = new QLabel(widget2);
        label_Pick_Package->setObjectName(QStringLiteral("label_Pick_Package"));
        label_Pick_Package->setFont(font2);
        label_Pick_Package->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_Pick_Package);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_Enter_Info = new QLabel(widget2);
        label_Enter_Info->setObjectName(QStringLiteral("label_Enter_Info"));
        label_Enter_Info->setFont(font2);
        label_Enter_Info->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_Enter_Info);

        tabWidget->addTab(tab, QString());
        helpTab = new QWidget();
        helpTab->setObjectName(QStringLiteral("helpTab"));
        helpText = new QTextEdit(helpTab);
        helpText->setObjectName(QStringLiteral("helpText"));
        helpText->setGeometry(QRect(0, 0, 1031, 621));
        helpText->setFrameShape(QFrame::NoFrame);
        helpText->setFrameShadow(QFrame::Plain);
        helpText->setReadOnly(true);
        contactText_2 = new QTextEdit(helpTab);
        contactText_2->setObjectName(QStringLiteral("contactText_2"));
        contactText_2->setGeometry(QRect(400, 500, 181, 91));
        contactText_2->setFrameShape(QFrame::NoFrame);
        contactText_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contactText_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contactText_2->setReadOnly(true);
        tabWidget->addTab(helpTab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "iCyberSecurity", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(welcomeTab), QApplication::translate("MainWindow", "Welcome", nullptr));
        label->setText(QApplication::translate("MainWindow", "Regular - $500/month\n"
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
"	\342\200\242  Passes "
                        "all traffic through out secure servers.\n"
"	\342\200\242  Runs hourly security checks and scans.\n"
"	\342\200\242  Scans all incoming emails and downloads for malware.\n"
"	\342\200\242  Implements a secure mode if there are any security breaches\n"
"	\342\200\242  Maintenance and upgrades against the latest security threats every month\n"
"", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Guarantee Policy:\n"
"\n"
"      Services are guaranteed to protect from malware, spyware, viruses and hacking only when used properly. iCyberSecurity Inc. will not take responsibility for failure of\n"
"the organization to follow through with proper security protocols. If there is a security breach, iCyberSecurity will reimbursed the client 6 months\342\200\231 fees and a gaggle\n"
"of super fluffy pet bunnies. In addition iCyberSecurity will perform a clean sweep of the system and remove all malicious software and security breaches. In order to\n"
"verify that the client adheres to the proper protocols, logs of computer usage, log-ins, uploads and downloads, web usage and emails will be kept.\n"
"", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(packageTab), QApplication::translate("MainWindow", "Packages", nullptr));
        testimonial1_text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">&quot;iCyberSecurity has helped my small business stay safe from all kinds of cyber threats for 10+ years!&quot;</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\"> - Jeff Bezos</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\"> (founder of som"
                        "e company called Amazon)</span></p></body></html>", nullptr));
        firstTestimonial->setText(QString());
        secondTestimonial->setText(QString());
        thirdTestimonial->setText(QString());
        testimonial2_text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">&quot;Although we started as a small business, iCyberSecurity has provided top notch cyber security as we have scaled throughout the years!&quot;</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\"> - Elon Musk</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fo"
                        "nt-size:24pt;\"> (founder of Tesla)</span></p></body></html>", nullptr));
        testimonial3_text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">&quot;Being a tech company security is of the utmost importance. iCyberSecurity has consistently been a step ahead and has protected us from potential cyber threats!&quot;</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\"> - Mark Zuckerberg</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><span style=\" font-size:24pt;\"> (founder of Facebook)</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(reviewsTab), QApplication::translate("MainWindow", "Reviews", nullptr));
        pushButton_order->setText(QApplication::translate("MainWindow", "ORDER!", nullptr));
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

        label_Pick_Package->setText(QApplication::translate("MainWindow", "Pick your package", nullptr));
        label_Enter_Info->setText(QApplication::translate("MainWindow", "Enter your info", nullptr));
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
