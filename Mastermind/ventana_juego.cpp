#include "ventana_juego.h"
#include "ui_ventana_juego.h"
#include "ajustes.h"

#include <QApplication>
#include <QDesktopServices>
#include <QPushButton>
#include <QUrl>

Ventana_juego::Ventana_juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventana_juego)
{
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

void Ventana_juego::on_Ayuda_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("/C:/Users/hertz/Documents/GitHub/Proyecto-Mastermind/Cuento.pdf"));
}

void Ventana_juego::on_Configuracion_clicked()
{
    Ajustes ajuste;
    ajuste.setModal(true);
    ajuste.exec();
}
