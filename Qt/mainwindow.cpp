#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "climage.h"
#include "accueil.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tab_couleur->setStyleSheet("QTabWidget,QTabWidget::pane,QTabBar { background: transparent; border: 0px;  }");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(QImage("D:/Users/T0144266/Documents/projetc++_Marc/projetc++/fond.png")));
    this->setPalette(palette);

    ui->tab_couleur->setTabText(0, "Histogramme et historique");
    ui->tab_couleur->setTabText(1, "Traitement couleur");
    ui->tab_couleur->setTabText(2, "Autres");

    ui->lbl_bleu->setStyleSheet("color : blue");
    ui->lbl_rouge->setStyleSheet("color : red");
    ui->lbl_vert->setStyleSheet("color : green");

    ui->scrolldest->setToolTip("Image traitée");
    ui->scroll_3->setToolTip("Image source");
    ui->scroll_bleu->setToolTip("Plan Bleu");
    ui->scroll_rouge->setToolTip("Plan Rouge");
    ui->scroll_vert->setToolTip("Plan Vert");
    ui->scroll->setToolTip("Image Source");

    ui->grapHisto->setToolTip("Histogramme");
    ui->txthistori->setToolTip("Historique des actions");

    operation = 0;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOurvir_triggered()
{
    QFileDialog dlg(this);
    dlg.setNameFilter(tr("Images(*.bmp *.png *.gif *.jpg);"));
    dlg.setViewMode (QFileDialog::Detail);
    QString nomFic=dlg.getOpenFileName(this,"Fichier image source","D:/","Images (*.bmp *.png *.gif *.jpg);");
    image_source.load(nomFic);
    imgQ.load(nomFic);
    coeffZoom_source=1;
    coeff_zoom_traite = 1;
    coeff_zoom_originale = 1;

    image_affiche = image_source;

    affichageImage(image_affiche.scaled(200,200,Qt::KeepAspectRatioByExpanding),coeffZoom_source,ui->scroll);
    ui->scroll->setAlignment(Qt::AlignCenter);
    ui->scroll_3->setAlignment(Qt::AlignCenter);
    affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);
    affichageImage(image_affiche,coeff_zoom_originale,ui->scroll_3);
    ui->scrolldest->setAlignment(Qt::AlignCenter);


/*int *histogramme = new int[256]; //init nom et taille histo

    imgQ=imgQ.convertToFormat(QImage::Format_Indexed8);
    ClImage *img=new ClImage(imgQ);

   QGraphicsScene *scene = new QGraphicsScene;
   scene->addPixmap(img);

     histogramme=img->histogramme();

    scene = *histogramme; // probleme de compatibilité int vers scene pour afficher histo
     ui->grapHisto->setScene(scene);*/
}

void MainWindow::on_actionEnregistrer_sous_triggered()
{
    QFileDialog dlg(this);
    QString nomFic;
    dlg.setViewMode(QFileDialog::Detail);
    nomFic=dlg.getSaveFileName(this,tr("Save File"),"",tr("JPEG (*.jpg *.jpeg);;PNG (*.png);; BMP (*.bmp);; GIF (*.gif); "));

    image_enregistrer=image_affiche.convertToFormat(QImage::Format_ARGB32);
    image_enregistrer.save(nomFic);
}

void MainWindow::on_actionA_propos_de_Qt_triggered()
{
    QMessageBox boiteMessage;
    boiteMessage.aboutQt(this,"A propos de Qt");
}

void MainWindow::on_actionInversion_triggered()
{
    operation ++;

    image_traitee = image_source;
    QImage imgQ(image_traitee);
    imgQ=imgQ.convertToFormat(QImage::Format_Indexed8);//on charge n'importe quel type d'images et on le change en format indéxé

    ClImage *img=new ClImage(imgQ);

    *img=img->inversion();
    imgQ=img->imgQImage();

    image_traitee=imgQ;;//enregistrement de la nouvelle image
    image_affiche = image_traitee;

    affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);

    ui->txthistori->insertPlainText(QString::number(operation));
    ui->txthistori->insertPlainText(". Image Inversée \n");

}

void MainWindow::on_actionRouge_triggered()
{
    operation ++;

    image_rouge = image_source;
    QImage imgQ(image_rouge);
    ClImage *img=new ClImage(imgQ);
    *img=img->extraction(1,imgQ);
    imgQ=img->imgQImage();

    image_rouge=imgQ;
    affiche_rouge = image_rouge;
    coeff_zoom_rouge=1;

    affichageImage(affiche_rouge,coeff_zoom_rouge,ui->scroll_rouge);
    ui->scroll_rouge->setAlignment(Qt::AlignCenter);

    ui->txthistori->insertPlainText(QString::number(operation));
    ui->txthistori->insertPlainText(". Plan Rouge page 2 \n");

}

void MainWindow::on_actionBleu_triggered()
{
    operation ++;

    image_bleue = image_source;
    QImage imgQ(image_bleue);
    ClImage *img=new ClImage(imgQ);
    *img=img->extraction(3,imgQ);
    imgQ=img->imgQImage();

    image_bleue=imgQ;
    affiche_bleue = image_bleue ;
    coeff_zoom_bleu =1 ;

    affichageImage(affiche_bleue,coeff_zoom_bleu,ui->scroll_bleu);
    ui->scroll_bleu->setAlignment(Qt::AlignCenter);

    ui->txthistori->insertPlainText(QString::number(operation));
    ui->txthistori->insertPlainText(". Plan Bleu page 2 \n");

}

