#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

int flag = 0;



BlockPoints** MainWindow::block_points(){
    BlockPoints** temp_array = (BlockPoints**)malloc(3*sizeof(BlockPoints*));

    QPointF* TopLeft1 = new QPointF(block1->scenePos().x() - 100, block1->scenePos().y()-100);
    QPointF* TopRight1 = new QPointF(block1->scenePos().x() + 100, block1->scenePos().y()-100);
    QPointF* BottomLeft1 = new QPointF(block1->scenePos().x()-100, block1->scenePos().y()+100);
    QPointF* BottomRight1 = new QPointF(block1->scenePos().x()+100, block1->scenePos().y()+100);

    QPointF* TopLeft2 = new QPointF(block2->scenePos().x() - 75, block2->scenePos().y()-75);
    QPointF* TopRight2 = new QPointF(block2->scenePos().x() + 75, block2->scenePos().y()-75);
    QPointF* BottomLeft2 = new QPointF(block2->scenePos().x()-75, block2->scenePos().y()+75);
    QPointF* BottomRight2 = new QPointF(block2->scenePos().x()+75, block2->scenePos().y()+75);

    QPointF* TopLeft3 = new QPointF(block3->scenePos().x() - 50, block3->scenePos().y()-50);
    QPointF* TopRight3 = new QPointF(block3->scenePos().x() + 50, block3->scenePos().y()-50);
    QPointF* BottomLeft3 = new QPointF(block3->scenePos().x()-50, block3->scenePos().y()+50);
    QPointF* BottomRight3 = new QPointF(block3->scenePos().x()+50, block3->scenePos().y()+50);

    *temp_array = new BlockPoints(TopLeft1,TopRight1,BottomLeft1,BottomRight1);
    *(temp_array + 1) = new  BlockPoints(TopLeft2,TopRight2,BottomLeft2,BottomRight2);
    *(temp_array + 2) = new  BlockPoints(TopLeft3,TopRight3,BottomLeft3,BottomRight3);

    return temp_array;
}

void MainWindow::AddLineToVector(BlockPoints* square_points, QPointF** end_points){
   QLineF* TopLeft = new QLineF(square_points->top_left->x(),square_points->top_left->y(),end_points[1]->x(), end_points[1]->y());
   QLineF* TopRight = new QLineF(square_points->top_right->x(), square_points->top_right->y(), end_points[0]->x(),end_points[0]->y());
   QLineF* BottomLeft = new QLineF(end_points[3]->x(), end_points[3]->y(),square_points->bottom_left->x(), square_points->bottom_left->y());
   QLineF* BottomRight = new QLineF( end_points[2]->x(), end_points[2]->y(),square_points->bottom_right->x(), square_points->bottom_left->y());
   QLineF* Left = new QLineF(end_points[3]->x(), end_points[3]->y(),end_points[1]->x(), end_points[1]->y());
   QLineF* Right = new QLineF(end_points[2]->x(), end_points[2]->y(),end_points[0]->x(), end_points[0]->y());
    lines.append(TopLeft);
    lines.append(TopRight);
    lines.append(BottomLeft);
    lines.append(BottomRight);
    lines.append(Left);
    lines.append(Right);
}

