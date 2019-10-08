#include "ventana_juego.h"
#include "ui_ventana_juego.h"

Ventana_Juego::Ventana_Juego(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_Juego)
{
    ui->setupUi(this);
}

Ventana_Juego::~Ventana_Juego()
{
    delete ui;
}
