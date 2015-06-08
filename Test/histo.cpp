#include "histo.h"


Histogramme::Histogramme() {

    this->largeur=0;
    this->hauteur=0;
    this->img=QImage();
    this->histo=Histogramme::setHisto_blanc();
    this->histo_cumul=Histogramme::setHisto_blanc();
    this->max_pixel=0;
}

Histogramme::Histogramme(int l, int h) {
    this->largeur=l;
    this->hauteur=h;
    this->img=QImage();
    this->histo=Histogramme::setHisto_blanc();
    this->histo_cumul=Histogramme::setHisto_blanc();
    this->max_pixel=0;
}

Histogramme::Histogramme(int l, int h, QImage img) {
    this->largeur=l;
    this->hauteur=h;
    this->img=img;
    Histogramme::setHisto(img);
    this->histo_cumul=Histogramme::setHisto_blanc();
    this->max_pixel=0;
}

int Histogramme::getHauteur() {
    return hauteur;
}

int Histogramme::getLargeur() {
    return largeur;
}

QImage Histogramme::getHisto() {
    return histo;
}

QImage Histogramme::getHisto_cumul() {
    return histo_cumul;
}

void Histogramme::setHauteur(int h) {
    hauteur=h;
}

void Histogramme::setLargeur(int l) {
    largeur=l;
}

void Histogramme::setHisto(QImage img) {
    histo= Histogramme::setHisto_blanc();

    int x, y, i, indice, max;
    int tab[255];

    max = 0;

    for(i=0;i<255;i++) {
        tab[i]=0;
    }

    for(x=0;x<largeur;x++) {
        for(y=0;y<hauteur;y++) {
            i = img.pixel(x,y);
            indice = qGray(i);
            tab[indice]++;
            if(tab[indice]>max)
                max=tab[indice];
        }
    }

    float coef = max/250;
    int value=0;

    for(i=0;i<255;i++) {
        value = tab[i];
        value=int(value/coef);

        x=20+i;

        for(y=255;y>255-value;y--) {
            histo.setPixel(x, y, qRgb(0,0,0));
        }

    }


}

void Histogramme::setHistoRed(QImage img) {
    histo= Histogramme::setHisto_blanc();

    int x, y, i, indice, max;
    int tab[255];

    max = 0;

    for(i=0;i<255;i++) {
        tab[i]=0;
    }

    for(x=0;x<largeur;x++) {
        for(y=0;y<hauteur;y++) {
            i = img.pixel(x,y);
            indice = qRed(i);
            tab[indice]++;
            if(tab[indice]>max)
                max=tab[indice];
        }
    }

    float coef = max/250;
    int value=0;

    for(i=0;i<255;i++) {
        value = tab[i];
        value=int(value/coef);

        x=20+i;

        for(y=255;y>255-value;y--) {
            histo.setPixel(x, y, qRgb(0,0,0));
        }

    }


}

void Histogramme::setHistoBlue(QImage img) {
    histo= Histogramme::setHisto_blanc();

    int x, y, i, indice, max;
    int tab[255];

    max = 0;

    for(i=0;i<255;i++) {
        tab[i]=0;
    }

    for(x=0;x<largeur;x++) {
        for(y=0;y<hauteur;y++) {
            i = img.pixel(x,y);
            indice = qBlue(i);
            tab[indice]++;
            if(tab[indice]>max)
                max=tab[indice];
        }
    }

    float coef = max/250;
    int value=0;

    for(i=0;i<255;i++) {
        value = tab[i];
        value=int(value/coef);

        x=20+i;

        for(y=255;y>255-value;y--) {
            histo.setPixel(x, y, qRgb(0,0,0));
        }

    }


}

void Histogramme::setHistoGreen(QImage img) {
    histo= Histogramme::setHisto_blanc();

    int x, y, i, indice, max;
    int tab[255];

    max = 0;

    for(i=0;i<255;i++) {
        tab[i]=0;
    }

    for(x=0;x<largeur;x++) {
        for(y=0;y<hauteur;y++) {
            i = img.pixel(x,y);
            indice = qGreen(i);
            tab[indice]++;
            if(tab[indice]>max)
                max=tab[indice];
        }
    }

    float coef = max/250;
    int value=0;

    for(i=0;i<255;i++) {
        value = tab[i];
        value=int(value/coef);

        x=20+i;

        for(y=255;y>255-value;y--) {
            histo.setPixel(x, y, qRgb(0,0,0));
        }

    }


}

void Histogramme::setHisto_cumul(QImage img) {
    histo_cumul=Histogramme::setHisto_blanc();
}

QImage Histogramme::setHisto_blanc() {
    QImage res = QImage(300,300, QImage::Format_RGB32);
    int x, y;
    for(x=0;x<largeur;x++) {
        for(y=0;y<hauteur;y++) {
            res.setPixel(x, y, qRgb(255, 255, 255));
        }
    }
    return res;
}
