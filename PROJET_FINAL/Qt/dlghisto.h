#ifndef DLGHISTO_H
#define DLGHISTO_H

#include <QDialog>

namespace Ui {
class dlgHisto;
}

class dlgHisto : public QDialog
{
    Q_OBJECT

public:
    explicit dlgHisto(QWidget *parent = 0);
    ~dlgHisto();

    void afficheHisto(int*);
    void fermer();

private:
    Ui::dlgHisto *ui;
};

#endif // DLGHISTO_H
