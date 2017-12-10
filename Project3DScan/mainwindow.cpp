#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <QPixmap>
#include <QImage>
#include <QFileDialog>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mesh = new gomesh();
    finres = new finalresult();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Load an image

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    QDir::currentPath(),
                                                    tr("Images (*.ply *.pcd)"));

    //Openning of the window mesh

    mesh->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    finres->show();
}
