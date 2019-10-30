#ifndef VENTANA_JUEGO_H
#define VENTANA_JUEGO_H

#include <QDialog>

namespace Ui {
class Ventana_juego;
}

class Ventana_juego : public QDialog
{
    Q_OBJECT

public:
    explicit Ventana_juego(QWidget *parent = nullptr);
    ~Ventana_juego();

private slots:
    void on_Ayuda_clicked();

    void on_Configuracion_clicked();

private:
    Ui::Ventana_juego *ui;
};

#endif // VENTANA_JUEGO_H
