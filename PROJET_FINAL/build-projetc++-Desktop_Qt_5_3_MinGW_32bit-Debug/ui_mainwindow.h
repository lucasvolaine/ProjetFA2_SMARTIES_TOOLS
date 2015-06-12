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
#include <QtWidgets/QDoubleSpinBox>
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
#include <QtWidgets/QRadioButton>
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
    QHBoxLayout *horizontalLayout;
    QLabel *lblhistorimage;
    QTextEdit *txthistori;
    QVBoxLayout *verticalLayout_4;
    QGraphicsView *grapHisto;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrolldest;
    QWidget *scrollAreaWidgetContents;
    QLabel *lbl_histo;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *scroll;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *lbl_texte_source;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_5;
    QPushButton *bouton_source;
    QPushButton *boutonplus;
    QPushButton *boutonmoins;
    QWidget *tab_couleurPage2_2;
    QGridLayout *gridLayout_2;
    QScrollArea *scroll_couleur;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *Imagetraite;
    QVBoxLayout *verticalLayout_7;
    QComboBox *combo_couleur;
    QSpacerItem *verticalSpacer_4;
    QPushButton *plus2;
    QPushButton *moins2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *bouton_valide;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *labelforme;
    QSlider *slider_egalisation;
    QScrollArea *scroll_forme;
    QWidget *scrollAreaWidgetContents_4;
    QLCDNumber *lcd_egalisation;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QRadioButton *radio_manuel;
    QPushButton *bouton_manueln;
    QRadioButton *radio_automatique;
    QLabel *label;
    QLabel *label_a;
    QDoubleSpinBox *spin_a;
    QLabel *label_b;
    QDoubleSpinBox *spin_b;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *plus3;
    QPushButton *moins3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *bouton_valide2;
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
        tab_couleur->setEnabled(true);
        tab_couleur->setCursor(QCursor(Qt::OpenHandCursor));
        tab_couleurPage1_2 = new QWidget();
        tab_couleurPage1_2->setObjectName(QStringLiteral("tab_couleurPage1_2"));
        gridLayout = new QGridLayout(tab_couleurPage1_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblhistorimage = new QLabel(tab_couleurPage1_2);
        lblhistorimage->setObjectName(QStringLiteral("lblhistorimage"));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        lblhistorimage->setFont(font);

        horizontalLayout->addWidget(lblhistorimage, 0, Qt::AlignRight);

        txthistori = new QTextEdit(tab_couleurPage1_2);
        txthistori->setObjectName(QStringLiteral("txthistori"));

        horizontalLayout->addWidget(txthistori, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayout, 3, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        grapHisto = new QGraphicsView(tab_couleurPage1_2);
        grapHisto->setObjectName(QStringLiteral("grapHisto"));

        verticalLayout_4->addWidget(grapHisto);


        gridLayout->addLayout(verticalLayout_4, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrolldest = new QScrollArea(tab_couleurPage1_2);
        scrolldest->setObjectName(QStringLiteral("scrolldest"));
        scrolldest->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        scrolldest->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 499, 304));
        scrolldest->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrolldest);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        lbl_histo = new QLabel(tab_couleurPage1_2);
        lbl_histo->setObjectName(QStringLiteral("lbl_histo"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lbl_histo->setFont(font1);
        lbl_histo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_histo, 2, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        scroll = new QScrollArea(tab_couleurPage1_2);
        scroll->setObjectName(QStringLiteral("scroll"));
        scroll->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        scroll->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 499, 276));
        scroll->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_8->addWidget(scroll);

        lbl_texte_source = new QLabel(tab_couleurPage1_2);
        lbl_texte_source->setObjectName(QStringLiteral("lbl_texte_source"));
        lbl_texte_source->setFont(font1);
        lbl_texte_source->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(lbl_texte_source);


        gridLayout->addLayout(verticalLayout_8, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        bouton_source = new QPushButton(tab_couleurPage1_2);
        bouton_source->setObjectName(QStringLiteral("bouton_source"));
        bouton_source->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(bouton_source, 0, Qt::AlignLeft);

        boutonplus = new QPushButton(tab_couleurPage1_2);
        boutonplus->setObjectName(QStringLiteral("boutonplus"));
        boutonplus->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(boutonplus, 0, Qt::AlignLeft);

        boutonmoins = new QPushButton(tab_couleurPage1_2);
        boutonmoins->setObjectName(QStringLiteral("boutonmoins"));
        boutonmoins->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(boutonmoins, 0, Qt::AlignLeft);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        tab_couleur->addTab(tab_couleurPage1_2, QString());
        lbl_histo->raise();
        tab_couleurPage2_2 = new QWidget();
        tab_couleurPage2_2->setObjectName(QStringLiteral("tab_couleurPage2_2"));
        gridLayout_2 = new QGridLayout(tab_couleurPage2_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scroll_couleur = new QScrollArea(tab_couleurPage2_2);
        scroll_couleur->setObjectName(QStringLiteral("scroll_couleur"));
        scroll_couleur->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        scroll_couleur->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 969, 613));
        scroll_couleur->setWidget(scrollAreaWidgetContents_3);

        gridLayout_2->addWidget(scroll_couleur, 5, 0, 1, 1);

        Imagetraite = new QLabel(tab_couleurPage2_2);
        Imagetraite->setObjectName(QStringLiteral("Imagetraite"));
        Imagetraite->setFont(font1);

        gridLayout_2->addWidget(Imagetraite, 14, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        combo_couleur = new QComboBox(tab_couleurPage2_2);
        combo_couleur->setObjectName(QStringLiteral("combo_couleur"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        combo_couleur->setFont(font2);
        combo_couleur->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_7->addWidget(combo_couleur);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        plus2 = new QPushButton(tab_couleurPage2_2);
        plus2->setObjectName(QStringLiteral("plus2"));
        plus2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_7->addWidget(plus2, 0, Qt::AlignLeft);

        moins2 = new QPushButton(tab_couleurPage2_2);
        moins2->setObjectName(QStringLiteral("moins2"));
        moins2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_7->addWidget(moins2, 0, Qt::AlignLeft);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        bouton_valide = new QPushButton(tab_couleurPage2_2);
        bouton_valide->setObjectName(QStringLiteral("bouton_valide"));
        bouton_valide->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_7->addWidget(bouton_valide, 0, Qt::AlignLeft);


        gridLayout_2->addLayout(verticalLayout_7, 5, 1, 1, 1);

        tab_couleur->addTab(tab_couleurPage2_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelforme = new QLabel(tab);
        labelforme->setObjectName(QStringLiteral("labelforme"));
        labelforme->setFont(font1);

        gridLayout_4->addWidget(labelforme, 11, 1, 1, 1);

        slider_egalisation = new QSlider(tab);
        slider_egalisation->setObjectName(QStringLiteral("slider_egalisation"));
        slider_egalisation->setCursor(QCursor(Qt::PointingHandCursor));
        slider_egalisation->setMaximum(255);
        slider_egalisation->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(slider_egalisation, 12, 1, 1, 1);

        scroll_forme = new QScrollArea(tab);
        scroll_forme->setObjectName(QStringLiteral("scroll_forme"));
        scroll_forme->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        scroll_forme->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 927, 584));
        scroll_forme->setWidget(scrollAreaWidgetContents_4);

        gridLayout_4->addWidget(scroll_forme, 8, 1, 1, 1);

        lcd_egalisation = new QLCDNumber(tab);
        lcd_egalisation->setObjectName(QStringLiteral("lcd_egalisation"));
        lcd_egalisation->setEnabled(true);
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush2);
        lcd_egalisation->setPalette(palette1);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        lcd_egalisation->setFont(font3);
        lcd_egalisation->setCursor(QCursor(Qt::ArrowCursor));
        lcd_egalisation->setMouseTracking(false);

        gridLayout_4->addWidget(lcd_egalisation, 12, 2, 1, 1, Qt::AlignLeft);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setFont(font2);
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(comboBox);

        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setFont(font2);

        verticalLayout_6->addWidget(comboBox_2);

        radio_manuel = new QRadioButton(tab);
        radio_manuel->setObjectName(QStringLiteral("radio_manuel"));

        verticalLayout_6->addWidget(radio_manuel);

        bouton_manueln = new QPushButton(tab);
        bouton_manueln->setObjectName(QStringLiteral("bouton_manueln"));

        verticalLayout_6->addWidget(bouton_manueln, 0, Qt::AlignHCenter);

        radio_automatique = new QRadioButton(tab);
        radio_automatique->setObjectName(QStringLiteral("radio_automatique"));

        verticalLayout_6->addWidget(radio_automatique);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label->setFont(font4);

        verticalLayout_6->addWidget(label);

        label_a = new QLabel(tab);
        label_a->setObjectName(QStringLiteral("label_a"));
        QFont font5;
        font5.setPointSize(10);
        label_a->setFont(font5);

        verticalLayout_6->addWidget(label_a, 0, Qt::AlignHCenter);

        spin_a = new QDoubleSpinBox(tab);
        spin_a->setObjectName(QStringLiteral("spin_a"));
        spin_a->setMaximum(255);

        verticalLayout_6->addWidget(spin_a, 0, Qt::AlignHCenter);

        label_b = new QLabel(tab);
        label_b->setObjectName(QStringLiteral("label_b"));
        label_b->setFont(font5);

        verticalLayout_6->addWidget(label_b, 0, Qt::AlignHCenter);

        spin_b = new QDoubleSpinBox(tab);
        spin_b->setObjectName(QStringLiteral("spin_b"));
        spin_b->setMaximum(255);

        verticalLayout_6->addWidget(spin_b, 0, Qt::AlignHCenter);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_6->addWidget(pushButton, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        plus3 = new QPushButton(tab);
        plus3->setObjectName(QStringLiteral("plus3"));

        verticalLayout_6->addWidget(plus3, 0, Qt::AlignHCenter);

        moins3 = new QPushButton(tab);
        moins3->setObjectName(QStringLiteral("moins3"));

        verticalLayout_6->addWidget(moins3, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        bouton_valide2 = new QPushButton(tab);
        bouton_valide2->setObjectName(QStringLiteral("bouton_valide2"));
        bouton_valide2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(bouton_valide2, 0, Qt::AlignHCenter);


        gridLayout_4->addLayout(verticalLayout_6, 8, 2, 1, 1);

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
        menuAutres->addAction(actionAnnuler_zoom);
        menuAutres->addAction(actionAnnuler_Inversion);

        retranslateUi(MainWindow);

        tab_couleur->setCurrentIndex(2);


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
        lblhistorimage->setText(QApplication::translate("MainWindow", "Historique", 0));
        lbl_histo->setText(QApplication::translate("MainWindow", "Histogramme", 0));
        lbl_texte_source->setText(QApplication::translate("MainWindow", "Image Source", 0));
        bouton_source->setText(QApplication::translate("MainWindow", "Image Source", 0));
        boutonplus->setText(QString());
        boutonmoins->setText(QString());
        tab_couleur->setTabText(tab_couleur->indexOf(tab_couleurPage1_2), QString());
        Imagetraite->setText(QApplication::translate("MainWindow", "Image trait\303\251e", 0));
        combo_couleur->clear();
        combo_couleur->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Image Originale", 0)
         << QApplication::translate("MainWindow", "Plan Rouge", 0)
         << QApplication::translate("MainWindow", "Plan Vert", 0)
         << QApplication::translate("MainWindow", "Plan Bleu", 0)
        );
        plus2->setText(QString());
        moins2->setText(QString());
        bouton_valide->setText(QString());
        tab_couleur->setTabText(tab_couleur->indexOf(tab_couleurPage2_2), QString());
        labelforme->setText(QApplication::translate("MainWindow", "Image trait\303\251e", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Image Originale", 0)
         << QApplication::translate("MainWindow", "Supprimer le fond", 0)
         << QApplication::translate("MainWindow", "D\303\251tection de contours", 0)
         << QApplication::translate("MainWindow", "Inversion", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Image Originale", 0)
         << QApplication::translate("MainWindow", "Egalisation", 0)
         << QApplication::translate("MainWindow", "Seuill\303\251", 0)
        );
        radio_manuel->setText(QApplication::translate("MainWindow", "Seuillage manuel", 0));
        bouton_manueln->setText(QApplication::translate("MainWindow", "Seuill\303\251", 0));
        radio_automatique->setText(QApplication::translate("MainWindow", "Seuillage Automatique", 0));
        label->setText(QApplication::translate("MainWindow", "Bornes pour l'\303\251galisation a vers b", 0));
        label_a->setText(QApplication::translate("MainWindow", "a:", 0));
        label_b->setText(QApplication::translate("MainWindow", "b:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Egalis\303\251", 0));
        plus3->setText(QString());
        moins3->setText(QString());
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