QPointF** block_line_limits(BlockPoints* first_block, BlockPoints* second_block, BlockPoints* third_block){

    QPointF** end_points= (QPointF**) malloc(4*sizeof(QPointF*));
    QPointF* topright_end = NULL;
    QPointF* topleft_end = NULL;
    QPointF* bottomright_end = NULL;
    QPointF* bottomleft_end = NULL;
    //top_right
    if(second_block->bottom_left->x() < first_block->top_right->x()  && first_block->top_right->x() < second_block->bottom_right->x() && second_block->bottom_right->y() < first_block->top_right->y()){
       topright_end = new QPointF(first_block->top_right->x(), second_block->bottom_left->y());
    }
    else if(third_block->bottom_left->x() < first_block->top_right->x()  && first_block->top_right->x() < third_block->bottom_right->x() && third_block->bottom_right->y() < first_block->top_right->y()){
        topright_end = new QPointF(first_block->top_right->x(), third_block->bottom_left->y());
    }
    else{
        topright_end = new QPointF(first_block->top_right->x(), 0);
    }
      //top_left
    if(second_block->bottom_left->x() < first_block->top_left->x()  && first_block->top_left->x() < second_block->bottom_right->x() && second_block->bottom_right->y() < first_block->top_left->y()){
       topleft_end = new QPointF(first_block->top_left->x(), second_block->bottom_left->y());
    }
    else if(third_block->bottom_left->x() < first_block->top_left->x()  && first_block->top_left->x() < third_block->bottom_right->x() && third_block->bottom_right->y() < first_block->top_left->y()){
        topleft_end = new QPointF(first_block->top_left->x(), third_block->bottom_left->y());
    }
    else{
        topleft_end = new QPointF(first_block->top_left->x(), 0);
    }
   //bottom_right
    if(second_block->top_left->x() < first_block->bottom_right->x()  && first_block->bottom_right->x() < second_block->top_right->x() && second_block->top_right->y() > first_block->bottom_right->y()){
       bottomright_end = new QPointF(first_block->bottom_right->x(), second_block->top_left->y());
    }
    else if(third_block->top_left->x() < first_block->bottom_right->x()  && first_block->bottom_right->x() < third_block->top_right->x() && third_block->top_right->y() > first_block->bottom_right->y()){
       bottomright_end = new QPointF(first_block->bottom_right->x(), third_block->top_left->y());
    }
    else{
        bottomright_end = new QPointF(first_block->bottom_right->x(), 500);
    }

    //bottom_left
    if(second_block->top_left->x() < first_block->bottom_left->x()  && first_block->bottom_left->x() < second_block->top_right->x() && second_block->top_right->y() > first_block->bottom_left->y()){
       bottomleft_end = new QPointF(first_block->bottom_left->x(), second_block->top_left->y());
    }
    else if(third_block->top_left->x() < first_block->bottom_left->x()  && first_block->bottom_left->x() < third_block->top_right->x() && third_block->top_right->y() > first_block->bottom_left->y()){
       bottomleft_end = new QPointF(first_block->bottom_left->x(), third_block->top_left->y());
    }
    else{
        bottomleft_end = new QPointF(first_block->bottom_left->x(), 500);
    }

    *end_points = topright_end;
    *(end_points + 1) = topleft_end;
    *(end_points + 2) = bottomright_end;
    *(end_points + 3) = bottomleft_end;

    return end_points;
}


