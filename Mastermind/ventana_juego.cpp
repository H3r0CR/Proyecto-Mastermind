#include "ventana_juego.h"
#include "ui_ventana_juego.h"
#include "ajustes.h"

#include <QApplication>
#include <QDesktopServices>
#include <QPushButton>
#include <QUrl>


Ventana_juego::Ventana_juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventana_juego)           // Esta función se encarga de cargar una imagen por medio de su dirección URL
{                                             //para colocarla como fondo para la ventana
    ui->setupUi(this);
    QPixmap bkgnd("/Users/hertz/Documents/GitHub/Proyecto-Mastermind/Madera.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

Ventana_juego::~Ventana_juego()
{
    delete ui;
}

void Ventana_juego::on_Ayuda_clicked()              // Esta función se encarga de abrir un PDF por medio de su dirección URL
{                                               //al recibir un click en su respectivo botón

    QDesktopServices::openUrl(QUrl::fromLocalFile("/C:/Users/hertz/Documents/GitHub/Proyecto-Mastermind/Manual Mastermind.pdf"));
}

void Ventana_juego::on_Configuracion_clicked()       // Esta función se encarga de abrir una ventana nueva, al recibir un click
{                                               //en su respectivo botón
    Ajustes ajuste;
    ajuste.setModal(true);
    ajuste.exec();
}

void Ventana_juego::Change(int cont, class QPushButton *)
{
    if(cont == 0)
    {

       cont ++;
    }

    if(cont == 1)
    {

       cont = 0;
    }
}

void Ventana_juego::on_Panel_Box_clicked()
{
    int cont = 0;
    if(ui->B1->isCheckable())
    {
        Change(cont, ui->B1);
    }
}
