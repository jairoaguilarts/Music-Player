#include "crearcancion.h"
#include "ui_crearcancion.h"

CrearCancion::CrearCancion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CrearCancion)
{
    ui->setupUi(this);
}

CrearCancion::~CrearCancion()
{
    delete ui;
}
