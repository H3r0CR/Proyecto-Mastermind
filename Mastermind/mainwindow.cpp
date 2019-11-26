#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ventana_juego.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)                // Esta función se encarga de cargar una imagen por medio de su dirección URL
{                                               //para colocarla como fondo para la ventana
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


void MainWindow::on_Iniciar_clicked()       // Esta función se encarga de abrir una ventana nueva, al recibir un click
{                                               //en su respectivo botón
    Ventana_juego ventana_juego;
    ventana_juego.setModal(true);
    ventana_juego.exec();
}
