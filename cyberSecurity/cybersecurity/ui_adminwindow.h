/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *addremoveTab;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_2;
    QTableView *customerTable;
    QPushButton *removeCustomer;
    QPushButton *addCustomer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *keyTable;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QTableView *transTable;
    QPushButton *transButton;

    void setupUi(QDialog *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName(QStringLiteral("adminwindow"));
        adminwindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(adminwindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addremoveTab = new QTabWidget(adminwindow);
        addremoveTab->setObjectName(QStringLiteral("addremoveTab"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        verticalLayout_2 = new QVBoxLayout(tab_1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        customerTable = new QTableView(tab_1);
        customerTable->setObjectName(QStringLiteral("customerTable"));
        customerTable->setEditTriggers(QAbstractItemView::AllEditTriggers);
        customerTable->setSelectionMode(QAbstractItemView::SingleSelection);
        customerTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        customerTable->setSortingEnabled(false);

        verticalLayout_2->addWidget(customerTable);

        removeCustomer = new QPushButton(tab_1);
        removeCustomer->setObjectName(QStringLiteral("removeCustomer"));

        verticalLayout_2->addWidget(removeCustomer);

        addCustomer = new QPushButton(tab_1);
        addCustomer->setObjectName(QStringLiteral("addCustomer"));

        verticalLayout_2->addWidget(addCustomer);

        addremoveTab->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        keyTable = new QTableView(tab_2);
        keyTable->setObjectName(QStringLiteral("keyTable"));

        verticalLayout_3->addWidget(keyTable);

        addremoveTab->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        transTable = new QTableView(tab);
        transTable->setObjectName(QStringLiteral("transTable"));

        verticalLayout_4->addWidget(transTable);

        transButton = new QPushButton(tab);
        transButton->setObjectName(QStringLiteral("transButton"));

        verticalLayout_4->addWidget(transButton);

        addremoveTab->addTab(tab, QString());

        verticalLayout->addWidget(addremoveTab);


        retranslateUi(adminwindow);

        addremoveTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "Dialog", nullptr));
        removeCustomer->setText(QApplication::translate("adminwindow", "Remove", nullptr));
        addCustomer->setText(QApplication::translate("adminwindow", "Add", nullptr));
        addremoveTab->setTabText(addremoveTab->indexOf(tab_1), QApplication::translate("adminwindow", "Add/Remove", nullptr));
        addremoveTab->setTabText(addremoveTab->indexOf(tab_2), QApplication::translate("adminwindow", "Key Customers", nullptr));
        transButton->setText(QApplication::translate("adminwindow", "Get Transactions", nullptr));
        addremoveTab->setTabText(addremoveTab->indexOf(tab), QApplication::translate("adminwindow", "Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
