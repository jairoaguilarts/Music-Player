#include "uiexample.h"
#include "ui_uiexample.h"

UIExample::UIExample(QWidget *parent):QMainWindow(parent), ui(new Ui::UIExample)
{
    ui->setupUi(this);
    crearVectores();
    cargarCanciones();
}

UIExample::~UIExample()
{
    for(int i = 0; i < canciones.size(); i++) { //Castea de Object* a SongInfo*
        cout << canciones[i]->getNombre() << endl;
    }
    gfv->escribir();
    gfv->cerrar();
    sifv->escribir();
    sifv->cerrar();
    delete ui;
}

void UIExample::on_pushButton_2_clicked()
{
    QStringList list  = QFileDialog::getOpenFileNames(this, tr("Select Files"), "Z:\\Music", tr("MP3 Files (*.mp3)"));
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
        canciones.push_back(cancion);
        sifv->agregarCancion(cancion);
        cargarCanciones();
    } else {
        // Mostrar dialogo para indicar que no se ha seleccionado ninguna ruta
    }
}


void UIExample::on_pushButton_clicked()
{
    QString Qgenero = ui->lineGenero->text();
    Genero *genero = new Genero(Qgenero.toStdString());
    ui->lineGenero->clear();
    generos.push_back(genero);
    gfv->agregarGenero(genero);
    gfv->escribir();
}

void UIExample::crearVectores() {
    if(gfv->abrir()) {
        this->gfv->leer();
        vector<Object*> generosLeidos = gfv->getGeneros();
        for(int i = 0; i < generosLeidos.size(); i++) { //Castea de Object* a Genero*
            Genero *gen = dynamic_cast<Genero*>(generosLeidos[i]);
            this->generos.push_back(gen);
        }
    }
    if(sifv->abrir()) {
        this->sifv->leer();
        vector<Object*> cancionesLeidas = sifv->getCanciones();
        for(int i = 0; i < cancionesLeidas.size(); i++) { //Castea de Object* a SongInfo*
            SongInfo *can = dynamic_cast<SongInfo*>(cancionesLeidas[i]);
            this->canciones.push_back(can);
        }
    }
}

void UIExample::cargarCanciones() {
    int counter = ui->tablaCanciones->rowCount();
    ui->tablaCanciones->setRowCount(counter);
    for(int i = 0; i < canciones.size(); i++) {
        QString nombre(canciones[i]->getNombre().c_str());
        QTableWidgetItem *itemNombre = new QTableWidgetItem(nombre);
        ui->tablaCanciones->setItem(counter, 1, itemNombre);
        counter++;
    }
    ui->tablaCanciones->resizeColumnToContents(0);
}
