#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QGraphicsEllipseItem>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QPixmap>
#include <QImage>
#include <QGraphicsScene>
#include <QMessageBox>
#include <QPalette>
#include <QLCDNumber>
#include <QLabel>
#include <QScrollArea>
#include <QStyle>
#include <QLayout>
#include <QVBoxLayout>
#include <QTabWidget>
#include <QKeyEvent>
#include <QUndoCommand>
#include <QStyle>
#include <QApplication>
#include <QEvent>
#include <QFont>
#include <QTextEdit>

#include "ImageNdg.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void affichageImage(QImage, float,QScrollArea*);

    CImageNdg image_seuillee_automatique(QImage);


private slots:

    void on_actionOurvir_triggered();

    void on_actionEnregistrer_sous_triggered();

    void on_actionA_propos_de_Qt_triggered();

    void on_boutonplus_clicked();

    void on_boutonmoins_clicked();

    void on_actionAnnuler_zoom_triggered();

    void on_plus2_clicked();

    void on_moins2_clicked();

    void on_actionAnnuler_Inversion_triggered();

    void on_actionEnregsitrer_triggered();

    void on_actionQuitter_triggered();

    void on_combo_couleur_currentIndexChanged(const QString &arg1);

    void on_plus3_clicked();

    void on_moins3_clicked();

    void on_bouton_valide2_clicked();

    void on_bouton_valide_clicked();

    void on_bouton_source_clicked();

    void on_slider_egalisation_valueChanged(int value);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_radio_manuel_clicked();

    void on_radio_automatique_clicked();

    void on_bouton_manueln_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);


    void on_pushButton_clicked();

    void on_bouton_sauvegarde_clicked();

private:
    Ui::MainWindow *ui;

    QPixmap m_image2;

    QImage imgQ;
    QImage image_source;
    QImage image_affiche;
    QImage image_enregistrer;
    QImage image_traitee;

    QImage image_rouge;
    QImage image_vert;
    QImage image_bleue;
    QImage image_originale;
    QImage image_valide_couleur;
    QImage image_valide_forme;

    QImage affiche_rouge;
    QImage affiche_verte;
    QImage affiche_bleue;
    QImage affiche_couleur;
    QImage affiche_forme;
    QImage image_seuillee;
    QImage image_inversion;
    QImage image_seuillee_auto;
    QImage image_expansion;
    QImage image_complement;
    QImage image_erosion;

    QImage image_sauvegarde;


    QPalette palette;
    float coeffZoom_source;
    float coeff_zoom_traite;
    float coeff_zoom_originale;
    float coeff_zoom_couleur;
    float coeff_zoom_forme;

    int operation;


    CImageNdg image_seuillee_auto_2;
    CImageNdg image_complement_2;
    CImageNdg image_erosion_2;



};

#endif // MAINWINDOW_H
