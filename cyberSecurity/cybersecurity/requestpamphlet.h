#ifndef REQUESTPAMPHLET_H
#define REQUESTPAMPHLET_H

#include <QDialog>

namespace Ui {
class requestPamphlet;
}

class requestPamphlet : public QDialog
{
    Q_OBJECT

public:
    explicit requestPamphlet(QWidget *parent = 0);
    ~requestPamphlet();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::requestPamphlet *ui;
    QString companyName;
    QString companyAddress;
    QString companyCity;
    QString companyState;

};

#endif // REQUESTPAMPHLET_H
