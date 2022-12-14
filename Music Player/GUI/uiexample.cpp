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

void UIExample::on_pushButton_2_clicked()
{
    QStringList list  = QFileDialog::getOpenFileNames(this,
                                                     tr("Select Files"), "Z:\\Music",
                                                     tr("MP3 Files (*.mp3)"));
    if(list.isEmpty())
        return;
    foreach(QString rutaSeleccionada, list)
    {
        this->ruta = rutaSeleccionada;
    }
}


void UIExample::on_pushButton_3_clicked()
{
    if(ruta.toStdString().size() != 0) {
        cout << ruta.toStdString() << endl;
    } else {
        cout << "Seleccione una ruta por favor" << endl;
    }
}

