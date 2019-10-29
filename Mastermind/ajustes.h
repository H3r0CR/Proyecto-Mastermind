#ifndef AJUSTES_H
#define AJUSTES_H

#include <QWidget>

namespace Ui {
class Ajustes;
}

class Ajustes : public QWidget
{
    Q_OBJECT

public:
    explicit Ajustes(QWidget *parent = nullptr);
    ~Ajustes();

private:
    Ui::Ajustes *ui;
};

#endif // AJUSTES_H
