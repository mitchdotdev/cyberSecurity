/********************************************************************************
** Form generated from reading UI file 'addcustomerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMERWINDOW_H
#define UI_ADDCUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addcustomerwindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *streetLabel;
    QLineEdit *streetEdit;
    QLabel *cityLabel;
    QLineEdit *cityEdit;
    QLabel *stateLabel;
    QComboBox *statesComboBox;
    QLabel *zipcodeLabel;
    QSpinBox *zipcodeSpinBox;
    QLabel *interestLabel;
    QLineEdit *interestEdit;
    QLabel *valueLabel;
    QLineEdit *valueEdit;
    QLabel *outputLabel;
    QPushButton *addButton;

    void setupUi(QDialog *addcustomerwindow)
    {
        if (addcustomerwindow->objectName().isEmpty())
            addcustomerwindow->setObjectName(QStringLiteral("addcustomerwindow"));
        addcustomerwindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(addcustomerwindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLabel = new QLabel(addcustomerwindow);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        nameEdit = new QLineEdit(addcustomerwindow);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        verticalLayout->addWidget(nameEdit);

        streetLabel = new QLabel(addcustomerwindow);
        streetLabel->setObjectName(QStringLiteral("streetLabel"));

        verticalLayout->addWidget(streetLabel);

        streetEdit = new QLineEdit(addcustomerwindow);
        streetEdit->setObjectName(QStringLiteral("streetEdit"));

        verticalLayout->addWidget(streetEdit);

        cityLabel = new QLabel(addcustomerwindow);
        cityLabel->setObjectName(QStringLiteral("cityLabel"));

        verticalLayout->addWidget(cityLabel);

        cityEdit = new QLineEdit(addcustomerwindow);
        cityEdit->setObjectName(QStringLiteral("cityEdit"));

        verticalLayout->addWidget(cityEdit);

        stateLabel = new QLabel(addcustomerwindow);
        stateLabel->setObjectName(QStringLiteral("stateLabel"));

        verticalLayout->addWidget(stateLabel);

        statesComboBox = new QComboBox(addcustomerwindow);
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->addItem(QString());
        statesComboBox->setObjectName(QStringLiteral("statesComboBox"));

        verticalLayout->addWidget(statesComboBox);

        zipcodeLabel = new QLabel(addcustomerwindow);
        zipcodeLabel->setObjectName(QStringLiteral("zipcodeLabel"));

        verticalLayout->addWidget(zipcodeLabel);

        zipcodeSpinBox = new QSpinBox(addcustomerwindow);
        zipcodeSpinBox->setObjectName(QStringLiteral("zipcodeSpinBox"));
        zipcodeSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        zipcodeSpinBox->setMaximum(99999);

        verticalLayout->addWidget(zipcodeSpinBox);

        interestLabel = new QLabel(addcustomerwindow);
        interestLabel->setObjectName(QStringLiteral("interestLabel"));

        verticalLayout->addWidget(interestLabel);

        interestEdit = new QLineEdit(addcustomerwindow);
        interestEdit->setObjectName(QStringLiteral("interestEdit"));

        verticalLayout->addWidget(interestEdit);

        valueLabel = new QLabel(addcustomerwindow);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        verticalLayout->addWidget(valueLabel);

        valueEdit = new QLineEdit(addcustomerwindow);
        valueEdit->setObjectName(QStringLiteral("valueEdit"));

        verticalLayout->addWidget(valueEdit);

        outputLabel = new QLabel(addcustomerwindow);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));

        verticalLayout->addWidget(outputLabel);

        addButton = new QPushButton(addcustomerwindow);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout->addWidget(addButton);


        retranslateUi(addcustomerwindow);

        QMetaObject::connectSlotsByName(addcustomerwindow);
    } // setupUi

    void retranslateUi(QDialog *addcustomerwindow)
    {
        addcustomerwindow->setWindowTitle(QApplication::translate("addcustomerwindow", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("addcustomerwindow", "Company Name", nullptr));
        streetLabel->setText(QApplication::translate("addcustomerwindow", "Street", nullptr));
        cityLabel->setText(QApplication::translate("addcustomerwindow", "City", nullptr));
        stateLabel->setText(QApplication::translate("addcustomerwindow", "State", nullptr));
        statesComboBox->setItemText(0, QApplication::translate("addcustomerwindow", "AL", nullptr));
        statesComboBox->setItemText(1, QApplication::translate("addcustomerwindow", "AK", nullptr));
        statesComboBox->setItemText(2, QApplication::translate("addcustomerwindow", "AZ", nullptr));
        statesComboBox->setItemText(3, QApplication::translate("addcustomerwindow", "AR", nullptr));
        statesComboBox->setItemText(4, QApplication::translate("addcustomerwindow", "CA", nullptr));
        statesComboBox->setItemText(5, QApplication::translate("addcustomerwindow", "CO", nullptr));
        statesComboBox->setItemText(6, QApplication::translate("addcustomerwindow", "CT", nullptr));
        statesComboBox->setItemText(7, QApplication::translate("addcustomerwindow", "DE", nullptr));
        statesComboBox->setItemText(8, QApplication::translate("addcustomerwindow", "FL", nullptr));
        statesComboBox->setItemText(9, QApplication::translate("addcustomerwindow", "GA", nullptr));
        statesComboBox->setItemText(10, QApplication::translate("addcustomerwindow", "HI", nullptr));
        statesComboBox->setItemText(11, QApplication::translate("addcustomerwindow", "ID", nullptr));
        statesComboBox->setItemText(12, QApplication::translate("addcustomerwindow", "IL", nullptr));
        statesComboBox->setItemText(13, QApplication::translate("addcustomerwindow", "IN", nullptr));
        statesComboBox->setItemText(14, QApplication::translate("addcustomerwindow", "IA", nullptr));
        statesComboBox->setItemText(15, QApplication::translate("addcustomerwindow", "KS", nullptr));
        statesComboBox->setItemText(16, QApplication::translate("addcustomerwindow", "KY", nullptr));
        statesComboBox->setItemText(17, QApplication::translate("addcustomerwindow", "LA", nullptr));
        statesComboBox->setItemText(18, QApplication::translate("addcustomerwindow", "ME", nullptr));
        statesComboBox->setItemText(19, QApplication::translate("addcustomerwindow", "MD", nullptr));
        statesComboBox->setItemText(20, QApplication::translate("addcustomerwindow", "MA", nullptr));
        statesComboBox->setItemText(21, QApplication::translate("addcustomerwindow", "MI", nullptr));
        statesComboBox->setItemText(22, QApplication::translate("addcustomerwindow", "MN", nullptr));
        statesComboBox->setItemText(23, QApplication::translate("addcustomerwindow", "MS", nullptr));
        statesComboBox->setItemText(24, QApplication::translate("addcustomerwindow", "MO", nullptr));
        statesComboBox->setItemText(25, QApplication::translate("addcustomerwindow", "MT", nullptr));
        statesComboBox->setItemText(26, QApplication::translate("addcustomerwindow", "NE", nullptr));
        statesComboBox->setItemText(27, QApplication::translate("addcustomerwindow", "NV", nullptr));
        statesComboBox->setItemText(28, QApplication::translate("addcustomerwindow", "NH", nullptr));
        statesComboBox->setItemText(29, QApplication::translate("addcustomerwindow", "NJ", nullptr));
        statesComboBox->setItemText(30, QApplication::translate("addcustomerwindow", "NM", nullptr));
        statesComboBox->setItemText(31, QApplication::translate("addcustomerwindow", "NY", nullptr));
        statesComboBox->setItemText(32, QApplication::translate("addcustomerwindow", "NC", nullptr));
        statesComboBox->setItemText(33, QApplication::translate("addcustomerwindow", "ND", nullptr));
        statesComboBox->setItemText(34, QApplication::translate("addcustomerwindow", "OH", nullptr));
        statesComboBox->setItemText(35, QApplication::translate("addcustomerwindow", "OK", nullptr));
        statesComboBox->setItemText(36, QApplication::translate("addcustomerwindow", "OR", nullptr));
        statesComboBox->setItemText(37, QApplication::translate("addcustomerwindow", "PA", nullptr));
        statesComboBox->setItemText(38, QApplication::translate("addcustomerwindow", "RI", nullptr));
        statesComboBox->setItemText(39, QApplication::translate("addcustomerwindow", "SC", nullptr));
        statesComboBox->setItemText(40, QApplication::translate("addcustomerwindow", "SD", nullptr));
        statesComboBox->setItemText(41, QApplication::translate("addcustomerwindow", "TN", nullptr));
        statesComboBox->setItemText(42, QApplication::translate("addcustomerwindow", "TX", nullptr));
        statesComboBox->setItemText(43, QApplication::translate("addcustomerwindow", "UT", nullptr));
        statesComboBox->setItemText(44, QApplication::translate("addcustomerwindow", "VT", nullptr));
        statesComboBox->setItemText(45, QApplication::translate("addcustomerwindow", "VA", nullptr));
        statesComboBox->setItemText(46, QApplication::translate("addcustomerwindow", "WA", nullptr));
        statesComboBox->setItemText(47, QApplication::translate("addcustomerwindow", "WV", nullptr));
        statesComboBox->setItemText(48, QApplication::translate("addcustomerwindow", "WI", nullptr));
        statesComboBox->setItemText(49, QApplication::translate("addcustomerwindow", "WY", nullptr));

        zipcodeLabel->setText(QApplication::translate("addcustomerwindow", "Zipcode", nullptr));
        interestLabel->setText(QApplication::translate("addcustomerwindow", "Interest", nullptr));
        valueLabel->setText(QApplication::translate("addcustomerwindow", "Value", nullptr));
        outputLabel->setText(QString());
        addButton->setText(QApplication::translate("addcustomerwindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addcustomerwindow: public Ui_addcustomerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMERWINDOW_H
