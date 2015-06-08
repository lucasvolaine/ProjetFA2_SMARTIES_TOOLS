#ifndef IMAGE_H
#define IMAGE_H

#include <QImage>

class Image : public QImage
{
public:
    Image();
    Image(QString &);
    Image(const QImage &);
    Image reSizeOrigin(int);
    Image setLuminosite(int);
    Image operator +(Image);
    Image operator -(Image);
    Image operator *(Image);
    Image operator /(Image);
    Image operator &(Image);
    Image operator |(Image);
    Image maximum (Image);
    Image minimum (Image);
    Image miroir_vert();
    Image miroir_hor();
    Image miroir_vert_hor();
    Image rotate(qreal);
    Image rotate_x(int);


};

#endif // IMAGE_H
