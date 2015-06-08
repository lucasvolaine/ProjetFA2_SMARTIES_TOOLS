/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOurvir;
    QAction *actionEnregsitrer;
    QAction *actionEnregistrer_sous;
    QAction *actionQuitter;
    QAction *actionAnnuler;
    QAction *actionR_tablir;
    QAction *actionA_propos_de_Qt;
    QAction *actionCompl_ment;
    QAction *actionRouge;
    QAction *actionBleu;
    QAction *actionVert;
    QAction *actionCercle;
    QAction *actionCarr;
    QAction *actionCercle_2;
    QAction *actionCarr_2;
    QAction *actionRouge_2;
    QAction *actionVert_2;
    QAction *actionBleu_2;
    QAction *actionInversion;
    QAction *actionAnnuler_zoom;
    QAction *actionAnnuler_Inversion;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QTabWidget *tab_couleur;
    QWidget *tab_couleurPage1_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QPushButton *boutonauto;
    QPushButton *boutonseuil;
    QLCDNumber *lcd_seuil;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *lblhistorimage;
    QTextEdit *txthistori;
    QVBoxLayout *verticalLayout_2;
    QPushButton *bouton_source;
    QPushButton *boutonplus;
    QPushButton *boutonmoins;
    QVBoxLayout *verticalLayout_4;
    QGraphicsView *grapHisto;
    QSlider *hslider;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scroll;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrolldest;
    QWidget *scrollAreaWidgetContents;
    QLabel *lbl_histo;
    QLabel *lbl_texte_source;
    QLabel *label;
    QWidget *tab_couleurPage2_2;
    QGridLayout *gridLayout_2;
    QPushButton *moins2;
    QScrollArea *scroll_couleur;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *Imagetraite;
    QPushButton *plus2;
    QComboBox *combo_couleur;
    QPushButton *bouton_valide;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QPushButton *plus3;
    QScrollArea *scroll_forme;
    QWidget *scrollAreaWidgetContents_4;
    QLabel *labelforme;
    QPushButton *moins3;
    QComboBox *comboBox;
    QPushButton *bouton_valide2;
    QSlider *slider_egalisation;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuAide;
    QMenu *menuTraitement_NDG;
    QMenu *menuOuverture;
    QMenu *menuFermeture;
    QMenu *menuAutres;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1137, 752);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        MainWindow->setPalette(palette);
        actionOurvir = new QAction(MainWindow);
        actionOurvir->setObjectName(QStringLiteral("actionOurvir"));
        actionEnregsitrer = new QAction(MainWindow);
        actionEnregsitrer->setObjectName(QStringLiteral("actionEnregsitrer"));
        actionEnregistrer_sous = new QAction(MainWindow);
        actionEnregistrer_sous->setObjectName(QStringLiteral("actionEnregistrer_sous"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionAnnuler = new QAction(MainWindow);
        actionAnnuler->setObjectName(QStringLiteral("actionAnnuler"));
        actionR_tablir = new QAction(MainWindow);
        actionR_tablir->setObjectName(QStringLiteral("actionR_tablir"));
        actionA_propos_de_Qt = new QAction(MainWindow);
        actionA_propos_de_Qt->setObjectName(QStringLiteral("actionA_propos_de_Qt"));
        actionCompl_ment = new QAction(MainWindow);
        actionCompl_ment->setObjectName(QStringLiteral("actionCompl_ment"));
        actionRouge = new QAction(MainWindow);
        actionRouge->setObjectName(QStringLiteral("actionRouge"));
        actionBleu = new QAction(MainWindow);
        actionBleu->setObjectName(QStringLiteral("actionBleu"));
        actionVert = new QAction(MainWindow);
        actionVert->setObjectName(QStringLiteral("actionVert"));
        actionCercle = new QAction(MainWindow);
        actionCercle->setObjectName(QStringLiteral("actionCercle"));
        actionCarr = new QAction(MainWindow);
        actionCarr->setObjectName(QStringLiteral("actionCarr"));
        actionCercle_2 = new QAction(MainWindow);
        actionCercle_2->setObjectName(QStringLiteral("actionCercle_2"));
        actionCarr_2 = new QAction(MainWindow);
        actionCarr_2->setObjectName(QStringLiteral("actionCarr_2"));
        actionRouge_2 = new QAction(MainWindow);
        actionRouge_2->setObjectName(QStringLiteral("actionRouge_2"));
        actionVert_2 = new QAction(MainWindow);
        actionVert_2->setObjectName(QStringLiteral("actionVert_2"));
        actionBleu_2 = new QAction(MainWindow);
        actionBleu_2->setObjectName(QStringLiteral("actionBleu_2"));
        actionInversion = new QAction(MainWindow);
        actionInversion->setObjectName(QStringLiteral("actionInversion"));
        actionAnnuler_zoom = new QAction(MainWindow);
        actionAnnuler_zoom->setObjectName(QStringLiteral("actionAnnuler_zoom"));
        actionAnnuler_Inversion = new QAction(MainWindow);
        actionAnnuler_Inversion->setObjectName(QStringLiteral("actionAnnuler_Inversion"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tab_couleur = new QTabWidget(centralWidget);
        tab_couleur->setObjectName(QStringLiteral("tab_couleur"));
        tab_couleur->setCursor(QCursor(Qt::OpenHandCursor));
        tab_couleurPage1_2 = new QWidget();
        tab_couleurPage1_2->setObjectName(QStringLiteral("tab_couleurPage1_2"));
        gridLayout = new QGridLayout(tab_couleurPage1_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        boutonauto = new QPushButton(tab_couleurPage1_2);
        boutonauto->setObjectName(QStringLiteral("boutonauto"));
        boutonauto->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_5->addWidget(boutonauto);

        boutonseuil = new QPushButton(tab_couleurPage1_2);
        boutonseuil->setObjectName(QStringLiteral("boutonseuil"));
        boutonseuil->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_5->addWidget(boutonseuil);

        lcd_seuil = new QLCDNumber(tab_couleurPage1_2);
        lcd_seuil->setObjectName(QStringLiteral("lcd_seuil"));
        QPalette palette1;
        QBrush brush2(QColor(85, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(0, 0, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush3);
        lcd_seuil->setPalette(palette1);
        lcd_seuil->setAutoFillBackground(false);
        lcd_seuil->setStyleSheet(QLatin1String("QLCDNumber{\n"
"color: rgb(85, 0, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"}"));

        verticalLayout_5->addWidget(lcd_seuil);


        gridLayout->addLayout(verticalLayout_5, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblhistorimage = new QLabel(tab_couleurPage1_2);
        lblhistorimage->setObjectName(QStringLiteral("lblhistorimage"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lblhistorimage->setFont(font);

        horizontalLayout->addWidget(lblhistorimage);

        txthistori = new QTextEdit(tab_couleurPage1_2);
        txthistori->setObjectName(QStringLiteral("txthistori"));

        horizontalLayout->addWidget(txthistori);


        gridLayout->addLayout(horizontalLayout, 4, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        bouton_source = new QPushButton(tab_couleurPage1_2);
        bouton_source->setObjectName(QStringLiteral("bouton_source"));
        bouton_source->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(bouton_source);

        boutonplus = new QPushButton(tab_couleurPage1_2);
        boutonplus->setObjectName(QStringLiteral("boutonplus"));
        boutonplus->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(boutonplus);

        boutonmoins = new QPushButton(tab_couleurPage1_2);
        boutonmoins->setObjectName(QStringLiteral("boutonmoins"));
        boutonmoins->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(boutonmoins);


        gridLayout->addLayout(verticalLayout_2, 2, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        grapHisto = new QGraphicsView(tab_couleurPage1_2);
        grapHisto->setObjectName(QStringLiteral("grapHisto"));

        verticalLayout_4->addWidget(grapHisto);

        hslider = new QSlider(tab_couleurPage1_2);
        hslider->setObjectName(QStringLiteral("hslider"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush4(QColor(213, 127, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(191, 63, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(85, 0, 127, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(113, 0, 170, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush8(QColor(255, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush8);
        QBrush brush9(QColor(170, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush10(QColor(212, 127, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        hslider->setPalette(palette2);
        hslider->setCursor(QCursor(Qt::PointingHandCursor));
        hslider->setMaximum(255);
        hslider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(hslider);


        gridLayout->addLayout(verticalLayout_4, 4, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scroll = new QScrollArea(tab_couleurPage1_2);
        scroll->setObjectName(QStringLiteral("scroll"));
        scroll->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        scroll->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 499, 245));
        scroll->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scroll);


        gridLayout->addLayout(verticalLayout_3, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrolldest = new QScrollArea(tab_couleurPage1_2);
        scrolldest->setObjectName(QStringLiteral("scrolldest"));
        scrolldest->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        scrolldest->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 499, 334));
        scrolldest->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrolldest);


        gridLayout->addLayout(verticalLayout, 1, 0, 2, 1);

        lbl_histo = new QLabel(tab_couleurPage1_2);
        lbl_histo->setObjectName(QStringLiteral("lbl_histo"));
        lbl_histo->setFont(font);
        lbl_histo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_histo, 3, 0, 1, 1);

        lbl_texte_source = new QLabel(tab_couleurPage1_2);
        lbl_texte_source->setObjectName(QStringLiteral("lbl_texte_source"));
        lbl_texte_source->setFont(font);
        lbl_texte_source->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_texte_source, 2, 2, 1, 1);

        label = new QLabel(tab_couleurPage1_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tab_couleur->addTab(tab_couleurPage1_2, QString());
        lbl_histo->raise();
        lbl_texte_source->raise();
        label->raise();
        tab_couleurPage2_2 = new QWidget();
        tab_couleurPage2_2->setObjectName(QStringLiteral("tab_couleurPage2_2"));
        gridLayout_2 = new QGridLayout(tab_couleurPage2_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        moins2 = new QPushButton(tab_couleurPage2_2);
        moins2->setObjectName(QStringLiteral("moins2"));
        moins2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(moins2, 15, 1, 1, 1);

        scroll_couleur = new QScrollArea(tab_couleurPage2_2);
        scroll_couleur->setObjectName(QStringLiteral("scroll_couleur"));
        scroll_couleur->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        scroll_couleur->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 971, 551));
        scroll_couleur->setWidget(scrollAreaWidgetContents_3);

        gridLayout_2->addWidget(scroll_couleur, 5, 0, 1, 1);

        Imagetraite = new QLabel(tab_couleurPage2_2);
        Imagetraite->setObjectName(QStringLiteral("Imagetraite"));
        Imagetraite->setFont(font);
        Imagetraite->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Imagetraite, 14, 0, 1, 1);

        plus2 = new QPushButton(tab_couleurPage2_2);
        plus2->setObjectName(QStringLiteral("plus2"));
        plus2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(plus2, 14, 1, 1, 1);

        combo_couleur = new QComboBox(tab_couleurPage2_2);
        combo_couleur->setObjectName(QStringLiteral("combo_couleur"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        combo_couleur->setFont(font1);
        combo_couleur->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(combo_couleur, 0, 1, 1, 1);

        bouton_valide = new QPushButton(tab_couleurPage2_2);
        bouton_valide->setObjectName(QStringLiteral("bouton_valide"));
        bouton_valide->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(bouton_valide, 5, 1, 1, 1);

        tab_couleur->addTab(tab_couleurPage2_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        plus3 = new QPushButton(tab);
        plus3->setObjectName(QStringLiteral("plus3"));

        gridLayout_4->addWidget(plus3, 3, 1, 1, 1);

        scroll_forme = new QScrollArea(tab);
        scroll_forme->setObjectName(QStringLiteral("scroll_forme"));
        scroll_forme->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        scroll_forme->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 936, 551));
        scroll_forme->setWidget(scrollAreaWidgetContents_4);

        gridLayout_4->addWidget(scroll_forme, 1, 0, 1, 1);

        labelforme = new QLabel(tab);
        labelforme->setObjectName(QStringLiteral("labelforme"));
        labelforme->setFont(font);
        labelforme->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelforme, 3, 0, 1, 1);

        moins3 = new QPushButton(tab);
        moins3->setObjectName(QStringLiteral("moins3"));

        gridLayout_4->addWidget(moins3, 4, 1, 1, 1);

        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setFont(font1);
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(comboBox, 0, 1, 1, 1);

        bouton_valide2 = new QPushButton(tab);
        bouton_valide2->setObjectName(QStringLiteral("bouton_valide2"));
        bouton_valide2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(bouton_valide2, 1, 1, 1, 1);

        slider_egalisation = new QSlider(tab);
        slider_egalisation->setObjectName(QStringLiteral("slider_egalisation"));
        slider_egalisation->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(slider_egalisation, 4, 0, 1, 1);

        tab_couleur->addTab(tab, QString());

        gridLayout_3->addWidget(tab_couleur, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1137, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QStringLiteral("menuEdition"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        menuTraitement_NDG = new QMenu(menuBar);
        menuTraitement_NDG->setObjectName(QStringLiteral("menuTraitement_NDG"));
        menuOuverture = new QMenu(menuTraitement_NDG);
        menuOuverture->setObjectName(QStringLiteral("menuOuverture"));
        menuFermeture = new QMenu(menuTraitement_NDG);
        menuFermeture->setObjectName(QStringLiteral("menuFermeture"));
        menuAutres = new QMenu(menuBar);
        menuAutres->setObjectName(QStringLiteral("menuAutres"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuBar->addAction(menuTraitement_NDG->menuAction());
        menuBar->addAction(menuAutres->menuAction());
        menuFichier->addAction(actionOurvir);
        menuFichier->addAction(actionEnregsitrer);
        menuFichier->addAction(actionEnregistrer_sous);
        menuFichier->addAction(actionQuitter);
        menuEdition->addAction(actionAnnuler);
        menuEdition->addAction(actionR_tablir);
        menuAide->addAction(actionA_propos_de_Qt);
        menuTraitement_NDG->addAction(actionCompl_ment);
        menuTraitement_NDG->addAction(menuOuverture->menuAction());
        menuTraitement_NDG->addAction(menuFermeture->menuAction());
        menuOuverture->addAction(actionCercle);
        menuOuverture->addAction(actionCarr);
        menuFermeture->addAction(actionCercle_2);
        menuFermeture->addAction(actionCarr_2);
        menuAutres->addAction(actionInversion);
        menuAutres->addAction(actionAnnuler_zoom);
        menuAutres->addAction(actionAnnuler_Inversion);

        retranslateUi(MainWindow);
        QObject::connect(hslider, SIGNAL(sliderMoved(int)), lcd_seuil, SLOT(display(int)));

        tab_couleur->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Projet C++", 0));
        actionOurvir->setText(QApplication::translate("MainWindow", "Ouvir...", 0));
        actionOurvir->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionEnregsitrer->setText(QApplication::translate("MainWindow", "Enregistrer", 0));
        actionEnregsitrer->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionEnregistrer_sous->setText(QApplication::translate("MainWindow", "Enregistrer sous...", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionQuitter->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionAnnuler->setText(QApplication::translate("MainWindow", "Annuler", 0));
        actionAnnuler->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionR_tablir->setText(QApplication::translate("MainWindow", "R\303\251tablir", 0));
        actionR_tablir->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0));
        actionA_propos_de_Qt->setText(QApplication::translate("MainWindow", "A propos de Qt...", 0));
        actionCompl_ment->setText(QApplication::translate("MainWindow", "Compl\303\251ment", 0));
        actionRouge->setText(QApplication::translate("MainWindow", "Rouge", 0));
        actionBleu->setText(QApplication::translate("MainWindow", "Bleu", 0));
        actionVert->setText(QApplication::translate("MainWindow", "Vert", 0));
        actionCercle->setText(QApplication::translate("MainWindow", "Cercle", 0));
        actionCarr->setText(QApplication::translate("MainWindow", "Carr\303\251", 0));
        actionCercle_2->setText(QApplication::translate("MainWindow", "Cercle", 0));
        actionCarr_2->setText(QApplication::translate("MainWindow", "Carr\303\251", 0));
        actionRouge_2->setText(QApplication::translate("MainWindow", "Rouge", 0));
        actionVert_2->setText(QApplication::translate("MainWindow", "Vert", 0));
        actionBleu_2->setText(QApplication::translate("MainWindow", "Bleu", 0));
        actionInversion->setText(QApplication::translate("MainWindow", "Inversion", 0));
        actionAnnuler_zoom->setText(QApplication::translate("MainWindow", "Annuler zoom", 0));
        actionAnnuler_Inversion->setText(QApplication::translate("MainWindow", "Annuler Inversion", 0));
        boutonauto->setText(QApplication::translate("MainWindow", "Automatique", 0));
        boutonseuil->setText(QApplication::translate("MainWindow", "Seuiller", 0));
        lblhistorimage->setText(QApplication::translate("MainWindow", "Historique", 0));
        bouton_source->setText(QApplication::translate("MainWindow", "Image Source", 0));
        boutonplus->setText(QString());
        boutonmoins->setText(QString());
        lbl_histo->setText(QApplication::translate("MainWindow", "Histogramme", 0));
        lbl_texte_source->setText(QApplication::translate("MainWindow", "Image Source", 0));
        label->setText(QApplication::translate("MainWindow", "Image trait\303\251e finale", 0));
        tab_couleur->setTabText(tab_couleur->indexOf(tab_couleurPage1_2), QString());
        moins2->setText(QString());
        Imagetraite->setText(QApplication::translate("MainWindow", "Image trait\303\251e", 0));
        plus2->setText(QString());
        combo_couleur->clear();
        combo_couleur->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Image Originale", 0)
         << QApplication::translate("MainWindow", "Plan Rouge", 0)
         << QApplication::translate("MainWindow", "Plan Vert", 0)
         << QApplication::translate("MainWindow", "Plan Bleu", 0)
        );
        bouton_valide->setText(QString());
        tab_couleur->setTabText(tab_couleur->indexOf(tab_couleurPage2_2), QString());
        plus3->setText(QString());
        labelforme->setText(QApplication::translate("MainWindow", "Image trait\303\251e", 0));
        moins3->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Image Originale", 0)
         << QApplication::translate("MainWindow", "Supprimer le fond", 0)
         << QApplication::translate("MainWindow", "D\303\251tection de contours", 0)
         << QApplication::translate("MainWindow", "Egalisation", 0)
        );
        bouton_valide2->setText(QString());
        tab_couleur->setTabText(tab_couleur->indexOf(tab), QApplication::translate("MainWindow", "Page", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0));
        menuTraitement_NDG->setTitle(QApplication::translate("MainWindow", "Traitement NDG", 0));
        menuOuverture->setTitle(QApplication::translate("MainWindow", "Ouverture", 0));
        menuFermeture->setTitle(QApplication::translate("MainWindow", "Fermeture", 0));
        menuAutres->setTitle(QApplication::translate("MainWindow", "Autres", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
