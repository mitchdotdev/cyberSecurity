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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
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
        label->setGeometry(QRect(20, 10, 711, 351));
        label_2 = new QLabel(packageTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 380, 911, 191));
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

        tabWidget->setCurrentIndex(1);


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
"      Services are guaranteed to protect from malware, spyware, viruses and hacking only when used properly. iCyberSecurity Inc. will not take responsibility for failure of the organization \n"
"to follow through with proper security protocols. If there is a security breach, iCyberSecurity will reimbursed the client 6 months\342\200\231 fees and a gaggle of super fluffy pet bunnies. In \n"
"addition iCyberSecurity will perform a clean sweep of the system and remove all malicious software and security breaches. In order to verify that the client adheres to the proper protocols, \n"
"logs of computer usage, log-ins, uploads and downloads, web usage and emails will be kept.\n"
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
