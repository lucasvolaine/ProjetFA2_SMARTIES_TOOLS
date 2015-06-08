#include "image.h"

Image::Image():QImage()
{
}

Image::Image(QString &string):QImage(string)
{

}

Image::Image(const QImage &image):QImage(image)
{

}

//retourne une image retaillée selon la taille "max" en gardant les proportions
Image Image::reSizeOrigin(int max){
    if(this->height()>this->width())
                return this->scaledToHeight(max);
    else
                return this->scaledToWidth(max);
}

//retourne une image avec la modification de luminosité de this
Image Image::setLuminosite(int valeur){
        Image image=*this;
        int i, red, green, blue;
        bool gris =image.allGray();
        for(int x = 0;x<image.width();x++)
        {
           for (int y=0; y<image.height(); y++) {
                    i = image.pixel(x,y);
                    red=qRed(i)+valeur;
                            if(red>255)
                                red=255;
                            if(red<0)
                                red=0;

                            green=qGreen(i)+valeur;
                            if(green>255)
                                green=255;
                            if(green<0)
                                green=0;

                            blue=qBlue(i)+valeur;
                            if(blue>255)
                                blue=255;
                            if(blue<0)
                                blue=0;

                            if (gris)
                                 image.setPixel(x, y,(red+green+blue)/3);
                             else
                                image.setPixel(x, y, qRgb(red, green, blue));
              }
         }
        return image;
}

//retourne l'addition des images this et img
Image Image::operator +(Image img){
        Image image=*this;
        QRgb pixel1;
        QRgb pixel2;
        int red,blue,green;
        bool gris =image.allGray();
        for (int i=0; i<image.width(); i++){
                for(int j=0; j<image.height(); j++){
                        if (img.valid(i,j)){
                                pixel1 = image.pixel(i,j);
                                pixel2 = img.pixel(i,j);

                                if (qRed(pixel1)+qRed(pixel2)<255)
                                        red=qRed(pixel1)+qRed(pixel2);
                                else
                                        red=255;
                                if (qGreen(pixel1)+qGreen(pixel2)<255)
                                        green=qGreen(pixel1)+qGreen(pixel2);
                                else
                                        green=255;
                                if (qBlue(pixel1)+qBlue(pixel2)<255)
                                        blue=qBlue(pixel1)+qBlue(pixel2);
                                else
                                blue=255;


                                if (gris)
                                 image.setPixel(i, j,(red+green+blue)/3);
                                else
                                image.setPixel(i, j, qRgb(red, green, blue));
                        }
                }
        }
    return image;
}

//retourne la soustraction des images this et img
Image Image::operator -(Image img){
        Image image=*this;
        QRgb pixel1;
        QRgb pixel2;
        int red,blue,green;
        bool gris =image.allGray();
        for (int i=0; i<image.width(); i++){
                for(int j=0; j<image.height(); j++){
                        if (img.valid(i,j)){
                                pixel1 = image.pixel(i,j);
                                pixel2 = img.pixel(i,j);

                                if (qRed(pixel1)-qRed(pixel2)>0)
                                                red=qRed(pixel1)-qRed(pixel2);
                                else
                                                red=0;
                                if (qGreen(pixel1)-qGreen(pixel2)>0)
                                                green=qGreen(pixel1)-qGreen(pixel2);
                                else
                                                green=0;
                                if (qBlue(pixel1)-qBlue(pixel2)>0)
                                                blue=qBlue(pixel1)-qBlue(pixel2);
                                else
                                                blue=0;

                                if (gris)
                                 image.setPixel(i, j,(red+green+blue)/3);
                                else
                                image.setPixel(i, j, qRgb(red, green, blue));
                        }
                }
        }
    return image;
}

//retourne la multiplication des images this et img
Image Image::operator *(Image img){
        Image image=*this;
        QRgb pixel1;
        QRgb pixel2;
        int red,blue,green;
        bool gris =image.allGray();
        for (int i=0; i<image.width(); i++){
                for(int j=0; j<image.height(); j++){
                        if (img.valid(i,j)){
                                pixel1 = image.pixel(i,j);
                                pixel2 = img.pixel(i,j);

                                red=(int)(qRed(pixel1)*qRed(pixel2)/255);
                                green=(int)(qGreen(pixel1)*qGreen(pixel2)/255);
                                blue=(int)(qBlue(pixel1)*qBlue(pixel2)/255);

                                if (gris)
                                 image.setPixel(i, j,(red+green+blue)/3);
                                else
                                image.setPixel(i, j, qRgb(red, green, blue));
                        }
                }
        }
    return image;
}

