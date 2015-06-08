#ifndef ACCUEIL_H
#define ACCUEIL_H

#include <QWidget>
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
class accueil;
}

class accueil : public QWidget
{
    Q_OBJECT

public:
    explicit accueil(QWidget *parent = 0);
    ~accueil();

private slots:


    void on_link_commencer_clicked();

private:
    Ui::accueil *ui;
};

#endif // ACCUEIL_H
