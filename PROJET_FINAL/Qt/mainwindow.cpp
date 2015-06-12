#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "climage.h"
#include "accueil.h"
#include "ImageNdg.h"


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
    ui->tab_couleur->setTabText(2, "Inversion et Seuillage");

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


    ui->radio_automatique->setDisabled(true);
    ui->radio_manuel->setDisabled(true);

    ui->slider_egalisation->setEnabled(false);
    ui->lcd_egalisation->setEnabled(false);
    ui->bouton_manueln->setDisabled(true);

    ui->txthistori->setEnabled(false);

    ui->spin_a->setDisabled(true);
    ui->spin_b->setDisabled(true);
    ui->label_a->setDisabled(true);
    ui->label_b->setDisabled(true);
    ui->pushButton->setDisabled(true);

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
    affiche_forme = image_affiche;

    affichageImage(image_affiche.scaled(300,300,Qt::KeepAspectRatioByExpanding),coeffZoom_source,ui->scroll);
    ui->scroll->setAlignment(Qt::AlignCenter);
    ui->scroll_couleur->setAlignment(Qt::AlignCenter);
    ui->scroll_forme->setAlignment(Qt::AlignCenter);


    affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);
    affichageImage(image_affiche,coeff_zoom_originale,ui->scroll_couleur);
    affichageImage(image_affiche,coeff_zoom_forme,ui->scroll_forme);
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
    coeff_zoom_forme = 1;

    affichageImage(image_affiche,coeff_zoom_traite,ui->scrolldest);
    affichageImage(affiche_couleur,coeff_zoom_couleur,ui->scroll_couleur);
    affichageImage(affiche_forme, coeff_zoom_forme, ui->scroll_forme);
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
   affichageImage(image_affiche, coeff_zoom_couleur, ui->scroll_couleur);
}



void MainWindow::on_slider_egalisation_valueChanged(int value)
{
    ui->lcd_egalisation->display(value);
}

void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Seuiller")
    {
        ui->radio_automatique->setEnabled(true);
        ui->radio_manuel->setEnabled(true);

        ui->bouton_manueln->setEnabled(true);

        ui->spin_a->setDisabled(true);
        ui->spin_b->setDisabled(true);
        ui->label_a->setDisabled(true);
        ui->label_b->setDisabled(true);

        ui->pushButton->setDisabled(true);


    }
  if (arg1 == "Expansion")
    {
      ui->lcd_egalisation->setEnabled(false);
      ui->slider_egalisation->setEnabled(false);
      ui->bouton_manueln->setEnabled(false);

      ui->radio_automatique->setEnabled(false);
      ui->radio_manuel->setEnabled(false);

      ui->spin_a->setDisabled(false);
      ui->spin_b->setDisabled(false);

      ui->label_a->setDisabled(false);
      ui->label_b->setDisabled(false);

      ui->pushButton->setDisabled(false);

    }
  if (arg1 == "Image Originale")
  {
      affichageImage(image_source,coeff_zoom_forme,ui->scroll_forme);

      ui->spin_a->setDisabled(true);
      ui->spin_b->setDisabled(true);
      ui->label_a->setDisabled(true);
      ui->label_b->setDisabled(true);

      ui->pushButton->setDisabled(true);
  }

}

void MainWindow::on_radio_manuel_clicked()
{
    ui->slider_egalisation->setEnabled(true);
    ui->lcd_egalisation->setEnabled(true);

}

void MainWindow::on_radio_automatique_clicked()
{
    operation ++;


    ui->slider_egalisation->setEnabled(false);
    ui->lcd_egalisation->setEnabled(false);

    image_seuillee_auto = image_affiche;

    /*QImage imgQ(image_seuillee_auto);
    imgQ=imgQ.convertToFormat(QImage::Format_Indexed8);

    image_seuillee_auto=imgQ;*/

    CImageNdg image_seuillee_auto_2 = CImageNdg(image_seuillee_auto);

    image_seuillee_auto_2.seuillage("automatique");
    image_seuillee_auto = image_seuillee_auto_2.GetQImageNdg();


    image_traitee = image_seuillee_auto;
    affiche_forme = image_traitee;

    affichageImage(affiche_forme,coeff_zoom_forme,ui->scroll_forme);

    ui->txthistori->insertPlainText(QString::number(operation));
    ui->txthistori->insertPlainText(". Seuillage automatique \n");
}

