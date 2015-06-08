#include "mainwindow.h"
#include "accueil.h"
#include <QApplication>
#include <QLayout>

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   accueil w;
   MainWindow m;

   w.show();
   m.setAttribute(Qt::WA_DeleteOnClose);
   m.setAttribute(Qt::WA_QuitOnClose);

   return a.exec();


}