void MainWindow::generate_lines(){
    Block1_ends =  block_line_limits(block_point[0],block_point[1], block_point[2]);
    Block2_ends =  block_line_limits(block_point[1],block_point[0], block_point[2]);
    Block3_ends =  block_line_limits(block_point[2],block_point[1], block_point[0]);
    AddLineToVector(block_point[0], Block1_ends);
    AddLineToVector(block_point[1], Block2_ends);
    AddLineToVector(block_point[2], Block3_ends);
    if(flag == 0) {
       TopLeftLine1 = new QGraphicsLineItem(block_point[0][0].top_left->x(),block_point[0][0].top_left->y(), Block1_ends[1]->x(), Block1_ends[1]->y());
       TopRightLine1 = new QGraphicsLineItem(block_point[0][0].top_right->x(),block_point[0][0].top_right->y(),Block1_ends[0]->x(),Block1_ends[0]->y());
       BottomLeftLine1 = new QGraphicsLineItem(Block1_ends[3]->x(), Block1_ends[3]->y(),block_point[0][0].bottom_left->x(),block_point[0][0].bottom_left->y());
       BottomRightLine1 = new QGraphicsLineItem(Block1_ends[2]->x(),Block1_ends[2]->y(),block_point[0][0].bottom_right->x(),block_point[0][0].bottom_right->y());

       TopLeftLine2 = new QGraphicsLineItem(block_point[1][0].top_left->x(),block_point[1][0].top_left->y(), Block2_ends[1]->x(), Block2_ends[1]->y());
       TopRightLine2 = new QGraphicsLineItem(block_point[1][0].top_right->x(),block_point[1][0].top_right->y(),Block2_ends[0]->x(),Block2_ends[0]->y());
       BottomLeftLine2 = new QGraphicsLineItem(Block2_ends[3]->x(), Block2_ends[3]->y(), block_point[1][0].bottom_left->x(),block_point[1][0].bottom_left->y());
       BottomRightLine2 = new QGraphicsLineItem( Block2_ends[2]->x(),Block2_ends[2]->y(), block_point[1][0].bottom_right->x(),block_point[1][0].bottom_right->y());

       TopLeftLine3 = new QGraphicsLineItem(block_point[2][0].top_left->x(),block_point[2][0].top_left->y(), Block3_ends[1]->x(), Block3_ends[1]->y());
       TopRightLine3 = new QGraphicsLineItem(block_point[2][0].top_right->x(),block_point[2][0].top_right->y(), Block3_ends[0]->x(),Block3_ends[0]->y());
       BottomLeftLine3 = new QGraphicsLineItem( Block3_ends[3]->x(), Block3_ends[3]->y(),block_point[2][0].bottom_left->x(),block_point[2][0].bottom_left->y());
       BottomRightLine3 = new QGraphicsLineItem(Block3_ends[2]->x(),Block3_ends[2]->y(),block_point[2][0].bottom_right->x(),block_point[2][0].bottom_right->y());
       /*ui->simView->scene()->addItem(TopLeftLine1);
       ui->simView->scene()->addItem(TopRightLine1);
       ui->simView->scene()->addItem(BottomLeftLine1);
       ui->simView->scene()->addItem(BottomRightLine1);
       ui->simView->scene()->addItem(TopLeftLine2);
       ui->simView->scene()->addItem(TopRightLine2);
       ui->simView->scene()->addItem(BottomLeftLine2);
       ui->simView->scene()->addItem(BottomRightLine2);
       ui->simView->scene()->addItem(TopLeftLine3);
       ui->simView->scene()->addItem(TopRightLine3);
       ui->simView->scene()->addItem(BottomLeftLine3);
       ui->simView->scene()->addItem(BottomRightLine3);*/
       flag = 1;
    }
    else{
         ui->simView->scene()->removeItem(TopLeftLine1);
         ui->simView->scene()->removeItem(TopRightLine1);
         ui->simView->scene()->removeItem(BottomLeftLine1);
         ui->simView->scene()->removeItem(BottomRightLine1);
         ui->simView->scene()->removeItem(TopLeftLine2);
         ui->simView->scene()->removeItem(TopRightLine2);
         ui->simView->scene()->removeItem(BottomLeftLine2);
         ui->simView->scene()->removeItem(BottomRightLine2);
         ui->simView->scene()->removeItem(TopLeftLine3);
         ui->simView->scene()->removeItem(TopRightLine3);
         ui->simView->scene()->removeItem(BottomLeftLine3);
         ui->simView->scene()->removeItem(BottomRightLine3);
         TopLeftLine1 = new QGraphicsLineItem(block_point[0][0].top_left->x(),block_point[0][0].top_left->y(), Block1_ends[1]->x(), Block1_ends[1]->y());
         TopRightLine1 = new QGraphicsLineItem(block_point[0][0].top_right->x(),block_point[0][0].top_right->y(),Block1_ends[0]->x(),Block1_ends[0]->y());
         BottomLeftLine1 = new QGraphicsLineItem(block_point[0][0].bottom_left->x(),block_point[0][0].bottom_left->y(),Block1_ends[3]->x(), Block1_ends[3]->y());
         BottomRightLine1 = new QGraphicsLineItem(block_point[0][0].bottom_right->x(),block_point[0][0].bottom_right->y(), Block1_ends[2]->x(),Block1_ends[2]->y());
         TopLeftLine2 = new QGraphicsLineItem(block_point[1][0].top_left->x(),block_point[1][0].top_left->y(), Block2_ends[1]->x(), Block2_ends[1]->y());
         TopRightLine2 = new QGraphicsLineItem(block_point[1][0].top_right->x(),block_point[1][0].top_right->y(),Block2_ends[0]->x(),Block2_ends[0]->y());
         BottomLeftLine2 = new QGraphicsLineItem(block_point[1][0].bottom_left->x(),block_point[1][0].bottom_left->y(),Block2_ends[3]->x(), Block2_ends[3]->y());
         BottomRightLine2 = new QGraphicsLineItem(block_point[1][0].bottom_right->x(),block_point[1][0].bottom_right->y(), Block2_ends[2]->x(),Block2_ends[2]->y());
         TopLeftLine3 = new QGraphicsLineItem(block_point[2][0].top_left->x(),block_point[2][0].top_left->y(), Block3_ends[1]->x(), Block3_ends[1]->y());
         TopRightLine3 = new QGraphicsLineItem(block_point[2][0].top_right->x(),block_point[2][0].top_right->y(), Block3_ends[0]->x(),Block3_ends[0]->y());
         BottomLeftLine3 = new QGraphicsLineItem(block_point[2][0].bottom_left->x(),block_point[2][0].bottom_left->y(), Block3_ends[3]->x(), Block3_ends[3]->y());
         BottomRightLine3 = new QGraphicsLineItem(block_point[2][0].bottom_right->x(),block_point[2][0].bottom_right->y(),Block3_ends[2]->x(),Block3_ends[2]->y());
         /*ui->simView->scene()->addItem(TopLeftLine1);
         ui->simView->scene()->addItem(TopRightLine1);
         ui->simView->scene()->addItem(BottomLeftLine1);
         ui->simView->scene()->addItem(BottomRightLine1);
         ui->simView->scene()->addItem(TopLeftLine2);
         ui->simView->scene()->addItem(TopRightLine2);
         ui->simView->scene()->addItem(BottomLeftLine2);
         ui->simView->scene()->addItem(BottomRightLine2);
         ui->simView->scene()->addItem(TopLeftLine3);
         ui->simView->scene()->addItem(TopRightLine3);
         ui->simView->scene()->addItem(BottomLeftLine3);
         ui->simView->scene()->addItem(BottomRightLine3);*/
    }

}

