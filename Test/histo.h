#ifndef HISTO_H
#define HISTO_H

#endif // HISTO_H

#include <QtGui>

class Histogramme {

    public :
        Histogramme();
        Histogramme(int, int);
        Histogramme(int, int, QImage);
        void setLargeur(int);
        void setHauteur(int);
        void setHisto(QImage);
        void setHistoRed(QImage);
        void setHistoBlue(QImage);
        void setHistoGreen(QImage);
        void setHisto_cumul(QImage);
        int getLargeur();
        int getHauteur();
        QImage getHisto();
        QImage getHisto_cumul();
        //void affiche(QLabel);

   private :
        QImage img;
        QImage histo;
        QImage histo_cumul;
        int largeur;
        int hauteur;
        int max_pixel;
        QImage setHisto_blanc();

};
