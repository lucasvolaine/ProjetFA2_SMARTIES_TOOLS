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

private slots:

    void on_actionOurvir_triggered();

    void on_actionEnregistrer_sous_triggered();

    void on_actionA_propos_de_Qt_triggered();

    void on_actionInversion_triggered();

    void on_actionRouge_triggered();

    void on_actionBleu_triggered();

    void on_actionVert_triggered();

    void on_boutonplus_clicked();

    void on_boutonmoins_clicked();

    void on_actionAnnuler_zoom_triggered();

    void on_plus2_clicked();

    void on_plus3_clicked();

    void on_plus5_clicked();

    void on_plus4_clicked();

    void on_moins1_clicked();

    void on_moins2_clicked();

    void on_moins3_clicked();

    void on_mins4_clicked();

    void on_hslider_valueChanged(int value);

    void on_actionAnnuler_Inversion_triggered();

    void on_actionEnregsitrer_triggered();

    void on_actionQuitter_triggered();

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

    QImage affiche_rouge;
    QImage affiche_verte;
    QImage affiche_bleue;


    QPalette palette;
    float coeffZoom_source;
    float coeff_zoom_traite;
    float coeff_zoom_originale;
    float coeff_zoom_vert;
    float coeff_zoom_bleu;
    float coeff_zoom_rouge;

    int operation;


};

#endif // MAINWINDOW_H
