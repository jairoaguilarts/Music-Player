#include "creargenero.h"
#include "ui_creargenero.h"

CrearGenero::CrearGenero(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CrearGenero)
{
    ui->setupUi(this);
}

CrearGenero::~CrearGenero()
{
    delete ui;
}
