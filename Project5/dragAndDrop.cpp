#include "dragAndDrop.h"

dragAndDrop::dragAndDrop(QObject *parent) : QGraphicsScene(parent){}
dragAndDrop::dragAndDrop(qreal x, qreal y, qreal width, qreal hieght, QObject *parent) :
    QGraphicsScene(x,y,width,hieght,parent){}

void dragAndDrop::mouseMoveEvent (QGraphicsSceneMouseEvent * mouseEvent){
    //Get the position of the mouse (when clicked)
    //QPointF mousePosition=mouseEvent->scenePos();
    //Check if an item is under the mouse
    QGraphicsItem* mouseOver;//=this->itemAt(mousePosition, *(new QTransform()));
    mouseOver = itemAt(mouseEvent->scenePos(),*(new QTransform()));
    if(mouseOver && mouseOver->isSelected()){
        //If there is an item, move the center of the item to the mouse position
        //mouseOver->grabMouse();
        mouseOver->setPos(mouseEvent->scenePos());
        //mouseOver->ungrabMouse();
    }
}
