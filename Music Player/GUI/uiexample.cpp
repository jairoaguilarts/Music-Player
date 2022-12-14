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
        QString nombre = ui->lineNombreCancion->text();
        QString disco = ui->lineDisco->text();
        QString artistas = ui->lineArtistas->text();
        SongInfo *cancion = new SongInfo(nombre.toStdString(), disco.toStdString(), artistas.toStdString(), ruta.toStdString());
        ui->lineNombreCancion->clear();
        ui->lineDisco->clear();
        ui->lineArtistas->clear();
        cout << "Cancion creada: " << cancion->getNombre() << ", " << cancion->getDisco() << ", " << cancion->getArtista() << ", " << cancion->getRuta() << endl;
    } else {
        // Mostrar dialogo para indicar que no se ha seleccionado ninguna ruta
    }
}

