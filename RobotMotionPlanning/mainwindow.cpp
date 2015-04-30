#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <iostream>

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    scene.setSceneRect(0,0,500,500);
    ui->graphicsView->setScene(&scene);
    ui->graphicsView->setSceneRect(0,0,500,500);
    ui->graphicsView->show();


    mainblocks->initialize();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);

}

void MainWindow::drawpath(qreal x, qreal y){

    QPen pen = QPen(Qt::black);

    qreal shortestdist = 500;
    qreal iter=0;
    for(int i=0; i<xstore.size(); ++i){
        qreal current = xstore[i];
        if(current != x){
            qreal comp = abs(x-current);
            if(comp < shortestdist){
                shortestdist=comp;
                iter=i;
            }
        }
    }
    QLineF templine = QLineF(x,y,xstore[iter],ystore[iter]);
    QPointF compare = templine.pointAt(.5);
    QRectF comparerect = QRectF(compare,QSizeF(2,2));
    //if(!mainblocks->block1.contains(comparerect) && !mainblocks->block2.contains(comparerect) && !mainblocks->block3.contains(comparerect)){
        scene.addLine(templine,pen);
        xstore.removeAt(iter);
        ystore.removeAt(iter);
    //}
}

MainWindow::~MainWindow()
{
    delete ui;
}

