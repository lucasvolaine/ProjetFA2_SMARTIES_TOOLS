
#include "climage.h"

ClImage::ClImage()
{
    largeur=0;
    hauteur=0;
    pixel=NULL;
}

ClImage::ClImage(int l, int h)
{
    largeur=l;
    hauteur=h;
    pixel=new unsigned char[l*h];
}

ClImage::ClImage(QImage qImg)
{
    largeur=qImg.width();
    hauteur=qImg.height();
    pixel=new unsigned char[largeur*hauteur];

     unsigned char *ptr=qImg.bits();

     for(int i=0;i<largeur*hauteur;i++)
         pixel[i]=ptr[i];
}

ClImage::~ClImage()
{

}

int ClImage::lireLargeur() {
    return this->largeur;
}

int ClImage::lireHauteur(){
    return this->hauteur;
}

ClImage ClImage::inversion() {
    ClImage img(largeur,hauteur);
    for (int i=0;i<largeur*hauteur;i++) img.pixel[i]=255-this->pixel[i];
    return img;
}

ClImage ClImage::seuillage(int seuil) {
    ClImage img(largeur,hauteur);
    for (int i=0;i<largeur*hauteur;i++)
        if (this->pixel[i]<seuil) img.pixel[i]=0;
        else img.pixel[i]=255;
    return img;
}

ClImage ClImage::extraction(int a, QImage I)
{
    int l=I.width();
    int h=I.height();
    ClImage img(l,h);
    QRgb val;

    switch (a)
    {
    case 1:
    {

        for (int i=0;i<l;i++)
        {
            for (int j=0;j<h;j++)
            {
                val = I.pixel(i,j);
                img.pixel[j*l+i]=qRed(val);
            }
        }
    }
        break;

    case 2:
        for (int i=0;i<l;i++)
        {
            for (int j=0;j<h;j++)
            {
                val = I.pixel(i,j);
                img.pixel[j*l+i]=qGreen(val);
            }
        }
        break;

    case 3:
        for (int i=0;i<l;i++)
        {
            for (int j=0;j<h;j++)
            {
                val = I.pixel(i,j);
                img.pixel[j*l+i]=qBlue(val);
            }
        }
        break;
    }
    return img;
}

int * ClImage::histogramme() {
    int *histo=new int[256];
    for (int i=0;i<256;i++) histo[i]=0;
    for (int i=0;i<largeur*hauteur;i++) histo[pixel[i]]++;
    return histo;
}

QImage ClImage::imgQImage(){
    QImage qImg(pixel,this->lireLargeur(),this->lireHauteur(),QImage::Format_Indexed8);
    return qImg;
}

