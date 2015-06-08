#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "climage.h"
#include "accueil.h"
#include "histo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tab_couleur->setStyleSheet("QTabWidget,QTabWidget::pane,QTabBar { background: transparent; border: 0px;  }");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(QImage("fond.png")));
    this->setPalette(palette);

    ui->tab_couleur->setTabText(0, "Histogramme et historique");
    ui->tab_couleur->setTabText(1, "Traitement couleur");
    ui->tab_couleur->setTabText(2, "Détection et égalisation");

    ui->scrolldest->setToolTip("Image traitée");
    ui->scroll->setToolTip("Image Source");
    ui->grapHisto->setToolTip("Histogramme");
    ui->txthistori->setToolTip("Historique des actions");

    ui->boutonplus->setIcon(QIcon("zoom_plus.png"));
    ui->boutonmoins->setIcon(QIcon("zoom_moins.png"));

    ui->plus2->setIcon(QIcon("zoom_plus.png"));
    ui->moins2->setIcon(QIcon("zoom_moins.png"));

    ui->plus3->setIcon(QIcon("zoom_plus.png"));
    ui->moins3->setIcon(QIcon("zoom_moins.png"));

    ui->bouton_valide->setIcon(QIcon("valide.png"));
    ui->bouton_valide2->setIcon(QIcon("valide.png"));

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
    coeff_zoom_couleur = 1;
    coeff_zoom_forme = 1;

    image_affiche = image_source;

    affichageImage(image_affiche.scaled(300,300,Qt::KeepAspectRatioByExpanding),coeffZoom_source,ui->scroll);
    ui->scroll->setAlignment(Qt::AlignCenter);
    ui->scroll_couleur->setAlignment(Qt::AlignCenter);
    ui->scroll_forme->setAlignment(Qt::AlignCenter);
    affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);
    affichageImage(image_affiche,coeff_zoom_originale,ui->scroll_couleur);
    affichageImage(image_affiche,coeff_zoom_originale,ui->scroll_forme);
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
    coeff_zoom_couleur = 1;
    coeffZoom_source = 1;
    coeff_zoom_originale = 1;

    affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);
    affichageImage(affiche_couleur,coeff_zoom_couleur,ui->scroll_couleur);
    affichageImage(image_affiche, coeff_zoom_originale,ui->scroll_couleur);
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
    coeff_zoom_couleur*=(1.2);
    affichageImage(affiche_couleur,coeff_zoom_couleur,ui->scroll_couleur);
}