//retourne la division des images this et img
Image Image::operator /(Image img){
        Image image=*this;
        QRgb pixel1;
        QRgb pixel2;
        int red,blue,green;
        bool gris =image.allGray();
        for (int i=0; i<image.width(); i++){
                for(int j=0; j<image.height(); j++){
                        if (img.valid(i,j)){
                                pixel1 = image.pixel(i,j);
                                pixel2 = img.pixel(i,j);

                                if (qRed(pixel2)!=0 && qRed(pixel1)/qRed(pixel2)*255<255)
                                                red=qRed(pixel1)/qRed(pixel2)*255;
                                else
                                                red=255;
                                if (qGreen(pixel2)!=0 && qGreen(pixel1)/qGreen(pixel2)*255<255)
                                                green=qGreen(pixel1)/qGreen(pixel2)*255;
                                else
                                                green=255;
                                if (qBlue(pixel2)!=0 && qBlue(pixel1)/qBlue(pixel2)*255<255)
                                                blue=qBlue(pixel1)/qBlue(pixel2)*255;
                                else
                                                blue=255;
                                if (gris)
                                 image.setPixel(i, j,(red+green+blue)/3);
                                else
                                image.setPixel(i, j, qRgb(red, green, blue));
                        }
                }
        }
    return image;
}

//retourne l'opération ET binaire des images this et img
Image Image::operator &(Image img){
        Image image=*this;
        QRgb pixel1;
        QRgb pixel2;
        int red,blue,green;
        bool gris =image.allGray();
        for (int i=0; i<image.width(); i++){
                for(int j=0; j<image.height(); j++){
                        if (img.valid(i,j)){
                                pixel1 = image.pixel(i,j);
                                pixel2 = img.pixel(i,j);

                                red=qRed(pixel1)&qRed(pixel2);
                                green=qGreen(pixel1)&qGreen(pixel2);
                                blue=qBlue(pixel1)&qBlue(pixel2);

                                if (gris)
                                 image.setPixel(i, j,(red+green+blue)/3);
                                else
                                image.setPixel(i, j, qRgb(red, green, blue));
                        }
                }
        }
    return image;
}

//retourne l'opération OU binaire des images this et img
Image Image::operator |(Image img){
        Image image=*this;
        QRgb pixel1;
        QRgb pixel2;
        int red,blue,green;
        bool gris =image.allGray();
        for (int i=0; i<image.width(); i++){
                for(int j=0; j<image.height(); j++){
                        if (img.valid(i,j)){
                                pixel1 = image.pixel(i,j);
                                pixel2 = img.pixel(i,j);

                                red=qRed(pixel1)|qRed(pixel2);
                                green=qGreen(pixel1)|qGreen(pixel2);
                                blue=qBlue(pixel1)|qBlue(pixel2);

                                if (gris)
                                 image.setPixel(i, j,(red+green+blue)/3);
                                else
                                image.setPixel(i, j, qRgb(red, green, blue));
                        }
                }
        }
    return image;
}

//retourne le maximum des images this et img
Image Image::maximum(Image img){
        Image image=*this;
        QRgb pixel1;
        QRgb pixel2;
        int red,blue,green;
        bool gris =image.allGray();
        for (int i=0; i<image.width(); i++){
                for(int j=0; j<image.height(); j++){
                        if (img.valid(i,j)){
                                pixel1 = image.pixel(i,j);
                                pixel2 = img.pixel(i,j);

                                if (qRed(pixel1)>qRed(pixel2))
                                                red=qRed(pixel1);
                                else
                                                red=qRed(pixel2);
                                if (qBlue(pixel1)>qBlue(pixel2))
                                                blue=qBlue(pixel1);
                                else
                                                blue=qBlue(pixel2);
                                if (qGreen(pixel1)>qGreen(pixel2))
                                                green=qGreen(pixel1);
                                else
                                                green=qGreen(pixel2);

                                if (gris)
                                 image.setPixel(i, j,(red+green+blue)/3);
                                else
                                image.setPixel(i, j, qRgb(red, green, blue));
                        }
                }
        }
    return image;
}

