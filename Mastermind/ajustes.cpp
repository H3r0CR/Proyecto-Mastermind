#include "ajustes.h"
#include "ui_ajustes.h"

Ajustes::Ajustes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ajustes)
{
    ui->setupUi(this);
}

Ajustes::~Ajustes()
{
    delete ui;
}
