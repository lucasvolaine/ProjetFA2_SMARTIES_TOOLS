/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
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
    QWidget *centralWidget;
    QLabel *lblsource;
    QLabel *lbltraite;
    QTextEdit *txthistori;
    QLabel *lblhistorimage;
    QGraphicsView *grapHisto;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1020, 625);
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
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblsource = new QLabel(centralWidget);
        lblsource->setObjectName(QStringLiteral("lblsource"));
        lblsource->setGeometry(QRect(820, 20, 150, 150));
        lbltraite = new QLabel(centralWidget);
        lbltraite->setObjectName(QStringLiteral("lbltraite"));
        lbltraite->setGeometry(QRect(70, 40, 640, 360));
        txthistori = new QTextEdit(centralWidget);
        txthistori->setObjectName(QStringLiteral("txthistori"));
        txthistori->setGeometry(QRect(860, 390, 151, 171));
        lblhistorimage = new QLabel(centralWidget);
        lblhistorimage->setObjectName(QStringLiteral("lblhistorimage"));
        lblhistorimage->setGeometry(QRect(770, 390, 81, 171));
        grapHisto = new QGraphicsView(centralWidget);
        grapHisto->setObjectName(QStringLiteral("grapHisto"));
        grapHisto->setGeometry(QRect(60, 410, 640, 150));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1020, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QStringLiteral("menuEdition"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuFichier->addAction(actionOurvir);
        menuFichier->addAction(actionEnregsitrer);
        menuFichier->addAction(actionEnregistrer_sous);
        menuFichier->addAction(actionQuitter);
        menuEdition->addAction(actionAnnuler);
        menuEdition->addAction(actionR_tablir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOurvir->setText(QApplication::translate("MainWindow", "Ouvir...", 0));
        actionEnregsitrer->setText(QApplication::translate("MainWindow", "Enregistrer", 0));
        actionEnregistrer_sous->setText(QApplication::translate("MainWindow", "Enregistrer sous...", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionAnnuler->setText(QApplication::translate("MainWindow", "Annuler", 0));
        actionR_tablir->setText(QApplication::translate("MainWindow", "R\303\251tablir", 0));
        lblsource->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        lbltraite->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        lblhistorimage->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
