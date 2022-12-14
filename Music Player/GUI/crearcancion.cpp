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

void CrearCancion::on_pushButton_2_clicked()
{
    QStringList list  = QFileDialog::getOpenFileNames(this,
                                                     tr("Select Files"), "Z:\\Music",
                                                     tr("MP3 Files (*.mp3)"));
    if(list.isEmpty())
        return;

    foreach(QString ruta, list) {

    }
}

