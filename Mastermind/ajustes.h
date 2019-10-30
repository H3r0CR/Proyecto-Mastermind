#ifndef AJUSTES_H
#define AJUSTES_H

#include <QDialog>

namespace Ui {
class Ajustes;
}

class Ajustes : public QDialog
{
    Q_OBJECT

public:
    explicit Ajustes(QWidget *parent = nullptr);
    ~Ajustes();

private:
    Ui::Ajustes *ui;
};

#endif // AJUSTES_H
