/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tab_page;
    QWidget *tab;
    QLabel *label_photometrie_img;
    QComboBox *combo_photo_img;
    QComboBox *combo_photo_histo;
    QLabel *label_histogramme;
    QLabel *label_3;
    QPushButton *Valid_photometrie;
    QSlider *Slider_luminosite;
    QPushButton *annul_photometrie;
    QCheckBox *histo_blue;
    QCheckBox *histo_red;
    QCheckBox *histo_green;
    QCheckBox *histo_gray;
    QPushButton *pushButton;
    QWidget *tab_2;
    QLabel *label_arithmetique_img;
    QLabel *label_arithmetique_res;
    QPushButton *btn_arith_img_1;
    QComboBox *combo_arith;
    QPushButton *Valid_arith;
    QLabel *label_largeur_arith;
    QLabel *label_hauteur_arith;
    QPushButton *Annul_arith;
    QWidget *tab_3;
    QLabel *label_apercu_geo;
    QLabel *label_geo_img;
    QPushButton *Valid_geo;
    QComboBox *combo_geo;
    QPushButton *Annul_geo;
    QRadioButton *radio_retournement_vert;
    QRadioButton *radio_retournement_hor;
    QRadioButton *radio_retournement_verthor;
    QRadioButton *radio_rotation_90;
    QRadioButton *radio_rotation_180;
    QRadioButton *radio_rotation_270;
    QRadioButton *radio_rotation_x;
    QLineEdit *rotation_x;
    QWidget *tab_4;
    QWidget *tab_5;
    QLabel *label_img;
    QLabel *label_hauteur_img;
    QLabel *label_largeur_img;
    QLabel *label_2;
    QPushButton *btn_photo;
    QPushButton *Button_save;
    QLabel *label_format_img;
    QLabel *label_nbbit_img;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1065, 680);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab_page = new QTabWidget(centralWidget);
        tab_page->setObjectName(QStringLiteral("tab_page"));
        tab_page->setEnabled(true);
        tab_page->setGeometry(QRect(370, 20, 691, 621));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_photometrie_img = new QLabel(tab);
        label_photometrie_img->setObjectName(QStringLiteral("label_photometrie_img"));
        label_photometrie_img->setGeometry(QRect(20, 80, 300, 300));
        combo_photo_img = new QComboBox(tab);
        combo_photo_img->setObjectName(QStringLiteral("combo_photo_img"));
        combo_photo_img->setGeometry(QRect(30, 390, 191, 22));
        combo_photo_histo = new QComboBox(tab);
        combo_photo_histo->setObjectName(QStringLiteral("combo_photo_histo"));
        combo_photo_histo->setGeometry(QRect(390, 390, 200, 22));
        label_histogramme = new QLabel(tab);
        label_histogramme->setObjectName(QStringLiteral("label_histogramme"));
        label_histogramme->setGeometry(QRect(360, 80, 300, 300));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 50, 46, 14));
        Valid_photometrie = new QPushButton(tab);
        Valid_photometrie->setObjectName(QStringLiteral("Valid_photometrie"));
        Valid_photometrie->setEnabled(false);
        Valid_photometrie->setGeometry(QRect(239, 390, 71, 23));
        Slider_luminosite = new QSlider(tab);
        Slider_luminosite->setObjectName(QStringLiteral("Slider_luminosite"));
        Slider_luminosite->setEnabled(true);
        Slider_luminosite->setGeometry(QRect(30, 430, 191, 21));
        Slider_luminosite->setMaximum(510);
        Slider_luminosite->setValue(255);
        Slider_luminosite->setSliderPosition(255);
        Slider_luminosite->setOrientation(Qt::Horizontal);
        annul_photometrie = new QPushButton(tab);
        annul_photometrie->setObjectName(QStringLiteral("annul_photometrie"));
        annul_photometrie->setEnabled(false);
        annul_photometrie->setGeometry(QRect(239, 420, 71, 23));
        histo_blue = new QCheckBox(tab);
        histo_blue->setObjectName(QStringLiteral("histo_blue"));
        histo_blue->setGeometry(QRect(390, 430, 72, 18));
        histo_red = new QCheckBox(tab);
        histo_red->setObjectName(QStringLiteral("histo_red"));
        histo_red->setGeometry(QRect(450, 430, 72, 18));
        histo_green = new QCheckBox(tab);
        histo_green->setObjectName(QStringLiteral("histo_green"));
        histo_green->setGeometry(QRect(520, 430, 72, 18));
        histo_gray = new QCheckBox(tab);
        histo_gray->setObjectName(QStringLiteral("histo_gray"));
        histo_gray->setGeometry(QRect(580, 430, 72, 18));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 390, 75, 23));
        tab_page->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_arithmetique_img = new QLabel(tab_2);
        label_arithmetique_img->setObjectName(QStringLiteral("label_arithmetique_img"));
        label_arithmetique_img->setGeometry(QRect(20, 80, 300, 300));
        label_arithmetique_res = new QLabel(tab_2);
        label_arithmetique_res->setObjectName(QStringLiteral("label_arithmetique_res"));
        label_arithmetique_res->setGeometry(QRect(360, 80, 300, 300));
        btn_arith_img_1 = new QPushButton(tab_2);
        btn_arith_img_1->setObjectName(QStringLiteral("btn_arith_img_1"));
        btn_arith_img_1->setGeometry(QRect(60, 390, 221, 23));
        combo_arith = new QComboBox(tab_2);
        combo_arith->setObjectName(QStringLiteral("combo_arith"));
        combo_arith->setGeometry(QRect(39, 430, 171, 22));
        Valid_arith = new QPushButton(tab_2);
        Valid_arith->setObjectName(QStringLiteral("Valid_arith"));
        Valid_arith->setEnabled(false);
        Valid_arith->setGeometry(QRect(230, 430, 71, 23));
        label_largeur_arith = new QLabel(tab_2);
        label_largeur_arith->setObjectName(QStringLiteral("label_largeur_arith"));
        label_largeur_arith->setGeometry(QRect(20, 30, 191, 16));
        label_hauteur_arith = new QLabel(tab_2);
        label_hauteur_arith->setObjectName(QStringLiteral("label_hauteur_arith"));
        label_hauteur_arith->setGeometry(QRect(20, 50, 181, 16));
        Annul_arith = new QPushButton(tab_2);
        Annul_arith->setObjectName(QStringLiteral("Annul_arith"));
        Annul_arith->setEnabled(false);
        Annul_arith->setGeometry(QRect(230, 460, 71, 23));
        tab_page->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_apercu_geo = new QLabel(tab_3);
        label_apercu_geo->setObjectName(QStringLiteral("label_apercu_geo"));
        label_apercu_geo->setGeometry(QRect(20, 50, 181, 16));
        label_geo_img = new QLabel(tab_3);
        label_geo_img->setObjectName(QStringLiteral("label_geo_img"));
        label_geo_img->setGeometry(QRect(20, 80, 300, 300));
        Valid_geo = new QPushButton(tab_3);
        Valid_geo->setObjectName(QStringLiteral("Valid_geo"));
        Valid_geo->setEnabled(true);
        Valid_geo->setGeometry(QRect(230, 390, 71, 23));
        combo_geo = new QComboBox(tab_3);
        combo_geo->setObjectName(QStringLiteral("combo_geo"));
        combo_geo->setGeometry(QRect(39, 390, 171, 22));
        Annul_geo = new QPushButton(tab_3);
        Annul_geo->setObjectName(QStringLiteral("Annul_geo"));
        Annul_geo->setEnabled(true);
        Annul_geo->setGeometry(QRect(230, 420, 71, 23));
        radio_retournement_vert = new QRadioButton(tab_3);
        radio_retournement_vert->setObjectName(QStringLiteral("radio_retournement_vert"));
        radio_retournement_vert->setGeometry(QRect(60, 500, 84, 18));
        radio_retournement_hor = new QRadioButton(tab_3);
        radio_retournement_hor->setObjectName(QStringLiteral("radio_retournement_hor"));
        radio_retournement_hor->setGeometry(QRect(60, 520, 84, 18));
        radio_retournement_verthor = new QRadioButton(tab_3);
        radio_retournement_verthor->setObjectName(QStringLiteral("radio_retournement_verthor"));
        radio_retournement_verthor->setGeometry(QRect(60, 540, 84, 18));
        radio_rotation_90 = new QRadioButton(tab_3);
        radio_rotation_90->setObjectName(QStringLiteral("radio_rotation_90"));
        radio_rotation_90->setGeometry(QRect(60, 420, 84, 18));
        radio_rotation_180 = new QRadioButton(tab_3);
        radio_rotation_180->setObjectName(QStringLiteral("radio_rotation_180"));
        radio_rotation_180->setGeometry(QRect(60, 440, 84, 18));
        radio_rotation_270 = new QRadioButton(tab_3);
        radio_rotation_270->setObjectName(QStringLiteral("radio_rotation_270"));
        radio_rotation_270->setGeometry(QRect(60, 460, 84, 18));
        radio_rotation_x = new QRadioButton(tab_3);
        radio_rotation_x->setObjectName(QStringLiteral("radio_rotation_x"));
        radio_rotation_x->setGeometry(QRect(60, 480, 71, 18));
        rotation_x = new QLineEdit(tab_3);
        rotation_x->setObjectName(QStringLiteral("rotation_x"));
        rotation_x->setGeometry(QRect(130, 480, 31, 18));
        rotation_x->setMaxLength(3);
        rotation_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tab_page->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_page->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tab_page->addTab(tab_5, QString());
        label_img = new QLabel(centralWidget);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setGeometry(QRect(40, 120, 300, 300));
        label_hauteur_img = new QLabel(centralWidget);
        label_hauteur_img->setObjectName(QStringLiteral("label_hauteur_img"));
        label_hauteur_img->setGeometry(QRect(20, 90, 121, 16));
        label_largeur_img = new QLabel(centralWidget);
        label_largeur_img->setObjectName(QStringLiteral("label_largeur_img"));
        label_largeur_img->setGeometry(QRect(20, 70, 291, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 71, 16));
        btn_photo = new QPushButton(centralWidget);
        btn_photo->setObjectName(QStringLiteral("btn_photo"));
        btn_photo->setGeometry(QRect(80, 430, 211, 23));
        Button_save = new QPushButton(centralWidget);
        Button_save->setObjectName(QStringLiteral("Button_save"));
        Button_save->setGeometry(QRect(80, 470, 211, 23));
        label_format_img = new QLabel(centralWidget);
        label_format_img->setObjectName(QStringLiteral("label_format_img"));
        label_format_img->setGeometry(QRect(150, 70, 151, 16));
        label_nbbit_img = new QLabel(centralWidget);
        label_nbbit_img->setObjectName(QStringLiteral("label_nbbit_img"));
        label_nbbit_img->setGeometry(QRect(150, 90, 151, 16));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tab_page, combo_photo_img);
        QWidget::setTabOrder(combo_photo_img, Valid_photometrie);
        QWidget::setTabOrder(Valid_photometrie, combo_photo_histo);
        QWidget::setTabOrder(combo_photo_histo, Slider_luminosite);
        QWidget::setTabOrder(Slider_luminosite, annul_photometrie);
        QWidget::setTabOrder(annul_photometrie, histo_blue);
        QWidget::setTabOrder(histo_blue, histo_red);
        QWidget::setTabOrder(histo_red, histo_green);
        QWidget::setTabOrder(histo_green, histo_gray);
        QWidget::setTabOrder(histo_gray, btn_photo);
        QWidget::setTabOrder(btn_photo, Button_save);
        QWidget::setTabOrder(Button_save, Annul_arith);
        QWidget::setTabOrder(Annul_arith, btn_arith_img_1);
        QWidget::setTabOrder(btn_arith_img_1, Valid_geo);
        QWidget::setTabOrder(Valid_geo, combo_geo);
        QWidget::setTabOrder(combo_geo, Annul_geo);
        QWidget::setTabOrder(Annul_geo, radio_retournement_vert);
        QWidget::setTabOrder(radio_retournement_vert, radio_retournement_hor);
        QWidget::setTabOrder(radio_retournement_hor, radio_retournement_verthor);
        QWidget::setTabOrder(radio_retournement_verthor, radio_rotation_90);
        QWidget::setTabOrder(radio_rotation_90, radio_rotation_180);
        QWidget::setTabOrder(radio_rotation_180, radio_rotation_270);
        QWidget::setTabOrder(radio_rotation_270, radio_rotation_x);
        QWidget::setTabOrder(radio_rotation_x, rotation_x);
        QWidget::setTabOrder(rotation_x, combo_arith);
        QWidget::setTabOrder(combo_arith, Valid_arith);

        retranslateUi(MainWindow);

        tab_page->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_photometrie_img->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        combo_photo_img->clear();
        combo_photo_img->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Op\303\251rations :", 0)
         << QApplication::translate("MainWindow", "N\303\251gatif", 0)
         << QApplication::translate("MainWindow", "Luminosit\303\251", 0)
         << QApplication::translate("MainWindow", "Exploitation", 0)
         << QApplication::translate("MainWindow", "Egalisation", 0)
         << QApplication::translate("MainWindow", "Normalisation", 0)
        );
        combo_photo_histo->clear();
        combo_photo_histo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Histogramme", 0)
         << QApplication::translate("MainWindow", "Histogramme cumul\303\251", 0)
        );
        label_histogramme->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_3->setText(QApplication::translate("MainWindow", "Aper\303\247u :", 0));
        Valid_photometrie->setText(QApplication::translate("MainWindow", "Valider", 0));
        annul_photometrie->setText(QApplication::translate("MainWindow", "Annuler", 0));
        histo_blue->setText(QApplication::translate("MainWindow", "Bleu", 0));
        histo_red->setText(QApplication::translate("MainWindow", "Rouge", 0));
        histo_green->setText(QApplication::translate("MainWindow", "Vert", 0));
        histo_gray->setText(QApplication::translate("MainWindow", "Gris", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Go !", 0));
        tab_page->setTabText(tab_page->indexOf(tab), QApplication::translate("MainWindow", "Photom\303\251trie", 0));
        label_arithmetique_img->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_arithmetique_res->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        btn_arith_img_1->setText(QApplication::translate("MainWindow", "Choisissez votre seconde image", 0));
        combo_arith->clear();
        combo_arith->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Op\303\251rations :", 0)
         << QApplication::translate("MainWindow", "Addition", 0)
         << QApplication::translate("MainWindow", "Soustraction", 0)
         << QApplication::translate("MainWindow", "Multiplication", 0)
         << QApplication::translate("MainWindow", "Division", 0)
         << QApplication::translate("MainWindow", "Maximum", 0)
         << QApplication::translate("MainWindow", "Minimum", 0)
         << QApplication::translate("MainWindow", "ET", 0)
         << QApplication::translate("MainWindow", "OU", 0)
        );
        Valid_arith->setText(QApplication::translate("MainWindow", "Valider", 0));
        label_largeur_arith->setText(QApplication::translate("MainWindow", "Largeur :", 0));
        label_hauteur_arith->setText(QApplication::translate("MainWindow", "Hauteur :", 0));
        Annul_arith->setText(QApplication::translate("MainWindow", "Annuler", 0));
        tab_page->setTabText(tab_page->indexOf(tab_2), QApplication::translate("MainWindow", "Arithm\303\251tique", 0));
        label_apercu_geo->setText(QApplication::translate("MainWindow", "Aper\303\247u :", 0));
        label_geo_img->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        Valid_geo->setText(QApplication::translate("MainWindow", "Valider", 0));
        combo_geo->clear();
        combo_geo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Op\303\251rations :", 0)
         << QApplication::translate("MainWindow", "Extraction", 0)
         << QApplication::translate("MainWindow", "Retournement", 0)
         << QApplication::translate("MainWindow", "Rotation", 0)
        );
        Annul_geo->setText(QApplication::translate("MainWindow", "Annuler", 0));
        radio_retournement_vert->setText(QApplication::translate("MainWindow", "Vertical", 0));
        radio_retournement_hor->setText(QApplication::translate("MainWindow", "Horizontal", 0));
        radio_retournement_verthor->setText(QApplication::translate("MainWindow", "Les deux", 0));
        radio_rotation_90->setText(QApplication::translate("MainWindow", "90\302\260", 0));
        radio_rotation_180->setText(QApplication::translate("MainWindow", "180\302\260", 0));
        radio_rotation_270->setText(QApplication::translate("MainWindow", "270\302\260", 0));
        radio_rotation_x->setText(QApplication::translate("MainWindow", "Angle (\302\260):", 0));
        rotation_x->setInputMask(QApplication::translate("MainWindow", "999", 0));
        rotation_x->setText(QApplication::translate("MainWindow", "0", 0));
        tab_page->setTabText(tab_page->indexOf(tab_3), QApplication::translate("MainWindow", "G\303\251om\303\251trique", 0));
        tab_page->setTabText(tab_page->indexOf(tab_4), QApplication::translate("MainWindow", "Conversion", 0));
        tab_page->setTabText(tab_page->indexOf(tab_5), QApplication::translate("MainWindow", "Options", 0));
        label_img->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_hauteur_img->setText(QApplication::translate("MainWindow", "hauteur : ", 0));
        label_largeur_img->setText(QApplication::translate("MainWindow", "largeur :", 0));
        label_2->setText(QApplication::translate("MainWindow", "Votre Image :", 0));
        btn_photo->setText(QApplication::translate("MainWindow", "Choisissez votre image", 0));
        Button_save->setText(QApplication::translate("MainWindow", "Enregistrer votre image", 0));
        label_format_img->setText(QApplication::translate("MainWindow", "Format :", 0));
        label_nbbit_img->setText(QApplication::translate("MainWindow", "Nombre de bits :", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
