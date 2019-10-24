#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
        ui->setupUi(this);
        QPixmap bkgnd("/Users/hertz/Documents/GitHub/Proyecto-Mastermind/Madera.jpg");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}


