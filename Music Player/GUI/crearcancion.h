#ifndef CREARCANCION_H
#define CREARCANCION_H

#include <QWidget>

namespace Ui {
class CrearCancion;
}

class CrearCancion : public QWidget
{
    Q_OBJECT

public:
    explicit CrearCancion(QWidget *parent = nullptr);
    ~CrearCancion();

private:
    Ui::CrearCancion *ui;
};

#endif // CREARCANCION_H
