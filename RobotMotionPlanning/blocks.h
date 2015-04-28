#ifndef BLOCKS_H
#define BLOCKS_H

#include <QGraphicsItem>
#include <QPainter>

class blocks : public QGraphicsItem{
public:
   QRectF block1;
   QRectF block2;
   QRectF block3;
   QRectF point1;
   QRectF point2;

    blocks();
    ~blocks();

   void initialize();
   QRectF boundingRect() const;

};

#endif // BLOCKS

