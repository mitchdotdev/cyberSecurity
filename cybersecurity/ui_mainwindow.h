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
    QTextEdit *contactText;
    QWidget *packageTab;
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
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(973, 573);
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
        welcomeText->setGeometry(QRect(0, 0, 901, 451));
        contactText = new QTextEdit(welcomeTab);
        contactText->setObjectName(QStringLiteral("contactText"));
        contactText->setGeometry(QRect(360, 350, 181, 91));
        contactText->setFrameShape(QFrame::NoFrame);
        contactText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contactText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(welcomeTab, QString());
        packageTab = new QWidget();
        packageTab->setObjectName(QStringLiteral("packageTab"));
        tabWidget->addTab(packageTab, QString());
        reviewsTab = new QWidget();
        reviewsTab->setObjectName(QStringLiteral("reviewsTab"));
        testimonial1_text = new QTextEdit(reviewsTab);
        testimonial1_text->setObjectName(QStringLiteral("testimonial1_text"));
        testimonial1_text->setGeometry(QRect(180, 90, 541, 131));
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
        testimonial2_text->setGeometry(QRect(220, 90, 461, 181));
        testimonial2_text->setFrameShape(QFrame::NoFrame);
        testimonial2_text->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial2_text->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testimonial3_text = new QTextEdit(reviewsTab);
        testimonial3_text->setObjectName(QStringLiteral("testimonial3_text"));
        testimonial3_text->setGeometry(QRect(210, 90, 461, 181));
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
        helpText->setGeometry(QRect(0, 0, 901, 441));
        helpText->setFrameShape(QFrame::NoFrame);
        helpText->setFrameShadow(QFrame::Plain);
        helpText->setReadOnly(true);
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

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "iCyberSecurity", nullptr));
        contactText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Contact Us</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">iCyberSecurity@gmail.com</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(949) 129 - 2339</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(welcomeTab), QApplication::translate("MainWindow", "Welcome", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(helpTab), QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
