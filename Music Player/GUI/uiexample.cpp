#include "uiexample.h"
#include "ui_uiexample.h"

UIExample::UIExample(QWidget *parent):QMainWindow(parent), ui(new Ui::UIExample)
{
    ui->setupUi(this);
    //Cambiar rutas

    //rutas mac
    this->gfv = new GeneroFileV("/Users/jairoaguilar/Documents/Clases/2022\ Q4/Estructura\ de\ Datos\ II/Proyecto/Music\ Player/Music\ Player/GUI/Generos.txt");
    this->sifv = new SongInfoFileV("/Users/jairoaguilar/Documents/Clases/2022\ Q4/Estructura\ de\ Datos\ II/Proyecto/Music\ Player/Music\ Player/GUI/Canciones.txt");

    //rutas linux
    //this->gfv = new GeneroFileV("/home/shell0/Documents/MusicPlayer/Music Player/GUI/Generos.txt");
    //this->sifv = new SongInfoFileV("/home/shell0/Documents/MusicPlayer/Music Player/GUI/Canciones.txt");

    crearVectores();
    cargarCanciones();

    this->ShuffleFlag = false;
    this->RepeatStat = RepeatFlags::All;

    //connect(ui->actionPlay_Selected, SIGNAL(triggered()), ui->btnPlay, SLOT(click()));
    mPlayer = new QMediaPlayer();
    aOutput = new QAudioOutput();
    connect(mPlayer, SIGNAL(positionChanged(qint64)), this, SLOT(ElapsedTime(qint64)));
    connect(mPlayer, SIGNAL(durationChanged(qint64)), this, SLOT(RemaningTime(qint64)));

    mPlayer->setAudioOutput(aOutput);

}

UIExample::~UIExample()
{
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
        ui->tablaCanciones->insertRow(ui->tablaCanciones->rowCount());
        ui->tablaCanciones->setItem(ui->tablaCanciones->rowCount() - 1, 0, new QTableWidgetItem(nombre));
        ruta = "";
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
    for(int i = 0; i < canciones.size(); i++) {
        QString nombre(canciones[i]->getNombre().c_str());
        ui->tablaCanciones->insertRow(ui->tablaCanciones->rowCount());
        ui->tablaCanciones->setItem(ui->tablaCanciones->rowCount() - 1, 0, new QTableWidgetItem(nombre));
    }
    ui->tablaCanciones->resizeColumnToContents(0);
}

void UIExample::on_btnPlay_clicked()
{
    QItemSelectionModel *selected = ui->tablaCanciones->selectionModel();
    if(ui->tablaCanciones->item(0, 0) ==0)
        return;

    int m_current_row=0;

    if(ShuffleFlag)
    {
        int randomValue = rand() % ui->tablaCanciones->rowCount();
        qDebug() << "Random song number:" << randomValue;
        ui->tablaCanciones->selectRow(randomValue);
    }

    if(selected->hasSelection())
    {
        m_current_row = selected->currentIndex().row();

    }else{
        ui->tablaCanciones->selectRow(m_current_row);
    }

    //ui->statusBar->showMessage("[+]Now Playing: " + ui->TablePlayList->item(m_current_row, 0)->text(), 20*1000);
    SongInfo *cancion = canciones[m_current_row];
    mPlayer->setSource(QUrl::fromLocalFile(QString(cancion->getRuta().c_str())));
    mPlayer->play();
}

void UIExample::ElapsedTime(qint64 x)
{

    QTime t = QTime(0,0,0);
    t =  t.addMSecs(x);
    ui->lblTimeElsp->setText(t.toString("mm:ss"));
    ui->SeekSlider->setValue(x);
    //qDebug() << "Duration" << mPlayer->duration();

    if(x!=0 && x==mPlayer->duration() )
    {
        if(RepeatStat == RepeatFlags::None)
        {
            mPlayer->stop();
            return;
        }

        on_btnNext_clicked();
    }
    //qDebug() << RepeatStat;

}
/// Slot to update interface
void UIExample::RemaningTime(qint64 x)
{
    QTime t = QTime(0,0,0);
    t =  t.addMSecs(x);
    ui->lblTimeRemaining->setText(t.toString("mm:ss"));
    //qDebug() << t;
    ui->SeekSlider->setRange(0, x);
}


void UIExample::on_btnNext_clicked()
{

}