void MainWindow::on_actionVert_triggered()
{
    operation ++;

    image_vert= image_source;
    QImage imgQ(image_vert);
    ClImage *img=new ClImage(imgQ);
    *img=img->extraction(2,imgQ);
    imgQ=img->imgQImage();

    image_vert = imgQ;
    affiche_verte = image_vert;
    coeff_zoom_vert = 1;

    affichageImage(affiche_verte,coeff_zoom_vert,ui->scroll_vert);
    ui->scroll_vert->setAlignment(Qt::AlignCenter);

    ui->txthistori->insertPlainText(QString::number(operation));
    ui->txthistori->insertPlainText(". Plan Vert page 2 \n");

}

void MainWindow::on_boutonplus_clicked()
{
   coeff_zoom_traite*=(1.2);

    affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);
}

void MainWindow::on_boutonmoins_clicked()
{
   coeff_zoom_traite/=(1.2);

     affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);
}

void MainWindow::on_actionAnnuler_zoom_triggered()
{
    coeff_zoom_traite=1;
    coeff_zoom_bleu = 1;
    coeff_zoom_rouge =1;
    coeff_zoom_vert = 1;
    coeffZoom_source = 1;
    coeff_zoom_originale = 1;

    affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);
    affichageImage(affiche_rouge,coeff_zoom_rouge,ui->scroll_rouge);
    affichageImage(affiche_verte,coeff_zoom_vert,ui->scroll_vert);
    affichageImage(affiche_bleue,coeff_zoom_bleu,ui->scroll_bleu);
    affichageImage(image_affiche, coeff_zoom_originale,ui->scroll_3);
}

void MainWindow::affichageImage(QImage img,float k,QScrollArea *scroll)
{
    QLabel *imageLbl=new QLabel();

    imageLbl->setScaledContents(true);

    imageLbl->setFixedWidth(img.width()*k);
    imageLbl->setFixedHeight(img.height()*k);

    imageLbl->setPixmap(QPixmap::fromImage(img));

    scroll->setWidget(imageLbl);
}

void MainWindow::on_plus2_clicked()
{
    coeff_zoom_rouge*=(1.2);
    affichageImage(affiche_rouge,coeff_zoom_rouge,ui->scroll_rouge);
}

void MainWindow::on_plus3_clicked()
{
   coeff_zoom_vert*=(1.2);
    affichageImage(affiche_verte, coeff_zoom_vert,ui->scroll_vert);
}

void MainWindow::on_plus5_clicked()
{
    coeff_zoom_bleu*=(1.2);
    affichageImage(affiche_bleue, coeff_zoom_bleu,ui->scroll_bleu);
}

void MainWindow::on_plus4_clicked()
{
   coeff_zoom_originale*=(1.2);
    affichageImage(image_source,coeff_zoom_originale,ui->scroll_3);
}

void MainWindow::on_moins1_clicked()
{
    coeff_zoom_rouge/=(1.2);
    affichageImage(affiche_rouge,coeff_zoom_rouge,ui->scroll_rouge);
}

void MainWindow::on_moins2_clicked()
{
    coeff_zoom_vert/=(1.2);
    affichageImage(affiche_verte, coeff_zoom_vert,ui->scroll_vert);
}

void MainWindow::on_moins3_clicked()
{
     coeff_zoom_bleu/=(1.2);
    affichageImage(affiche_bleue, coeff_zoom_bleu,ui->scroll_bleu);
}

void MainWindow::on_mins4_clicked()
{
    coeff_zoom_originale/=(1.2);
    affichageImage(image_source,coeff_zoom_originale,ui->scroll_3);
}

void MainWindow::on_hslider_valueChanged(int value)
{

     ui->lcd_seuil->display(value);
}

void MainWindow::on_actionAnnuler_Inversion_triggered()
{
    operation ++;
    affichageImage(image_source,coeff_zoom_traite,ui->scrolldest);

    image_affiche = image_source;

    ui->txthistori->insertPlainText(QString::number(operation));
    ui->txthistori->insertPlainText(". Inversion annulée \n");
}

void MainWindow::on_actionEnregsitrer_triggered()
{

    QFileDialog dlg(this);
    QString nomFic;
    QString chemin;

    if (nomFic.isEmpty())
    {
    dlg.setViewMode(QFileDialog::Detail);
    nomFic=dlg.getSaveFileName(this,"Enregister l'image",nomFic,"JPEG (*.jpg *.jpeg);PNG (*.png);; BMP (*.bmp);; GIF (*.gif); ");


    image_enregistrer=image_affiche.convertToFormat(QImage::Format_ARGB32);
    image_enregistrer.save(nomFic);

    nomFic = chemin;

    }
    else
    {
        chemin = dlg.getOpenFileName(this, "localiser le fichier\"chemin\",inFile,""(*.png);(*.bmp);(*.gif");
        image_enregistrer=image_affiche.convertToFormat(QImage::Format_ARGB32);
        image_enregistrer.save(chemin);
        chemin = nomFic;
    }

    /*QFile dlg("D:/Users/T0144266/Documents");
    dlg.write()
    image_affiche = image_enregistrer;

   image_enregistrer.copy();*/
}


void MainWindow::on_actionQuitter_triggered()
{
  int reponse = QMessageBox::question(this, "Quitter", "Voulez-vous vraiment quitter l'application ?", QMessageBox::Yes | QMessageBox::No);
   if (reponse == QMessageBox::Yes)
      {
      MainWindow h;

       accueil *retourfenetre= new accueil(this);
       retourfenetre->close();

       this->close();
       h.close();

      }
}
