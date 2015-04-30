#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QEvent>
#include <QGraphicsRectItem>
#include <QGraphicsLineItem>
#include <QGraphicsEllipseItem>
#include <QPoint>
#include <QVector>
#include <QDebug>
#include "dragAndDrop.h"
#include <QApplication>
#include <QGraphicsPathItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "node.h"
#include <vector>
#include <queue>
#include <deque>



class BlockPoints{

public:
    QPointF* top_left;
    QPointF* top_right;
    QPointF* bottom_left;
    QPointF* bottom_right;
    BlockPoints(QPointF* t_l, QPointF* t_r, QPointF* b_l, QPointF* b_r){
        top_left = t_l;
        top_right = t_r;
        bottom_left = b_l;
        bottom_right = b_r;
    }

};


namespace Ui {
class MainWindow;
}

class compare
{
public:
    bool operator()(const QLineF* a, const QLineF* b){
    return a->x1() > b->x1();
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void generate_lines();
    void create_blocks();
    void AddLineToVector(BlockPoints* square_points, QPointF** end_points);
    typedef std::priority_queue<QLineF*,std::deque<QLineF*>, compare> list;
    list listqueue;
    QVector<QLineF*> findPath(std::vector<myNode*> nodes);

private slots:
    void on_path_clicked();

private:
    QVector<QLineF*> lines;
    QVector<QRectF*> nodes;
    Ui::MainWindow *ui;
    dragAndDrop *simScene;
    QVector<QGraphicsLineItem*> pathLines;
    QVector<QGraphicsRectItem*> cells;
    QGraphicsRectItem *block1, *block2, *block3;
    QGraphicsEllipseItem *startMarker, *goalMarker;
    QGraphicsLineItem* TopLeftLine1;
    QGraphicsLineItem* TopRightLine1;
    QGraphicsLineItem* BottomLeftLine1;
    QGraphicsLineItem* BottomRightLine1;
    QGraphicsLineItem* TopLeftLine2;
    QGraphicsLineItem* TopRightLine2;
    QGraphicsLineItem* BottomLeftLine2;
    QGraphicsLineItem* BottomRightLine2;
    QGraphicsLineItem* TopLeftLine3;
    QGraphicsLineItem* TopRightLine3;
    QGraphicsLineItem* BottomLeftLine3;
    QGraphicsLineItem* BottomRightLine3;
    BlockPoints** block_point;
    BlockPoints** block_points();
    QPointF** Block1_ends;
    QPointF** Block2_ends;
    QPointF** Block3_ends;
    //path* p;
    void paintPath(QVector<QPointF> vertices);

};




#endif // MAINWINDOW_H
