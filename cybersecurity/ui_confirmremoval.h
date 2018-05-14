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

QT_BEGIN_NAMESPACE

class Ui_ConfirmRemoval
{
public:
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QTableView *removeTable;
    QLabel *removeLabel;

    void setupUi(QDialog *ConfirmRemoval)
    {
        if (ConfirmRemoval->objectName().isEmpty())
            ConfirmRemoval->setObjectName(QStringLiteral("ConfirmRemoval"));
        ConfirmRemoval->resize(400, 300);
        confirmButton = new QPushButton(ConfirmRemoval);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(50, 240, 80, 16));
        cancelButton = new QPushButton(ConfirmRemoval);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(190, 240, 80, 16));
        removeTable = new QTableView(ConfirmRemoval);
        removeTable->setObjectName(QStringLiteral("removeTable"));
        removeTable->setGeometry(QRect(50, 30, 256, 192));
        removeLabel = new QLabel(ConfirmRemoval);
        removeLabel->setObjectName(QStringLiteral("removeLabel"));
        removeLabel->setGeometry(QRect(100, 10, 181, 16));

        retranslateUi(ConfirmRemoval);

        QMetaObject::connectSlotsByName(ConfirmRemoval);
    } // setupUi

    void retranslateUi(QDialog *ConfirmRemoval)
    {
        ConfirmRemoval->setWindowTitle(QApplication::translate("ConfirmRemoval", "Dialog", nullptr));
        confirmButton->setText(QApplication::translate("ConfirmRemoval", "Confirm", nullptr));
        cancelButton->setText(QApplication::translate("ConfirmRemoval", "Cancel", nullptr));
        removeLabel->setText(QApplication::translate("ConfirmRemoval", "Are you sure you want to remove the following?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmRemoval: public Ui_ConfirmRemoval {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMREMOVAL_H
