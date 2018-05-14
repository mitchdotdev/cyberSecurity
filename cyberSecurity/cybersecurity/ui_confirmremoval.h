/********************************************************************************
** Form generated from reading UI file 'confirmremoval.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMREMOVAL_H
#define UI_CONFIRMREMOVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfirmRemoval
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *removeLabel;
    QTableView *removeTable;
    QPushButton *confirmButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ConfirmRemoval)
    {
        if (ConfirmRemoval->objectName().isEmpty())
            ConfirmRemoval->setObjectName(QStringLiteral("ConfirmRemoval"));
        ConfirmRemoval->resize(400, 300);
        verticalLayout = new QVBoxLayout(ConfirmRemoval);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        removeLabel = new QLabel(ConfirmRemoval);
        removeLabel->setObjectName(QStringLiteral("removeLabel"));

        verticalLayout->addWidget(removeLabel);

        removeTable = new QTableView(ConfirmRemoval);
        removeTable->setObjectName(QStringLiteral("removeTable"));

        verticalLayout->addWidget(removeTable);

        confirmButton = new QPushButton(ConfirmRemoval);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));

        verticalLayout->addWidget(confirmButton);

        cancelButton = new QPushButton(ConfirmRemoval);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout->addWidget(cancelButton);


        retranslateUi(ConfirmRemoval);

        QMetaObject::connectSlotsByName(ConfirmRemoval);
    } // setupUi

    void retranslateUi(QDialog *ConfirmRemoval)
    {
        ConfirmRemoval->setWindowTitle(QApplication::translate("ConfirmRemoval", "Dialog", nullptr));
        removeLabel->setText(QApplication::translate("ConfirmRemoval", "Are you sure you want to remove the following?", nullptr));
        confirmButton->setText(QApplication::translate("ConfirmRemoval", "Confirm", nullptr));
        cancelButton->setText(QApplication::translate("ConfirmRemoval", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmRemoval: public Ui_ConfirmRemoval {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMREMOVAL_H
