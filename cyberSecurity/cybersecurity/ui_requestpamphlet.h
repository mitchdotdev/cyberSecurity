/********************************************************************************
** Form generated from reading UI file 'requestpamphlet.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTPAMPHLET_H
#define UI_REQUESTPAMPHLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_requestPamphlet
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *name;
    QLineEdit *address;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *city;
    QLineEdit *state;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *requestPamphlet)
    {
        if (requestPamphlet->objectName().isEmpty())
            requestPamphlet->setObjectName(QStringLiteral("requestPamphlet"));
        requestPamphlet->resize(400, 300);
        buttonBox = new QDialogButtonBox(requestPamphlet);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        name = new QLineEdit(requestPamphlet);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(170, 50, 201, 21));
        address = new QLineEdit(requestPamphlet);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(170, 90, 201, 21));
        label = new QLabel(requestPamphlet);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 131, 21));
        label_2 = new QLabel(requestPamphlet);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 121, 21));
        label_3 = new QLabel(requestPamphlet);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 71, 16));
        city = new QLineEdit(requestPamphlet);
        city->setObjectName(QStringLiteral("city"));
        city->setGeometry(QRect(170, 130, 201, 21));
        state = new QLineEdit(requestPamphlet);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(170, 170, 201, 21));
        label_4 = new QLabel(requestPamphlet);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 170, 71, 16));
        label_5 = new QLabel(requestPamphlet);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 10, 181, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        retranslateUi(requestPamphlet);
        QObject::connect(buttonBox, SIGNAL(accepted()), requestPamphlet, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), requestPamphlet, SLOT(reject()));

        QMetaObject::connectSlotsByName(requestPamphlet);
    } // setupUi

    void retranslateUi(QDialog *requestPamphlet)
    {
        requestPamphlet->setWindowTitle(QApplication::translate("requestPamphlet", "Dialog", nullptr));
        name->setText(QApplication::translate("requestPamphlet", "Company Name", nullptr));
        address->setText(QApplication::translate("requestPamphlet", "Address", nullptr));
        label->setText(QApplication::translate("requestPamphlet", "Company Name:", nullptr));
        label_2->setText(QApplication::translate("requestPamphlet", "Address:", nullptr));
        label_3->setText(QApplication::translate("requestPamphlet", "City:", nullptr));
        city->setText(QApplication::translate("requestPamphlet", "City", nullptr));
        state->setText(QApplication::translate("requestPamphlet", "State", nullptr));
        label_4->setText(QApplication::translate("requestPamphlet", "State:", nullptr));
        label_5->setText(QApplication::translate("requestPamphlet", "Request pamphlet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class requestPamphlet: public Ui_requestPamphlet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTPAMPHLET_H
