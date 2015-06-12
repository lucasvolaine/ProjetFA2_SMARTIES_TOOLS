/********************************************************************************
** Form generated from reading UI file 'dll.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLL_H
#define UI_DLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dll
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Dll)
    {
        if (Dll->objectName().isEmpty())
            Dll->setObjectName(QStringLiteral("Dll"));
        Dll->resize(400, 300);
        centralWidget = new QWidget(Dll);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 0, 93, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 231, 201));
        Dll->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Dll);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        Dll->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Dll);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Dll->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Dll);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Dll->setStatusBar(statusBar);

        retranslateUi(Dll);

        QMetaObject::connectSlotsByName(Dll);
    } // setupUi

    void retranslateUi(QMainWindow *Dll)
    {
        Dll->setWindowTitle(QApplication::translate("Dll", "Dll", 0));
        pushButton->setText(QApplication::translate("Dll", "PushButton", 0));
        label->setText(QApplication::translate("Dll", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Dll: public Ui_Dll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLL_H
