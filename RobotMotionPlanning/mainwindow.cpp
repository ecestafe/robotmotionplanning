#include "mainwindow.h"
#include "ui_mainwindow.h"


using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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

    QBrush brush = QBrush(Qt::BDiagPattern);
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
    QBrush brush = QBrush(Qt::BDiagPattern);
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
    QBrush brush = QBrush(Qt::BDiagPattern);
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
    QBrush brush = QBrush(Qt::BDiagPattern);
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
    QBrush brush = QBrush(Qt::BDiagPattern);
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
    QBrush brush = QBrush(Qt::BDiagPattern);
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
    QBrush brush = QBrush(Qt::BDiagPattern);
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
    QBrush brush = QBrush(Qt::BDiagPattern);
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
    QBrush brush = QBrush(Qt::BDiagPattern);
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