void print_adj(std::vector<myNode*> graph){
    std::cout<<"func"<<std::endl;
   for(int i = 0; i < graph.size(); i++){
       for(int j = 0; j < graph[i]->adj.size(); j++){
           //for(int k = 0; k < graph[i]->adj.at(j).size(); k++){
                std::cout<<"Element: "<<graph[i]->id<<"x: " << graph[i]->self->center().x() << " y: " << graph[i]->self->center().y()
                        <<", Adj x: "<<graph[i]->adj[j]->self->center().x()<<"y "<<graph[i]->adj[j]->self->center().y() <<std::endl;
       }

   }
}



std::vector<myNode*> findAdj(QVector<QRectF*> r){

    std::vector<myNode*> graph;
    //std::vector<myNode*> temp;

    //r.at(0)->center.x();
    for(int i = 0; i < r.size(); i++){
        myNode* n = new myNode(r.at(i),i);
        graph.push_back(n);
    }

    for(int i = 0; i < graph.size(); i++){
        //myNode* n = new myNode(r.at(i), i);
        int xBorderLeft = r.at(i)->left();
        int xBorderRight = r.at(i)->right();
        int yBorderTop = r.at(i)->top();
        int yBorderBottom = r.at(i)->bottom();

        for(int j = 0; j < graph.size(); j++){
            if(i != j){
                int xBorderLeft1 = r.at(j)->left();
                int xBorderRight1 = r.at(j)->right();
                int yBorderTop1 = r.at(j)->top();
                int yBorderBottom1 = r.at(j)->bottom();

                if((xBorderLeft == xBorderRight1 || xBorderRight == xBorderLeft1) && (yBorderTop <= yBorderBottom1 || yBorderBottom >= yBorderTop1)){
                    std::cout<<"here"<<std::endl;
                    //myNode* m = new myNode(r.at(j), j);
                    graph[i]->adj.append(graph[j]);
                }
            }
        }
        //graph.push_back(n);
    }

    /*for(int i = 0; i < graph.size(); i++){
        for(int j = 0; j < graph[i]->adj.size(); j++){
            for(int k = 0; k < graph.size(); k++){
                if(graph[i]->adj.at(j)->id == graph[k]->id)
                    graph[i]->adj.replace(j, graph[k]);
            }
        }
    }*/
    print_adj(graph);
    return graph;
}

