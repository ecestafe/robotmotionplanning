#include "blocks.h"

void blocks::initialize(){
    block1 = QRectF(0,0, 200, 200);
    block2 = QRectF(200,0,150,150);
    block3 = QRectF(350,0,100,100);
    point1 = QRectF(100,300,10,10);
    point2 = QRectF(400,300,10,10);
}

QRectF blocks::boundingRect() const{
      return QRectF(0,0,500,500);
}

blocks::blocks(){


}

blocks::~blocks()
{
    ;
}
