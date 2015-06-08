#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Slider_luminosite->hide();
    ui->radio_retournement_hor->hide();
    ui->radio_retournement_vert->hide();
    ui->radio_retournement_verthor->hide();
    ui->radio_rotation_180->hide();
    ui->radio_rotation_270->hide();
    ui->radio_rotation_90->hide();
    ui->radio_rotation_x->hide();
    ui->rotation_x->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//************************************************************
//************************************************************
//
//  Fonction d'ouverture d'image
//
//
//************************************************************
//************************************************************
void MainWindow::on_btn_photo_clicked()//ouverture de l'image principale
{
    QString fichier = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString(), "Images (*.jpg *.jpeg *.ppm)");


    // Création de l'image principale
    img = Image(fichier);





    ui->label_hauteur_img->setText(tr("Hauteur : %1").arg(img.height()));
    ui->label_largeur_img->setText(tr("Largeur : %1").arg(img.width()));
    ui->label_format_img->setText(tr("Format : %1").arg(img.format()));
    ui->label_nbbit_img->setText(tr("Nombre de bits : %1").arg(img.depth()));

    //ui->label_couleur_img->setText(tr("Nombre de couleurs : %1").arg(img.colorTable().size()));
    ui->Slider_luminosite->setValue(255);


    // redimensionne l'image pour qu'elle est une hauteur ou largeur de 300, tout en conservant les proportionnalitÃ©s
    thumb=img.reSizeOrigin(300);

    // Création de la QPixmap servant Ã  l'affichage de l'image
        QPixmap pixmap;
        // instancie la QPixmap avec l'image QImage
        pixmap = QPixmap::fromImage(thumb);

        // fixe l'image QPixmap sur le label de la fenetre
    ui->label_img->setPixmap(pixmap);
    ui->label_img->show();

    //chargement de la classe Histogramme
    histo = Histogramme(300, 300, img);

}

void MainWindow::on_btn_arith_img_1_clicked()//ouverture de l'image arithmétique
{
    QString fichier = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString(), "Images (*.jpg *.jpeg *.ppm)");

    // Création de l'image principale
    img_arithmetique = Image(fichier);

    ui->label_hauteur_arith->setText(tr("Hauteur : %1").arg(img_arithmetique.height()));
    ui->label_largeur_arith->setText(tr("Largeur : %1").arg(img_arithmetique.width()));

    // redimensionne l'image pour qu'elle est une hauteur ou largeur de 300, tout en conservant les proportionnalitÃ©s
    thumb_arithmetique=img_arithmetique.reSizeOrigin(300);

    // Création de la QPixmap servant Ã  l'affichage de l'image
        QPixmap pixmap;
        // instancie la QPixmap avec l'image QImage
        pixmap = QPixmap::fromImage(thumb_arithmetique);

        // fixe l'image QPixmap sur le label de la fenetre
    ui->label_arithmetique_img->setPixmap(pixmap);
    ui->label_arithmetique_img->show();

}

//************************************************************
//************************************************************
//
//  Fonction de sauvegarde
//
//
//************************************************************
//************************************************************
void MainWindow::on_Button_save_clicked()
{
    QString fichier = QFileDialog::getSaveFileName(this, "Enregistrer", "image", "Images (*.jpg *.jpeg)");

    img.save(fichier);

}

//************************************************************
//************************************************************
//
//  Fonction de validation
//
//
//************************************************************
//************************************************************
void MainWindow::on_Valid_photometrie_clicked()//validation des traitements de photométrie
{
    img=img_photometrie;
    thumb=thumb_photometrie;
    ui->label_img->setPixmap(QPixmap::fromImage(thumb));
}
void MainWindow::on_Valid_arith_clicked()//validation des traitements d'arithmétique
{
    img=img_arithmetique_res;
    thumb=thumb_arithmetique_res;
    ui->label_img->setPixmap(QPixmap::fromImage(thumb));
}
void MainWindow::on_Valid_geo_clicked()//validation des traitements de géométrie
{
    img=img_geometrique;
    thumb=thumb_geometrique;
    ui->label_img->setPixmap(QPixmap::fromImage(thumb));
}

//************************************************************
//************************************************************
//
//  Fonction d'annulation
//
//
//************************************************************
//************************************************************
void MainWindow::on_annul_photometrie_clicked()//Annulation des traitements de photométrie
{
    img_photometrie=img;
    thumb_photometrie=thumb;
    ui->label_photometrie_img->setPixmap(QPixmap::fromImage(thumb_photometrie));
    ui->Slider_luminosite->setValue(255);
    ui->annul_photometrie->setEnabled(false);
    ui->Valid_photometrie->setEnabled(false);
}

