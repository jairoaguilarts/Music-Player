#include "uiexample.h"
#include "ui_uiexample.h"

UIExample::UIExample(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIExample)
{
    ui->setupUi(this);
}

UIExample::~UIExample()
{
    delete ui;
}

void UIExample::on_pushButton_clicked()
{
    CrearGenero *genero = new CrearGenero(0);
    genero->show();
}


void UIExample::on_pushButton_4_clicked()
{
    CrearCancion *cancion = new CrearCancion(0);
    cancion->show();
}

