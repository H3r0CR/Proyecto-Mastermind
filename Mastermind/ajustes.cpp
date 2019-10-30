#include "ajustes.h"
#include "ui_ajustes.h"

Ajustes::Ajustes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ajustes)
{
    ui->setupUi(this);
    QPixmap bkgnd("/Users/hertz/Documents/GitHub/Proyecto-Mastermind/Madera.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}
Ajustes::~Ajustes()
{
    delete ui;
}