void MainWindow::on_Annul_arith_clicked()//Annulation des traitements d'arithmétique
{
    img_arithmetique_res=img;
    thumb_arithmetique_res=thumb;
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
    ui->Annul_arith->setEnabled(false);
    ui->Valid_arith->setEnabled(false);
}

void MainWindow::on_Annul_geo_clicked()//Annulation des traitements de géométrie
{
    img_geometrique=img;
    thumb_geometrique=thumb;
    ui->label_geo_img->setPixmap(QPixmap::fromImage(thumb_geometrique));
    ui->Annul_geo->setEnabled(false);
    ui->Valid_geo->setEnabled(false);
}

//************************************************************
//************************************************************
//
//  Fonction des combo box
//
//
//************************************************************
//************************************************************
void MainWindow::on_combo_photo_img_currentIndexChanged(int index)//gère la combo photométrie
{
    ui->Slider_luminosite->hide();
    if (index==1)
        photometrie_negatif();
    if (index==2){
        img_photometrie = img;
        thumb_photometrie=img_photometrie.reSizeOrigin(300);

        ui->label_photometrie_img->setPixmap(QPixmap::fromImage(thumb_photometrie));
        ui->Slider_luminosite->show();
    }
    if(index!=0){
        ui->annul_photometrie->setEnabled(true);
        ui->Valid_photometrie->setEnabled(true);
    }

}
void MainWindow::on_combo_arith_currentIndexChanged(int index)//gère la combo arithmétique
{
    if (index==1)
        arithmetique_addition();
    if (index==2)
        arithmetique_soustraction();
    if (index==3)
        arithmetique_multiplication();
    if (index==4)
        arithmetique_division();
    if (index==5)
        arithmetique_maximum();
    if (index==6)
        arithmetique_minimum();
    if (index==7)
        arithmetique_et();
    if (index==8)
        arithmetique_ou();
    if(index!=0){
        ui->Annul_arith->setEnabled(true);
        ui->Valid_arith->setEnabled(true);
    }
}
void MainWindow::on_combo_geo_currentIndexChanged(int index)//gère la combo géométrie
{

    ui->radio_retournement_hor->hide();
    ui->radio_retournement_vert->hide();
    ui->radio_retournement_verthor->hide();
    ui->radio_rotation_180->hide();
    ui->radio_rotation_270->hide();
    ui->radio_rotation_90->hide();
    ui->radio_rotation_x->hide();
    ui->rotation_x->hide();

    if(index!=0){
        ui->Annul_geo->setEnabled(true);
        ui->Valid_geo->setEnabled(true);
    }
    if (index==1){

    }
    if (index==2){
        ui->radio_retournement_hor->show();
        ui->radio_retournement_vert->show();
        ui->radio_retournement_verthor->show();
    }
    if (index==3){
        ui->radio_rotation_180->show();
        ui->radio_rotation_270->show();
        ui->radio_rotation_90->show();
        ui->radio_rotation_x->show();
        ui->rotation_x->show();
    }



}




//************************************************************
//************************************************************
//
//  Traitement Photométrique
//
//
//************************************************************
//************************************************************
void MainWindow::photometrie_negatif()
{

        img_photometrie = img;
        img_photometrie.invertPixels();

        thumb_photometrie=img_photometrie.reSizeOrigin(300);

        ui->label_photometrie_img->setPixmap(QPixmap::fromImage(thumb_photometrie));
}


void MainWindow::on_Slider_luminosite_valueChanged(int value)//slider luminosité
{
      int diff = value-255;
      img_photometrie=img.setLuminosite(diff);
      thumb_photometrie=img_photometrie.reSizeOrigin(300);
      ui->label_photometrie_img->setPixmap(QPixmap::fromImage(thumb_photometrie));
}



//************************************************************
//************************************************************
//
//  Traitement Arithmétique
//
//
//************************************************************
//************************************************************
void MainWindow::arithmetique_addition()
{
    img_arithmetique_res=img+img_arithmetique;
    thumb_arithmetique_res=img_arithmetique_res.reSizeOrigin(300);
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
}

void MainWindow::arithmetique_soustraction()
{
    img_arithmetique_res=img-img_arithmetique;
    thumb_arithmetique_res=img_arithmetique_res.reSizeOrigin(300);
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
}

