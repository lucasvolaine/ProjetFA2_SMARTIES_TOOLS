#include "dll.h"
#include "ui_dll.h"

Dll::Dll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dll)
{
    ui->setupUi(this);
}

Dll::~Dll()
{
    delete ui;
}