bool searchNodes(myNode* n, myNode* end, std::vector<int>* ids){

    bool found = false;
    //n->visited = 1;
    std::cout<<"Checking node " << n->id << ", Visited = " << n->visited << std::endl;
    for(int i = 0; i < n->adj.size(); i++){
        std::cout<<"Node id: " << n->id << " adj id: " << n->adj.at(i)->id << std::endl;
        if(n->adj.at(i)->id == end->id){
            std::cout<<"Found the end \n";
            found = true;
            break;
        }
        else if(!found){
            std::cout<<"Calling recursively \n";
            n->visited = 1;
            if(n->adj.at(i)->visited == 0)
                found = searchNodes(n->adj.at(i), end, ids);
        }
    }

    if(found){
        ids->push_back(n->id);
        return true;
    }
    else{
        //ids->clear();
        return false;
    }
}

QVector<QLineF*> MainWindow::findPath(std::vector<myNode*> nodes){

    QVector<QLineF*> line;
    int start = -1;
    int end = -1;
    std::vector<int> ids;

    for(int i = 0; i < nodes.size(); i++){
        if(nodes[i]->self->contains(startMarker->x(), startMarker->y())){
            start = i;
            std::cout<<"Start marker's id: " << start << std::endl;
        }
        if(nodes[i]->self->contains(goalMarker->x(), goalMarker->y())){
            end = i;
            std::cout<<"End marker's id: " << end << std::endl;
        }
    }

    //QLineF startLine(startMarker->x(), startMarker->y(), nodes[start].self->center().x(), nodes[start].self->center().y());
    ids.push_back(end);
    searchNodes(nodes[start], nodes[end], &ids);
    std::cout<<"Path: \n";

    for(int i= 0; i < ids.size(); i++){
        std::cout<<ids[i]<<std::endl;
    }
    QGraphicsLineItem* t1 = new QGraphicsLineItem(startMarker->x(),startMarker->y(), nodes.at(ids[ids.size()-1])->self->center().x(),nodes.at(ids[ids.size()-1])->self->center().y());
    simScene->addItem(t1);
    for(int i = 0; i < ids.size()-1; i++){
        QLineF* l = new QLineF(nodes.at(ids[i])->self->center(), nodes.at(ids[i+1])->self->center());
        QGraphicsLineItem* t = new QGraphicsLineItem(nodes.at(ids[i])->self->center().x(),nodes.at(ids[i])->self->center().y(), nodes.at(ids[i+1])->self->center().x(),nodes.at(ids[i+1])->self->center().y());
        simScene->addItem(t);
    }
    QGraphicsLineItem* t2 = new QGraphicsLineItem(goalMarker->x(),goalMarker->y(), nodes.at(ids[0])->self->center().x(),nodes.at(ids[0])->self->center().y());
    simScene->addItem(t2);

    //make lines from each id
    return line;
}

