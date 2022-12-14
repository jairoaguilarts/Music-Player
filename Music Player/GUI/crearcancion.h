#ifndef CREARCANCION_H
#define CREARCANCION_H

#include <QWidget>
#include <QFileDialog>
#include <iostream>
using namespace std;

namespace Ui {
class CrearCancion;
}

class CrearCancion : public QWidget
{
    Q_OBJECT

public:
    explicit CrearCancion(QWidget *parent = nullptr);
    ~CrearCancion();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::CrearCancion *ui;
};

#endif // CREARCANCION_H
