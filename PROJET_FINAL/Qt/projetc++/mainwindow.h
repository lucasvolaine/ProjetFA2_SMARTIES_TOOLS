#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QLineEdit>
#include <QSpinBox>
#include <QMessageBox>
#include <QLabel>
#include <QFile>
#include "QFileDialog"
#include <QComboBox>
#include <QGroupBox>
#include <Qfile.h>
#include <Qtextstream.h>
#include <iostream>
#include <QDateTime>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_boutonouvrir_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
