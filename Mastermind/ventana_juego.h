#ifndef VENTANA_JUEGO_H
#define VENTANA_JUEGO_H

#include <QWidget>

namespace Ui {
class Ventana_Juego;
}

class Ventana_Juego : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_Juego(QWidget *parent = nullptr);
    ~Ventana_Juego();

private:
    Ui::Ventana_Juego *ui;
};

#endif // VENTANA_JUEGO_H
