#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "histo.h"
#include "image.h"
#include <QtGui>
#include <QApplication>
#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //images résolution normal
    Image img;
    Image img_photometrie;
    //Image img_image;
    //Image img_photo_image;
    //Image img_ari_image;
    Image img_arithmetique;
    Image img_arithmetique_res;
    Image img_geometrique;
    //images résolution réduite 300*300
    Image thumb;
    Image thumb_photometrie;
    Image thumb_arithmetique;
    Image thumb_arithmetique_res;
    Image thumb_geometrique;
    Histogramme histo;
    //QCheckBox histo_blue;

    MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    void photometrie_negatif();
    void arithmetique_addition();
    void arithmetique_soustraction();
    void arithmetique_multiplication();
    void arithmetique_division();
    void arithmetique_maximum();
    void arithmetique_minimum();
    void arithmetique_et();
    void arithmetique_ou();


private slots:
    void on_histo_blue_stateChanged(int );
    void on_combo_photo_histo_activated(int index);
    void on_radio_rotation_x_clicked();
    void on_radio_rotation_270_clicked();
    void on_radio_rotation_180_clicked();
    void on_radio_rotation_90_clicked();
    void on_radio_retournement_verthor_clicked();
    void on_radio_retournement_hor_clicked();
    void on_Valid_geo_clicked();
    void on_radio_retournement_vert_clicked();
    void on_combo_geo_currentIndexChanged(int index);
    void on_Annul_geo_clicked();
    void on_Annul_arith_clicked();
    void on_annul_photometrie_clicked();
    void on_Button_save_clicked();
    void on_Valid_arith_clicked();
    void on_combo_arith_currentIndexChanged(int index);
    void on_btn_arith_img_1_clicked();
    void on_Slider_luminosite_valueChanged(int value);
    void on_Valid_photometrie_clicked();
    void on_combo_photo_img_currentIndexChanged(int index);
    void on_btn_photo_clicked();

    void on_histo_blue_clicked();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
