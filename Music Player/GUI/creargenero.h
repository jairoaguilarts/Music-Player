#ifndef CREARGENERO_H
#define CREARGENERO_H

#include <QWidget>

namespace Ui {
class CrearGenero;
}

class CrearGenero : public QWidget
{
    Q_OBJECT

public:
    explicit CrearGenero(QWidget *parent = nullptr);
    ~CrearGenero();

private:
    Ui::CrearGenero *ui;
};

#endif // CREARGENERO_H
