#ifndef DLL_H
#define DLL_H

#include <QMainWindow>

namespace Ui {
class Dll;
}

class Dll : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dll(QWidget *parent = 0);
    ~Dll();

private slots:
    void on_pushButton_clicked();


private:
    Ui::Dll *ui;
};

#endif // DLL_H
