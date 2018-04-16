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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
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
    QWidget *reviewsTab;
    QWidget *helpTab;
    QTextEdit *helpText;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(475, 230);
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
        welcomeText->setGeometry(QRect(0, 0, 461, 171));
        tabWidget->addTab(welcomeTab, QString());
        packageTab = new QWidget();
        packageTab->setObjectName(QStringLiteral("packageTab"));
        tabWidget->addTab(packageTab, QString());
        reviewsTab = new QWidget();
        reviewsTab->setObjectName(QStringLiteral("reviewsTab"));
        tabWidget->addTab(reviewsTab, QString());
        helpTab = new QWidget();
        helpTab->setObjectName(QStringLiteral("helpTab"));
        helpText = new QTextEdit(helpTab);
        helpText->setObjectName(QStringLiteral("helpText"));
        helpText->setGeometry(QRect(0, 0, 461, 161));
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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "iCyberSecurity", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(welcomeTab), QApplication::translate("MainWindow", "Welcome", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(packageTab), QApplication::translate("MainWindow", "Packages", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(reviewsTab), QApplication::translate("MainWindow", "Reviews", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(helpTab), QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
