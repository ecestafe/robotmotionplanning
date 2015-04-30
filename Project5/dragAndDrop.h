#ifndef DRAGANDDROP_H
#define DRAGANDDROP_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <QDebug>
class dragAndDrop : public QGraphicsScene
{
    Q_OBJECT

public:
    explicit dragAndDrop(QObject *parent = 0);
    explicit dragAndDrop(qreal x, qreal y, qreal width, qreal hieght, QObject *parent = 0);

protected:
    void mouseMoveEvent ( QGraphicsSceneMouseEvent * mouseEvent );
};

#endif // DRAGANDDROP_H
