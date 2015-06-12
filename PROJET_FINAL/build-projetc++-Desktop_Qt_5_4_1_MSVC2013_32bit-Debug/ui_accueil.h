/********************************************************************************
** Form generated from reading UI file 'accueil.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accueil
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *link_commencer;
    QPushButton *bouton_quit_app;
    QTimeEdit *timeEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *accueil)
    {
        if (accueil->objectName().isEmpty())
            accueil->setObjectName(QStringLiteral("accueil"));
        accueil->resize(886, 623);
        gridLayout = new QGridLayout(accueil);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        link_commencer = new QCommandLinkButton(accueil);
        link_commencer->setObjectName(QStringLiteral("link_commencer"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(20);
        link_commencer->setFont(font);
        link_commencer->setCursor(QCursor(Qt::PointingHandCursor));
        link_commencer->setIconSize(QSize(30, 30));

        gridLayout->addWidget(link_commencer, 3, 2, 1, 1, Qt::AlignVCenter);

        bouton_quit_app = new QPushButton(accueil);
        bouton_quit_app->setObjectName(QStringLiteral("bouton_quit_app"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        bouton_quit_app->setFont(font1);
        bouton_quit_app->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(bouton_quit_app, 0, 6, 1, 1);

        timeEdit = new QTimeEdit(accueil);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 1, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 1, 1, 1);


        retranslateUi(accueil);
        QObject::connect(link_commencer, SIGNAL(clicked()), accueil, SLOT(close()));
        QObject::connect(bouton_quit_app, SIGNAL(clicked()), accueil, SLOT(close()));

        QMetaObject::connectSlotsByName(accueil);
    } // setupUi

    void retranslateUi(QWidget *accueil)
    {
        accueil->setWindowTitle(QApplication::translate("accueil", "Accueil", 0));
        link_commencer->setText(QApplication::translate("accueil", "Commencer le traitement", 0));
        bouton_quit_app->setText(QApplication::translate("accueil", "QUITTER APPLICATION", 0));
    } // retranslateUi

};

namespace Ui {
    class accueil: public Ui_accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
