#ifndef MYNODE_H
#define MYNODE_H

#include <QObject>
#include <QVector>
#include <QRectF>

class myNode
{
public:

    myNode(QRectF* s, int i){
        self = s;
        id = i;
        visited = 0;
    }

    QVector<myNode*> adj;
    QRectF* self;
    int id;
    int visited;

};


#endif // MYNODE_H
