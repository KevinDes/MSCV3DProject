#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <QPixmap>
#include <QImage>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);//creation of the scene

    ui->graphicsView->setScene(scene);//set the scene on the graphicsView

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Load some files


    if(ui->radioButton->isChecked() )
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                        QDir::currentPath(),
                                                        tr("Images (*.pcd)"));

        QImage image(fileName);
        QPixmap pixmap(fileName);
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->show();
    }
    if(ui->radioButton_2->isChecked() )
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                        QDir::currentPath(),
                                                        tr("Images (*.ply)"));

        QImage image(fileName);
        QPixmap pixmap(fileName);
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->show();
    }
    if(ui->radioButton_3->isChecked() )
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                        QDir::currentPath(),
                                                        tr("Images (*.jpg)"));

        QImage image(fileName);
        QPixmap pixmap(fileName);
        scene->addPixmap(pixmap);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->show();
    }
}

