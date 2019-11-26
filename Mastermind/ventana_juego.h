#ifndef VENTANA_JUEGO_H
#define VENTANA_JUEGO_H

#include <QDialog>
#include <QObject>
#include <QPushButton>
#include <QEvent>

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

    void on_Panel_Box_clicked();

    void Change(int  cont, class QPushButton *);


private:
    Ui::Ventana_juego *ui;
};

#endif // VENTANA_JUEGO_H

