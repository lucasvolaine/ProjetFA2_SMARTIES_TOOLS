#ifndef CHISTO_H
#define CHISTO_H

#include <QDialog>



class chisto : public QDialog
{
    Q_OBJECT

public:
    explicit chisto(QWidget *parent = 0);
    ~chisto();

    void afficheHisto(int*);

private:

};

#endif // CHISTO_H