void MainWindow::create_blocks(){

    nodes.clear();
    //std::cout<<" point 1: "<<lines.at(0)->p1().x()<<"Point 2: "<<lines.at(0)->p1().y()<<std::endl;
    QLineF* l1 = new QLineF(0,500,0,0);
    QLineF* l2 = new QLineF(500,500,500,0);
    lines.append(l1);
    lines.append(l2);

    ui->simView->scene()->removeItem(block1);
    ui->simView->scene()->removeItem(block2);
    ui->simView->scene()->removeItem(block3);
    for(int i=0;i<lines.size();i++){
        listqueue.push(lines.at(i));
    }
    QVector<QLineF*> l;
    //lines.at(0)->
    for(int i = 0; i < lines.size(); i++){
        l.append(listqueue.top());
        listqueue.pop();
        std::cout<<"Line " << i << ":" << l.at(i)->x1()<<" " << l.at(i)->y1()<< " " <<l.at(i)->x2() << " " << l.at(i)->y2()<<std::endl;
        std::cout<<"Length: " << l.at(i)->length()<<std::endl;
    }


    int f = 0;

    QVector<QLineF*> check;
    for(int j = 0; j < l.size()-1; j++){
        for(int k = j+1; k < l.size(); k++){
            if(l.at(j)->length() == l.at(k)->length()){
                //QSizeF f(l.at(j)->length(), l.at(k)->x1() - l.at(j)->x1());
                QRectF* r;
                if(f == 0){
                    r = new QRectF(l.at(j)->p2(), l.at(k)->p1());
                    nodes.append(r);
                    f = 1;
                    check.append(l.at(j));
                    check.append(l.at(k));
                }
                else if(f == 1){
                    for(int u = 0; u < check.size(); ++u){
                        if (l.at(j) ==  check.at(u) || l.at(k) == check.at(u)){

                            goto exit_loop;
                        }
                    }
                    std::cout<<"I'm Here"<<std::endl;
                    r = new QRectF(l.at(j)->p2(), l.at(k)->p1());
                    nodes.append(r);
                    check.append(l.at(j));
                    check.append(l.at(k));
                    /*
                    if(k_used1 != j){
                        std::cout<<"I'm Here"<<std::endl;
                        r = new QRectF(l.at(j)->p2(), l.at(k)->p1());
                        k_used1 = k;
                        k_used2 = k_used1;
                        k_used3 = k_used2;
                        nodes.append(r);
                    }
                    */
                    //continue;
                }
                exit_loop:
                //QRectF* r = new QRectF(l.at(j)->p1(), f );
                std::cout << "Creating a QRectF at point " << l.at(k)->p1().x() << "," << l.at(k)->p1().y() <<
                             " With a width of " << l.at(k)->p2().x() << ", height of "/*r->height() */<< std::endl;
                break;
            }
        }
    }

    //findAdj(nodes);
    //std::vector<myNode*> visited;
    findPath(findAdj(nodes));

    for(int i = 0; i < nodes.size(); i++){
        std::cout<<"right "<<nodes.at(i)->right()<<"left" << nodes.at(i)->left()<<std::endl;
        QGraphicsRectItem* item = new QGraphicsRectItem(*(nodes.at(i)),NULL);
        std::cout<<"Node center- " << i << " x:" << item->boundingRect().center().x()  << " y " << item->boundingRect().center().y() << std::endl;
        QGraphicsEllipseItem* item2 = new QGraphicsEllipseItem(item->boundingRect().center().x(),item->boundingRect().center().y(), 5, 5);

        simScene->addItem(item);
        simScene->addItem(item2);
    }


    //lines.clear();

    //findPath(findAdj(nodes));

}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    simScene=new dragAndDrop(0,0,500,500,this);
    ui->simView->setScene(simScene);
    block1=new QGraphicsRectItem(-100,-100,200,200);
    block2=new QGraphicsRectItem(-75,-75,150,150);
    block3=new QGraphicsRectItem(-50,-50,100,100);
    startMarker=new QGraphicsEllipseItem(-10,-10,20,20);
    goalMarker=new QGraphicsEllipseItem(-10,-10,20,20);
    block1->setFlag(QGraphicsItem::ItemIsMovable, true);
    block1->setFlag(QGraphicsItem::ItemIsSelectable, true);
    block2->setFlag(QGraphicsItem::ItemIsMovable, true);
    block2->setFlag(QGraphicsItem::ItemIsSelectable, true);
    block3->setFlag(QGraphicsItem::ItemIsMovable, true);
    block3->setFlag(QGraphicsItem::ItemIsSelectable, true);
    startMarker->setFlag(QGraphicsItem::ItemIsMovable, true);
    startMarker->setFlag(QGraphicsItem::ItemIsSelectable, true);
    goalMarker->setFlag(QGraphicsItem::ItemIsMovable, true);
    goalMarker->setFlag(QGraphicsItem::ItemIsSelectable, true);
    startMarker->setPen(QPen(QColor(Qt::blue)));
    goalMarker->setPen(QPen(QColor(Qt::red)));
    //Add each block, start, and goal to scene
    simScene->addItem(block1);
    simScene->addItem(block2);
    simScene->addItem(block3);
    simScene->addItem(startMarker);
    simScene->addItem(goalMarker);
    //connect(ui->path, SIGNAL(clicked()), this,SLOT(on_path_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintPath(QVector<QPointF> vertices){

}

void MainWindow::on_path_clicked()
{
   // QLineF* left_end = new QLineF(0,0,0,500);
    //QLineF* righ_end = new QLineF(500,0,500,500);
    block_point = block_points();
    generate_lines();
    create_blocks();
    //path* p = new path(&rect1, block1, block2,block3, startMarker, goalMarker);
}
