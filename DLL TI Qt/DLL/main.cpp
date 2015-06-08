#include "dll.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dll w;
    w.show();

    return a.exec();
}