void MainWindow::on_bouton_manueln_clicked()
{
    operation ++;

    image_seuillee = image_source;

    QImage imgQ(image_seuillee);
    imgQ=imgQ.convertToFormat(QImage::Format_Indexed8);
    ClImage *img=new ClImage(imgQ);
    double val=ui->lcd_egalisation->value();
    *img=img->seuillage(val);
    imgQ=img->imgQImage();

    image_seuillee=imgQ;

    image_traitee = image_seuillee;
    affiche_forme = image_traitee;

    affichageImage(affiche_forme,coeffZoom_source,ui->scrolldest);
    affichageImage(affiche_forme, coeff_zoom_forme, ui->scroll_forme);

    ui->txthistori->insertPlainText(QString::number(operation));
    ui->txthistori->insertPlainText(". Seuillé à ");
    ui->txthistori->insertPlainText(QString::number(val));
    ui->txthistori->insertPlainText("\n");

}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Inversion")
    {
        operation ++;

        image_inversion = image_affiche;
        affiche_forme = image_affiche;

        QImage imgQ(image_inversion);
        imgQ=imgQ.convertToFormat(QImage::Format_Indexed8);//on charge n'importe quel type d'images et on le change en format indéxé

        ClImage *img=new ClImage(imgQ);

        *img=img->inversion();
        imgQ=img->imgQImage();

        image_inversion=imgQ;//enregistrement de la nouvelle image
        image_traitee = image_inversion;
        affiche_forme = image_traitee;

        affichageImage(affiche_forme,coeff_zoom_forme,ui->scroll_forme);

        ui->txthistori->insertPlainText(QString::number(operation));
        ui->txthistori->insertPlainText(". Image Inversée \n");

        ui->spin_a->setDisabled(true);
        ui->spin_b->setDisabled(true);
        ui->label_a->setDisabled(true);
        ui->label_b->setDisabled(true);
        ui->pushButton->setDisabled(true);
          }
    if (arg1 == "Image Originale")
    {

        affichageImage(image_source,coeff_zoom_forme,ui->scroll_forme);

        ui->spin_a->setDisabled(true);
        ui->spin_b->setDisabled(true);
        ui->label_a->setDisabled(true);
        ui->label_b->setDisabled(true);
        ui->pushButton->setDisabled(true);

    }
    if (arg1 == "Complément")
    {
        operation ++;


        ui->slider_egalisation->setEnabled(false);
        ui->lcd_egalisation->setEnabled(false);

        image_complement = image_affiche;

       /* QImage imgQ(image_complement);
        imgQ=imgQ.convertToFormat(QImage::Format_Indexed8);

        image_complement=imgQ;*/

        CImageNdg image_complement_2 = CImageNdg(image_complement);

        image_complement_2.transformation("complement");
        image_complement = image_complement_2.GetQImageNdg();

        image_traitee = image_complement;
        affiche_forme = image_traitee;

        affichageImage(affiche_forme,coeff_zoom_forme,ui->scroll_forme);

        ui->txthistori->insertPlainText(QString::number(operation));
        ui->txthistori->insertPlainText(". Complément\n");

    }

    if(arg1 == "Erosion")
    {
        operation ++;

        image_erosion = image_affiche;

       /* QImage imgQ(image_erosion);
        imgQ=imgQ.convertToFormat(QImage::Format_Indexed8);

        image_erosion=imgQ;*/

        CImageNdg image_erosion_2 = CImageNdg(image_erosion);

        image_erosion_2.transformation("erosion");
        image_erosion = image_erosion_2.GetQImageNdg();

        image_traitee = image_erosion;
        affiche_forme = image_traitee;

        affichageImage(affiche_forme,coeff_zoom_forme,ui->scroll_forme);

        ui->txthistori->insertPlainText(QString::number(operation));
        ui->txthistori->insertPlainText(". Image Erodée \n");
    }

}


void MainWindow::on_pushButton_clicked()
{
    operation ++;

    image_expansion = image_source;
    affiche_forme = image_affiche;

    QImage imgQ(image_expansion);
    imgQ=imgQ.convertToFormat(QImage::Format_Indexed8);
    ClImage *img=new ClImage(imgQ);

    int valeur_a=ui->spin_a->value();
    int valeur_b=ui->spin_b->value();

    *img=img->egalisation(valeur_a,valeur_b);
    imgQ=img->imgQImage();

    image_expansion=imgQ;
    image_affiche = image_expansion;
    affiche_forme = image_affiche;

    affichageImage(affiche_forme, coeff_zoom_forme, ui->scroll_forme);

    ui->txthistori->insertPlainText(QString::number(operation));
    ui->txthistori->insertPlainText(". Expansion entre");
    ui->txthistori->insertPlainText(QString::number( valeur_a ));
    ui->txthistori->insertPlainText(" et ");
    ui->txthistori->insertPlainText(QString::number( valeur_b ));
    ui->txthistori->insertPlainText("\n");
}

void MainWindow::on_bouton_sauvegarde_clicked()
{
    QFile dossier ("Historique.txt");
    dossier.open(QIODevice::WriteOnly);
    QDataStream out(&dossier);
    QString texte = ui->txthistori->toPlainText();
    out << texte;
}

