#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

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
}
