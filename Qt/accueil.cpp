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
    palette.setBrush(this->backgroundRole(),QBrush(QImage("D:/Users/T0144266/Documents/projetc++_Marc/projetc++/fond.png")));
    this->setPalette(palette);

    ui->bouton_quit_app->setIcon(QIcon("D:/Users/T0144266/Documents/projetc++_Marc/projetc++/croix.jpg"));
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

