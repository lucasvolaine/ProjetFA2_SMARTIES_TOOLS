#include "accueil.h"
#include "ui_accueil.h"
#include "mainwindow.h"

accueil::accueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accueil)
{
    ui->setupUi(this);

    //QTime timeEdit = QTime::currentTime();
    ui->timeEdit->QTimeEdit::setTime(QTime::currentTime());

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(QImage("accueil.jpg")));
    this->setPalette(palette);

    ui->bouton_quit_app->setIcon(QIcon("croix.jpg"));
}

accueil::~accueil()
{
    delete ui;
}


void accueil::on_link_commencer_clicked()
{

   MainWindow *retourfenetre= new  MainWindow(this);
   retourfenetre->setVisible(true);

   this->hide();

}