void MainWindow::on_moins2_clicked()
{
    coeff_zoom_couleur/=(1.2);
    affichageImage(affiche_couleur, coeff_zoom_couleur,ui->scroll_couleur);
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


void MainWindow::on_combo_couleur_currentIndexChanged(const QString &arg1)
{
   if (arg1 ==  "Plan Rouge")
   {
   operation ++;

   image_rouge = image_source;
   QImage imgQ(image_rouge);
   ClImage *img=new ClImage(imgQ);
   *img=img->extraction(1,imgQ);
   imgQ=img->imgQImage();

   image_rouge=imgQ;
   affiche_rouge = image_rouge;
   affiche_couleur = affiche_rouge;
   coeff_zoom_couleur=1;

   affichageImage(affiche_couleur,coeff_zoom_couleur,ui->scroll_couleur);
   ui->scroll_couleur->setAlignment(Qt::AlignCenter);

   ui->txthistori->insertPlainText(QString::number(operation));
   ui->txthistori->insertPlainText(". Plan Rouge page 2 \n");
   }
   if (arg1 ==  "Plan Bleu")
   {
       operation ++;

       image_bleue = image_source;
       QImage imgQ(image_bleue);
       ClImage *img=new ClImage(imgQ);
       *img=img->extraction(3,imgQ);
       imgQ=img->imgQImage();

       image_bleue=imgQ;
       affiche_bleue = image_bleue ;
       affiche_couleur = affiche_bleue;
       coeff_zoom_couleur =1 ;

       affichageImage(affiche_couleur,coeff_zoom_couleur,ui->scroll_couleur);
       ui->scroll_couleur->setAlignment(Qt::AlignCenter);

       ui->txthistori->insertPlainText(QString::number(operation));
       ui->txthistori->insertPlainText(". Plan Bleu page 2 \n");
   }
   if (arg1 ==  "Plan Vert")
   {
       operation ++;

       image_vert= image_source;
       QImage imgQ(image_vert);
       ClImage *img=new ClImage(imgQ);
       *img=img->extraction(2,imgQ);
       imgQ=img->imgQImage();

       image_vert = imgQ;
       affiche_verte = image_vert;
       affiche_couleur = affiche_verte;
       coeff_zoom_couleur = 1;

       affichageImage(affiche_couleur,coeff_zoom_couleur,ui->scroll_couleur);
       ui->scroll_couleur->setAlignment(Qt::AlignCenter);

       ui->txthistori->insertPlainText(QString::number(operation));
       ui->txthistori->insertPlainText(". Plan Vert page 2 \n");
   }
   if (arg1 ==  "Image Originale")
   {
       operation ++;
       image_originale = image_source;
       affiche_couleur = image_originale;

       coeff_zoom_couleur = 1;

       affichageImage(affiche_couleur, coeff_zoom_couleur,ui->scroll_couleur);
       ui->scroll_couleur->setAlignment(Qt::AlignCenter);

       ui->txthistori->insertPlainText(QString::number(operation));
       ui->txthistori->insertPlainText(". Retour image Originale \n");
   }
 }

void MainWindow::on_plus3_clicked()
{
    coeff_zoom_forme*=(1.2);
    affichageImage(affiche_forme,coeff_zoom_forme,ui->scroll_forme);
}

void MainWindow::on_moins3_clicked()
{
    coeff_zoom_forme/=(1.2);
    affichageImage(affiche_forme,coeff_zoom_forme,ui->scroll_forme);
}

void MainWindow::on_bouton_valide2_clicked()
{
    operation ++;
   image_valide_forme = affiche_forme;
   image_affiche = image_valide_forme;

   ui->txthistori->insertPlainText(QString::number(operation));
   ui->txthistori->insertPlainText(". Valider traitement forme \n");

   affichageImage(image_affiche, coeff_zoom_traite, ui->scrolldest);
}

void MainWindow::on_bouton_valide_clicked()
{
    operation ++;

   image_valide_couleur = affiche_couleur;
   image_affiche = image_valide_couleur;

   ui->txthistori->insertPlainText(QString::number(operation));
   ui->txthistori->insertPlainText(". Valider traitement couleur \n");

   affichageImage(image_affiche, coeff_zoom_traite, ui->scrolldest);
   affichageImage(image_affiche, coeff_zoom_forme, ui->scroll_forme);

}

void MainWindow::on_bouton_source_clicked()
{
   operation ++;

   image_affiche = image_source;

   ui->txthistori->insertPlainText(QString::number(operation));
   ui->txthistori->insertPlainText(". Tout annuler \n");

   affichageImage(image_affiche, coeff_zoom_originale, ui->scrolldest);
   affichageImage(image_affiche, coeff_zoom_forme, ui->scroll_forme);
}

void MainWindow::on_boutonseuil_clicked()
{
        operation ++;

        image_seuillee = image_affiche;
        image_seuillee= image_seuillee.convertToFormat(QImage::Format_Indexed8);
        ClImage *img=new ClImage( image_seuillee);
        double val=ui->lcd_seuil->value();
        *img=img->seuillage(val);
        image_seuillee=img->imgQImage();

        image_traitee=image_seuillee;
        image_affiche = image_traitee;

        affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);

        ui->txthistori->insertPlainText(QString::number(operation));
        ui->txthistori->insertPlainText(". Seuillage à ");
        ui->txthistori->insertPlainText(QString::number(val));
        ui->txthistori->insertPlainText("\n");


}


void MainWindow::on_Button_histo_clicked()
{

  //  histo = Histogramme(300, 300, image_traitee);


  //  ui->label_histo->setPixmap(QPixmap::fromImage(histo.getHisto()));
}