//================Block 1 Controls================//
void MainWindow::on_pushButton_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block1.translate(-10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_2_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block1.translate(10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_3_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block1.translate(0,10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_4_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block1.translate(0,-10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

//================Block 2 Controls================//

void MainWindow::on_pushButton_9_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block2.translate(-10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_10_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block2.translate(10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_11_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block2.translate(0,10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_12_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block2.translate(0,-10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

//================Block 3 Controls================//

void MainWindow::on_pushButton_17_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block3.translate(-10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_18_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block3.translate(10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_19_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block3.translate(0,10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_20_clicked()
{

    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->block3.translate(0,-10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

//================Point 1 Controls================//
void MainWindow::on_pushButton_33_clicked()
{
    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->point1.translate(-10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_34_clicked()
{
    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->point1.translate(10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_35_clicked()
{
    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->point1.translate(0,10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_36_clicked()
{
    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->point1.translate(0,-10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

//================Point 2 Controls================//

void MainWindow::on_pushButton_41_clicked()
{
    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->point2.translate(-10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_42_clicked()
{
    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->point2.translate(10,0);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_43_clicked()
{
    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->point2.translate(0,10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_44_clicked()
{
    QBrush brush = QBrush(Qt::NoBrush);
    QPen pen = QPen(Qt::black);

    mainblocks->point2.translate(0,-10);
    scene.clear();
    scene.addRect(mainblocks->block1, pen,brush);
    scene.addRect(mainblocks->block2, pen,brush);
    scene.addRect(mainblocks->block3, pen,brush);
    scene.addEllipse(mainblocks->point1,pen,brush);
    scene.addEllipse(mainblocks->point2,pen,brush);
    ui->graphicsView->setScene(&scene);
}

void MainWindow::on_pushButton_25_clicked()
{
   QBrush brush = QBrush(Qt::SolidLine);
   QPen pen = QPen(Qt::black);
   xstore.push_back(mainblocks->point1.x());
   ystore.push_back(mainblocks->point1.y());
   xstore.push_back(mainblocks->point2.x());
   ystore.push_back(mainblocks->point2.y());

   //==============Block 1 Grid==============//
   QLineF b1TLS;
   QLineF b1TRS;
   QLineF b1BLS;
   QLineF b1BRS;

   b1TLS.setP1(mainblocks->block1.topLeft());
   b1TRS.setP1(mainblocks->block1.topRight());
   b1BLS.setP1(mainblocks->block1.bottomLeft());
   b1BRS.setP1(mainblocks->block1.bottomRight());

   QPointF b1TLE = b1TLS.p1();
   QPointF b1TRE = b1TRS.p1();
   QPointF b1BLE = b1BLS.p1();
   QPointF b1BRE = b1BRS.p1();

   while(true){
        if(mainblocks->block2.contains(b1TLE) || mainblocks->block3.contains(b1TLE)){
            if(mainblocks->block2.contains(b1TLE)){
                qreal tempx = (mainblocks->block2.bottomRight().rx()-mainblocks->block1.topLeft().rx())/2;
                qreal tempy = (b1TLE.ry()-b1TLS.p1().ry())/2;
                scene.addEllipse((mainblocks->block1.topLeft().rx()+tempx),(mainblocks->block1.topRight().ry()+tempy),5,5,pen,brush);
                xstore.push_back((mainblocks->block1.topLeft().rx()+tempx));
                ystore.push_back((mainblocks->block1.topRight().ry()+tempy));
            }
            if(mainblocks->block3.contains(b1TLE)){
                qreal tempx = (mainblocks->block3.bottomRight().rx()-mainblocks->block1.topLeft().rx())/2;
                qreal tempy = (b1TLE.ry()-b1TLS.p1().ry())/2;
                scene.addEllipse((mainblocks->block1.topLeft().rx()+tempx),(mainblocks->block1.topRight().ry()+tempy),5,5,pen,brush);
                xstore.push_back((mainblocks->block1.topLeft().rx()+tempx));
                ystore.push_back((mainblocks->block1.topRight().ry()+tempy));
            }
            break;
        }
        if(b1TLE.ry() == 0){
            break;
        }
        b1TLE.setY(b1TLE.ry()-10);
    }
    b1TLS.setP2(b1TLE);

    while(true){
         if(mainblocks->block2.contains(b1TRE) || mainblocks->block3.contains(b1TRE)){
             if(mainblocks->block2.contains(b1TRE)){
                 qreal tempx = (mainblocks->block1.topRight().rx()-mainblocks->block2.bottomLeft().rx())/2;
                 qreal tempy = (b1TRE.ry()-b1TLS.p1().ry())/2;
                 scene.addEllipse((mainblocks->block2.bottomLeft().rx()+tempx),(mainblocks->block1.topRight().ry()+tempy),5,5,pen,brush);
                 xstore.push_back((mainblocks->block2.bottomLeft().rx()+tempx));
                 ystore.push_back((mainblocks->block1.topRight().ry()+tempy));
             }
             if(mainblocks->block3.contains(b1TRE)){
                 qreal tempx = (mainblocks->block1.topRight().rx()-mainblocks->block3.bottomLeft().rx())/2;
                 qreal tempy = (b1TRE.ry()-b1TLS.p1().ry())/2;
                 scene.addEllipse((mainblocks->block3.bottomLeft().rx()+tempx),(mainblocks->block1.topRight().ry()+tempy),5,5,pen,brush);
                 xstore.push_back((mainblocks->block3.bottomLeft().rx()+tempx));
                 ystore.push_back((mainblocks->block1.topRight().ry()+tempy));
             }
             break;
         }
         if(b1TRE.ry() == 0){
             break;
         }
         b1TRE.setY(b1TRE.ry()-10);
    }
    b1TRS.setP2(b1TRE);

    while(true){
         if(mainblocks->block2.contains(b1BLE) || mainblocks->block3.contains(b1BLE)){
             break;
         }
         if(b1BLE.ry() == 500){
             break;
         }
         b1BLE.setY(b1BLE.ry()+10);
     }
     b1BLS.setP2(b1BLE);

     while(true){
          if(mainblocks->block2.contains(b1BRE) || mainblocks->block3.contains(b1BRE)){
              break;
          }
          if(b1BRE.ry() == 500){
              break;
          }
          b1BRE.setY(b1BRE.ry()+10);
     }
     b1BRS.setP2(b1BRE);


    scene.addLine(b1TLS);
    scene.addLine(b1TRS);
    scene.addLine(b1BLS);
    scene.addLine(b1BRS);
    //==============Block 2 Grid==============//
    QLineF b2TLS;
    QLineF b2TRS;
    QLineF b2BLS;
    QLineF b2BRS;

    b2TLS.setP1(mainblocks->block2.topLeft());
    b2TRS.setP1(mainblocks->block2.topRight());
    b2BLS.setP1(mainblocks->block2.bottomLeft());
    b2BRS.setP1(mainblocks->block2.bottomRight());

    QPointF b2TLE = b2TLS.p1();
    QPointF b2TRE = b2TRS.p1();
    QPointF b2BLE = b2BLS.p1();
    QPointF b2BRE = b2BRS.p1();

    while(true){
         if(mainblocks->block1.contains(b2TLE) || mainblocks->block3.contains(b2TLE)){
             if(mainblocks->block1.contains(b2TLE)){
                 qreal tempx = (mainblocks->block1.bottomRight().rx()-mainblocks->block2.topLeft().rx())/2;
                 qreal tempy = (b2TLE.ry()-b2TLS.p1().ry())/2;
                 scene.addEllipse((mainblocks->block2.topLeft().rx()+tempx),(mainblocks->block2.topRight().ry()+tempy),5,5,pen,brush);
                 xstore.push_back((mainblocks->block2.topLeft().rx()+tempx));
                 ystore.push_back((mainblocks->block2.topRight().ry()+tempy));
             }
             if(mainblocks->block3.contains(b2TLE)){
                 qreal tempx = (mainblocks->block3.bottomRight().rx()-mainblocks->block2.topLeft().rx())/2;
                 qreal tempy = (b2TLE.ry()-b2TLS.p1().ry())/2;
                 scene.addEllipse((mainblocks->block2.topLeft().rx()+tempx),(mainblocks->block2.topRight().ry()+tempy),5,5,pen,brush);
                 xstore.push_back((mainblocks->block2.topLeft().rx()+tempx));
                 ystore.push_back((mainblocks->block2.topRight().ry()+tempy));
             }
             break;
         }
         if(b2TLE.ry() == 0){
             break;
         }
         b2TLE.setY(b2TLE.ry()-10);
     }
     b2TLS.setP2(b2TLE);

     while(true){
          if(mainblocks->block1.contains(b2TRE) || mainblocks->block3.contains(b2TRE)){
              if(mainblocks->block1.contains(b2TRE)){
                  qreal tempx = (mainblocks->block2.topRight().rx()-mainblocks->block1.bottomLeft().rx())/2;
                  qreal tempy = (b2TRE.ry()-b2TLS.p1().ry())/2;
                  scene.addEllipse((mainblocks->block1.bottomLeft().rx()+tempx),(mainblocks->block2.topRight().ry()+tempy),5,5,pen,brush);
                  xstore.push_back((mainblocks->block1.bottomLeft().rx()+tempx));
                  ystore.push_back((mainblocks->block2.topRight().ry()+tempy));
              }
              if(mainblocks->block3.contains(b2TRE)){
                  qreal tempx = (mainblocks->block2.topRight().rx()-mainblocks->block3.bottomLeft().rx())/2;
                  qreal tempy = (b2TRE.ry()-b2TLS.p1().ry())/2;
                  scene.addEllipse((mainblocks->block3.bottomLeft().rx()+tempx),(mainblocks->block2.topRight().ry()+tempy),5,5,pen,brush);
                  xstore.push_back((mainblocks->block3.bottomLeft().rx()+tempx));
                  ystore.push_back((mainblocks->block2.topRight().ry()+tempy));
              }
              break;
          }
          if(b2TRE.ry() == 0){
              break;
          }
          b2TRE.setY(b2TRE.ry()-10);
     }
     b2TRS.setP2(b2TRE);

     while(true){
          if(mainblocks->block1.contains(b2BLE) || mainblocks->block3.contains(b2BLE)){
              break;
          }
          if(b2BLE.ry() == 500){
              break;
          }
          b2BLE.setY(b2BLE.ry()+10);
      }
      b2BLS.setP2(b2BLE);

      while(true){
           if(mainblocks->block1.contains(b2BRE) || mainblocks->block3.contains(b2BRE)){
               break;
           }
           if(b2BRE.ry() == 500){
               break;
           }
           b2BRE.setY(b2BRE.ry()+10);
      }
      b2BRS.setP2(b2BRE);

     scene.addLine(b2TLS);
     scene.addLine(b2TRS);
     scene.addLine(b2BLS);
     scene.addLine(b2BRS);

     //==============Block 3 Grid==============//

     QLineF b3TLS;
     QLineF b3TRS;
     QLineF b3BLS;
     QLineF b3BRS;

     b3TLS.setP1(mainblocks->block3.topLeft());
     b3TRS.setP1(mainblocks->block3.topRight());
     b3BLS.setP1(mainblocks->block3.bottomLeft());
     b3BRS.setP1(mainblocks->block3.bottomRight());

     QPointF b3TLE = b3TLS.p1();
     QPointF b3TRE = b3TRS.p1();
     QPointF b3BLE = b3BLS.p1();
     QPointF b3BRE = b3BRS.p1();

     while(true){
          if(mainblocks->block1.contains(b3TLE) || mainblocks->block2.contains(b3TLE)){
              if(mainblocks->block1.contains(b3TLE)){
                  qreal tempx = (mainblocks->block1.bottomRight().rx()-mainblocks->block3.topLeft().rx())/2;
                  qreal tempy = (b3TLE.ry()-b3TLS.p1().ry())/2;
                  scene.addEllipse((mainblocks->block3.topLeft().rx()+tempx),(mainblocks->block3.topRight().ry()+tempy),5,5,pen,brush);
                  xstore.push_back((mainblocks->block3.topLeft().rx()+tempx));
                  ystore.push_back((mainblocks->block3.topRight().ry()+tempy));
              }
              if(mainblocks->block2.contains(b3TLE)){
                  qreal tempx = (mainblocks->block2.bottomRight().rx()-mainblocks->block3.topLeft().rx())/2;
                  qreal tempy = (b3TLE.ry()-b3TLS.p1().ry())/2;
                  scene.addEllipse((mainblocks->block3.topLeft().rx()+tempx),(mainblocks->block3.topRight().ry()+tempy),5,5,pen,brush);
                  xstore.push_back((mainblocks->block3.topLeft().rx()+tempx));
                  ystore.push_back((mainblocks->block3.topRight().ry()+tempy));
              }
              break;
          }
          if(b3TLE.ry() == 0){
              break;
          }
          b3TLE.setY(b3TLE.ry()-10);
      }
      b3TLS.setP2(b3TLE);

      while(true){
           if(mainblocks->block1.contains(b3TRE) || mainblocks->block2.contains(b3TRE)){
               if(mainblocks->block1.contains(b3TRE)){
                   qreal tempx = (mainblocks->block3.topRight().rx()-mainblocks->block1.bottomLeft().rx())/2;
                   qreal tempy = (b3TRE.ry()-b3TLS.p1().ry())/2;
                   scene.addEllipse((mainblocks->block1.bottomLeft().rx()+tempx),(mainblocks->block3.topRight().ry()+tempy),5,5,pen,brush);
                   xstore.push_back((mainblocks->block1.bottomLeft().rx()+tempx));
                   ystore.push_back((mainblocks->block3.topRight().ry()+tempy));
               }
               if(mainblocks->block2.contains(b3TRE)){
                   qreal tempx = (mainblocks->block3.topRight().rx()-mainblocks->block2.bottomLeft().rx())/2;
                   qreal tempy = (b3TRE.ry()-b3TLS.p1().ry())/2;
                   scene.addEllipse((mainblocks->block2.bottomLeft().rx()+tempx),(mainblocks->block3.topRight().ry()+tempy),5,5,pen,brush);
                   xstore.push_back((mainblocks->block2.bottomLeft().rx()+tempx));
                   ystore.push_back((mainblocks->block3.topRight().ry()+tempy));
               }
               break;
           }
           if(b3TRE.ry() == 0){
               break;
           }
           b3TRE.setY(b3TRE.ry()-10);
      }
      b3TRS.setP2(b3TRE);

      while(true){
           if(mainblocks->block1.contains(b3BLE) || mainblocks->block2.contains(b3BLE)){
               break;
           }
           if(b3BLE.ry() == 500){
               break;
           }
           b3BLE.setY(b3BLE.ry()+10);
       }
       b3BLS.setP2(b3BLE);

       while(true){
            if(mainblocks->block1.contains(b3BRE) || mainblocks->block2.contains(b3BRE)){
                break;
            }
            if(b3BRE.ry() == 500){
                break;
            }
            b3BRE.setY(b3BRE.ry()+10);
       }
       b3BRS.setP2(b3BRE);

      scene.addLine(b3TLS);
      scene.addLine(b3TRS);
      scene.addLine(b3BLS);
      scene.addLine(b3BRS);

      //=============Edge Cell Points=============//

      QPointF lp;

      qreal b1x = mainblocks->block1.left();
      qreal b2x = mainblocks->block2.left();
      qreal b3x = mainblocks->block3.left();

      bool isb1l = false;
      bool isb2l = false;
      bool isb3l = false;

      if(b1x<=b2x && b1x<=b3x){
          isb1l=true;
      }
      if(b2x<=b1x && b2x<=b3x){
          isb2l=true;
      }
      if(b3x<=b1x && b3x<=b2x){
          isb3l=true;
      }
      if(isb1l){
          lp.setX(b1x/2);
          lp.setY(250);
      }
      if(isb2l){
          lp.setX(b2x/2);
          lp.setY(250);
      }
      if(isb3l){
          lp.setX(b3x/2);
          lp.setY(250);
      }

      QPointF rp;

      qreal b1xr = mainblocks->block1.right();
      qreal b2xr = mainblocks->block2.right();
      qreal b3xr = mainblocks->block3.right();

      bool isb1r = false;
      bool isb2r = false;
      bool isb3r = false;

      if(b1xr>=b2xr && b1xr>=b3xr){
          isb1r=true;
      }
      if(b2xr>=b1xr && b2xr>=b3xr){
          isb2r=true;
      }
      if(b3xr>=b1xr && b3xr>=b2xr){
          isb3r=true;
      }
      if(isb1r){
          rp.setX(((500-b1xr)/2)+b1xr);
          rp.setY(250);
      }
      if(isb2r){
          rp.setX(((500-b2xr)/2)+b2xr);
          rp.setY(250);
      }
      if(isb3r){
          rp.setX(((500-b3xr)/2)+b3xr);
          rp.setY(250);
      }

      if(lp.rx() != 0){
         QRectF ldot = QRectF(lp.rx(),lp.ry(),5,5);
         scene.addEllipse(ldot,pen,brush);
         xstore.push_back(lp.rx());
         ystore.push_back(lp.ry());

         //pointstore.append(&lp);
      }
      if(rp.rx() !=500){
        QRectF rdot = QRectF(rp.rx(),rp.ry(),5,5);
        scene.addEllipse(rdot,pen,brush);
        xstore.push_back(rp.rx());
        ystore.push_back(rp.ry());
        //pointstore.append(QPointF(rp.rx(),rp.ry()));
      }

      //=============Perfect Case Points=============//

      if( (b1TLS.length() + mainblocks->block1.height() + b1BLS.length()) == 500){
        if(!isb1l){
           qreal distance1 = abs(mainblocks->block1.left()-mainblocks->block2.right());
           qreal distance2 = abs(mainblocks->block1.left()-mainblocks->block3.right());
           if(distance1<distance2){
               distance1=((distance1/2)+mainblocks->block2.right());
               scene.addEllipse(distance1,250,5,5,pen,brush);
               xstore.push_back(distance1);
               ystore.push_back(250);
               //pointstore.push_back(QPointF(distance1,250));
           }
           else{
               distance2=((distance2/2)+mainblocks->block3.right());
               scene.addEllipse(distance2,250,5,5,pen,brush);
               xstore.push_back(distance2);
               ystore.push_back(250);
               //pointstore.push_back(QPointF(distance2,250));
           }
        }
      }
      if( (b2TLS.length() + mainblocks->block2.height() + b2BLS.length()) == 500){
          if(!isb2l){
             qreal distance1 = abs(mainblocks->block2.left()-mainblocks->block1.right());
             qreal distance2 = abs(mainblocks->block2.left()-mainblocks->block3.right());
             if(distance1<distance2){
                 distance1=((distance1/2)+mainblocks->block1.right());
                 scene.addEllipse(distance1,250,5,5,pen,brush);
                 xstore.push_back(distance1);
                 ystore.push_back(250);
                 //pointstore.push_back(QPointF(distance1,250));
             }
             else{
                 distance2=((distance2/2)+mainblocks->block3.right());
                 scene.addEllipse(distance2,250,5,5,pen,brush);
                 xstore.push_back(distance2);
                 ystore.push_back(250);
                 //pointstore.push_back(QPointF(distance2,250));
             }
          }
      }
      if( (b3TLS.length() + mainblocks->block3.height() + b3BLS.length()) == 500){
          if(!isb3l){
             qreal distance1 = abs(mainblocks->block3.left()-mainblocks->block2.right());
             qreal distance2 = abs(mainblocks->block3.left()-mainblocks->block1.right());
             if(distance1<distance2){
                 distance1=((distance1/2)+mainblocks->block2.right());
                 scene.addEllipse(distance1,250,5,5,pen,brush);
                 xstore.push_back(distance1);
                 ystore.push_back(250);
                 //pointstore.push_back(QPointF(distance1,250));
             }
             else{
                 distance2=((distance2/2)+mainblocks->block1.right());
                 scene.addEllipse(distance2,250,5,5,pen,brush);
                 xstore.push_back(distance2);
                 ystore.push_back(250);
                 //pointstore.push_back(QPointF(distance2,250));
             }
          }
      }

      //=============Above/Below Square Cell Points=============//

      if(b1TLS.length() == b1TRS.length()){
          if(mainblocks->block1.top()!=0){
            scene.addEllipse(mainblocks->block1.center().rx(),(mainblocks->block1.topLeft().ry()-(b1TLS.length()/2)),5,5,pen,brush);
            xstore.push_back(mainblocks->block1.center().rx());
            ystore.push_back((mainblocks->block1.topLeft().ry()-(b1TLS.length()/2)));
          }
      }
      if(b1BLS.length() == b1BRS.length()){
          if(mainblocks->block1.bottom()!=500){
            scene.addEllipse(mainblocks->block1.center().rx(),(mainblocks->block1.bottomLeft().ry()+(b1BLS.length()/2)),5,5,pen,brush);
            xstore.push_back(mainblocks->block1.center().rx());
            ystore.push_back((mainblocks->block1.bottomLeft().ry()+(b1BLS.length()/2)));
          }
      }
      if(b2TLS.length() == b2TRS.length()){
          if(mainblocks->block2.top()!=0){
            scene.addEllipse(mainblocks->block2.center().rx(),(mainblocks->block2.topLeft().ry()-(b2TLS.length()/2)),5,5,pen,brush);
            xstore.push_back(mainblocks->block2.center().rx());
            ystore.push_back((mainblocks->block2.topLeft().ry()-(b2TLS.length()/2)));
          }
      }
      if(b2BLS.length() == b2BRS.length()){
          if(mainblocks->block2.bottom()!=500){
            scene.addEllipse(mainblocks->block2.center().rx(),(mainblocks->block2.bottomLeft().ry()+(b2BLS.length()/2)),5,5,pen,brush);
            xstore.push_back(mainblocks->block2.center().rx());
            ystore.push_back((mainblocks->block2.bottomLeft().ry()+(b2BLS.length()/2)));
          }
      }
      if(b3TLS.length()== b3TRS.length()){
          if(mainblocks->block3.top()!=0){
            scene.addEllipse(mainblocks->block3.center().rx(),(mainblocks->block3.topLeft().ry()-(b3TLS.length()/2)),5,5,pen,brush);
            xstore.push_back(mainblocks->block3.center().rx());
            ystore.push_back((mainblocks->block3.topLeft().ry()-(b3TLS.length()/2)));
          }
      }
      if(b3BLS.length()== b3BRS.length()){
          if(mainblocks->block3.bottom()){
            scene.addEllipse(mainblocks->block3.center().rx(),(mainblocks->block3.bottomLeft().ry()+(b3BLS.length()/2)),5,5,pen,brush);
            xstore.push_back(mainblocks->block3.center().rx());
            ystore.push_back((mainblocks->block3.bottomLeft().ry()+(b3BLS.length()/2)));
          }
      }

      //=============Partial Case=============//
      for(int i=0;i<xstore.size();++i){
          if(xstore.size() == 2){
              scene.addLine(xstore[0],ystore[0],xstore[1],ystore[1],pen);
              break;
          }
          drawpath(xstore[i],ystore[i]);
      }
      xstore.clear();
      ystore.clear();



}
