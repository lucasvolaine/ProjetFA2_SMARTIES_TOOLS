#include "dll.h"
#include "ui_dll.h"

#include "ImageNdg.h"

#include <QImage>


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

void Dll::on_pushButton_clicked()
{

    QString fileName = "<C:/Users/Lucas/Documents/GitHub/Git/ProjetFA2_SMARTIES_TOOLS/DLL TI Qt/DLL/euros5.bmp>";
    QImage image_traitee = QImage(fileName);
    CImageNdg caca = CImageNdg(image_traitee);
    QImage image_affiche = caca.GetQImageNdg();


}