void MainWindow::arithmetique_multiplication()
{
    img_arithmetique_res=img*img_arithmetique;
    thumb_arithmetique_res=img_arithmetique_res.reSizeOrigin(300);
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
}

void MainWindow::arithmetique_division()
{
    img_arithmetique_res=img/img_arithmetique;
    thumb_arithmetique_res=img_arithmetique_res.reSizeOrigin(300);
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
}

void MainWindow::arithmetique_maximum()
{
    img_arithmetique_res=img.maximum(img_arithmetique);
    thumb_arithmetique_res=img_arithmetique_res.reSizeOrigin(300);
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
}

void MainWindow::arithmetique_minimum()
{
    img_arithmetique_res=img.minimum(img_arithmetique);
    thumb_arithmetique_res=img_arithmetique_res.reSizeOrigin(300);
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
}

void MainWindow::arithmetique_et()
{
    img_arithmetique_res=img&img_arithmetique;
    thumb_arithmetique_res=img_arithmetique_res.reSizeOrigin(300);
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
}

void MainWindow::arithmetique_ou()
{
    img_arithmetique_res=img|img_arithmetique;
    thumb_arithmetique_res=img_arithmetique_res.reSizeOrigin(300);
    ui->label_arithmetique_res->setPixmap(QPixmap::fromImage(thumb_arithmetique_res));
}


//************************************************************
//************************************************************
//
//  Traitement Géométrique
//
//
//************************************************************
//************************************************************

void MainWindow::on_radio_retournement_vert_clicked()//mirroir verticale
{
    img_geometrique=img.miroir_vert();
    thumb_geometrique=img_geometrique.reSizeOrigin(300);
    ui->label_geo_img->setPixmap(QPixmap::fromImage(thumb_geometrique));
}



void MainWindow::on_radio_retournement_hor_clicked()//mirroir horizontal
{
    img_geometrique=img.miroir_hor();
    thumb_geometrique=img_geometrique.reSizeOrigin(300);
    ui->label_geo_img->setPixmap(QPixmap::fromImage(thumb_geometrique));
}

void MainWindow::on_radio_retournement_verthor_clicked()//mirroir verticale et horizontale
{
    img_geometrique=img.miroir_vert_hor();
    thumb_geometrique=img_geometrique.reSizeOrigin(300);
    ui->label_geo_img->setPixmap(QPixmap::fromImage(thumb_geometrique));
}

void MainWindow::on_radio_rotation_90_clicked()
{
    img_geometrique = img.rotate(90);
    thumb_geometrique=img_geometrique.reSizeOrigin(300);
    ui->label_geo_img->setPixmap(QPixmap::fromImage(thumb_geometrique));
}

void MainWindow::on_radio_rotation_180_clicked()
{
    img_geometrique = img.rotate(180);
    thumb_geometrique=img_geometrique.reSizeOrigin(300);
    ui->label_geo_img->setPixmap(QPixmap::fromImage(thumb_geometrique));
}

void MainWindow::on_radio_rotation_270_clicked()
{
    img_geometrique = img.rotate(270);
    thumb_geometrique=img_geometrique.reSizeOrigin(300);
    ui->label_geo_img->setPixmap(QPixmap::fromImage(thumb_geometrique));
}

void MainWindow::on_radio_rotation_x_clicked()
{
    int angle=ui->rotation_x->text().toInt();
    img_geometrique=img.rotate_x(angle);
    thumb_geometrique=img_geometrique.reSizeOrigin(300);
    ui->label_geo_img->setPixmap(QPixmap::fromImage(thumb_geometrique));
}

void MainWindow::on_combo_photo_histo_activated(int index)
{
    if(index ==0) {

        ui->histo_red->show();
        ui->histo_green->show();
        ui->histo_blue->show();
        ui->histo_gray->show();
        ui->label_histogramme->setPixmap(QPixmap::fromImage(histo.getHisto()));



    } else {
        ui->histo_red->hide();
        ui->histo_green->hide();
        ui->histo_blue->hide();
        ui->histo_gray->hide();


    }

}

/*void MainWindow::on_histo_blue_stateChanged(int i)
{
    // case cochée
    if(ui->histo_blue->isChecked()) {

    QMessageBox msgBox;
    msgBox.setText("5");
    msgBox.exec();}

}*/



void MainWindow::on_pushButton_clicked()
{
    ui->label_histogramme->setPixmap(QPixmap::fromImage(histo.getHisto()));
}