//retourne le minimum des images this et img
Image Image::minimum(Image img){
        Image image=*this;
        QRgb pixel1;
        QRgb pixel2;
        int red,blue,green;
        bool gris =image.allGray();
        for (int i=0; i<image.width(); i++){
                for(int j=0; j<image.height(); j++){
                        if (img.valid(i,j)){
                                pixel1 = image.pixel(i,j);
                                pixel2 = img.pixel(i,j);

                                if (qRed(pixel1)<qRed(pixel2))
                                                red=qRed(pixel1);
                                else
                                                red=qRed(pixel2);
                                if (qBlue(pixel1)<qBlue(pixel2))
                                                blue=qBlue(pixel1);
                                else
                                                blue=qBlue(pixel2);
                                if (qGreen(pixel1)<qGreen(pixel2))
                                                green=qGreen(pixel1);
                                else
                                                green=qGreen(pixel2);

                                if (gris)
                                 image.setPixel(i, j,(red+green+blue)/3);
                                else
                                image.setPixel(i, j, qRgb(red, green, blue));
                        }
                }
        }
    return image;
}

//retourne l'image inverse de this selon la verticale
Image Image::miroir_vert(){
    Image image=*this;
    int width=image.width();
    bool gris=image.allGray();
    if(!gris){
        for (int i=0; i<image.width(); i++){
            for(int j=0; j<image.height(); j++){
                image.setPixel(i,j,this->pixel(width-i,j));
            }
        }
    }else{
        QRgb pixel;
        int red,green,blue;
        for (int i=0; i<image.width(); i++){
            for(int j=0; j<image.height(); j++){
                pixel=this->pixel(width-i,j);
                red=qRed(pixel);
                blue=qBlue(pixel);
                green=qGreen(pixel);
                image.setPixel(i,j,(red+green+blue)/3);
            }
        }
    }
    return image;
}

//retourne l'image inverse de this selon l'horizontale
Image Image::miroir_hor(){
    Image image=*this;
    int height=image.height();
    bool gris=image.allGray();
    if(!gris){
        for (int i=0; i<image.width(); i++){
            for(int j=0; j<image.height(); j++){
                image.setPixel(i,j,this->pixel(i,height-j));
            }
        }
    }else{
        QRgb pixel;
        int red,green,blue;
        for (int i=0; i<image.width(); i++){
            for(int j=0; j<image.height(); j++){
                pixel=this->pixel(i,height-j);
                red=qRed(pixel);
                blue=qBlue(pixel);
                green=qGreen(pixel);
                image.setPixel(i,j,(red+green+blue)/3);
            }
        }
    }
    return image;
}

//retourne l'image inverse de this selon la verticale et l'horizontale
Image Image::miroir_vert_hor(){
    Image image=*this;
    int width=image.width();
    int height=image.height();
    bool gris=image.allGray();
    if(!gris){
        for (int i=0; i<image.width(); i++){
            for(int j=0; j<image.height(); j++){
                image.setPixel(i,j,this->pixel(width-i,height-j));
            }
        }
    }else{
        QRgb pixel;
        int red,green,blue;
        for (int i=0; i<image.width(); i++){
            for(int j=0; j<image.height(); j++){
                pixel=this->pixel(width-i,height-j);
                red=qRed(pixel);
                blue=qBlue(pixel);
                green=qGreen(pixel);
                image.setPixel(i,j,(red+green+blue)/3);
            }
        }
    }
    return image;
}

//retourne l'image retourné de this pour les angles 90°,180°,270°
Image Image::rotate(qreal p_angle) {
    Image image=*this;
    QMatrix matrix;
    matrix.rotate(p_angle);
    return image.transformed(matrix);
}

//retourne l'image retourné de this pour un angle donné
Image Image::rotate_x(int angle){
    Image image=*this;
    image.fill(qRgb(255, 255, 255));

    //matrice de transformation
    QMatrix matrix;

    //transformation de l'origine pour calculer la translation préalable à la rotation
    matrix.rotate(-angle);
    QPoint origine(image.width()/2,image.height()/2);
    QPoint originebis;
    originebis = matrix.map(origine);
    int w = originebis.x()-origine.x();
    int h = originebis.y()-origine.y();

    matrix.reset();
    matrix.translate(-w,-h);
    matrix.rotate(-angle);


    bool gris=this->allGray();
    int red,green,blue;
    QPoint p;
    QRgb pixel;
    for (int i=0; i<image.width(); i++){
            for(int j=0; j<image.height(); j++){
                p = matrix.map(QPoint(i,j));
                if (this->valid(p)){
                    if(gris){
                        pixel=this->pixel(p);
                        red=qRed(pixel);
                        blue=qBlue(pixel);
                        green=qGreen(pixel);
                        image.setPixel(i,j,(red+green+blue)/3);
                    }
                    else
                        image.setPixel(i,j,this->pixel(p));
                }
            }
    }
    return image;
}
