#ifndef CLIMAGE_H
#define CLIMAGE_H

#include <QImage>
#include <QRgb>
class ClImage
{
private:
    int largeur;
    int hauteur;

    unsigned char *pixel;

public:
    ClImage();
    ClImage(int,int);
    ClImage(QImage);
    ~ClImage();

    int lireLargeur();
    int lireHauteur();

    ClImage inversion();
    ClImage seuillage(int);

    ClImage extraction(int,QImage);

    ClImage reSizeOrigin(int);

    int* histogramme();

    QImage imgQImage();
};

#endif // CLIMAGE_H

