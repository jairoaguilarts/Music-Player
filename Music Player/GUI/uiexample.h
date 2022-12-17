#ifndef UIEXAMPLE_H
#define UIEXAMPLE_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QStringList>
#include <QClipboard>
#include <QTime>
#include <QMediaPlayer>
#include <QUrl>
#include <QAudioOutput>
#include <QMessageBox>
#include <iostream>
#include <vector>
#include "Genero.h"
#include "PlayListInfo.h"
#include "SongInfo.h"
#include "GeneroFileV.h"
#include "SongInfoFileV.h"
#include "PlayListFileV.h"

using namespace std;

namespace Ui {
class UIExample;
}

class UIExample : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIExample(QWidget *parent = nullptr);
    ~UIExample();
    void crearVectores();
    void cargarCanciones();
    void cargarPlaylist();

private slots:

    void on_btnPlay_clicked();

    void ElapsedTime(qint64 x);
    void RemaningTime(qint64 x);

    void on_btnNext_clicked();
    void on_btnStop_clicked();
    void on_btnShuffel_clicked();
    void on_btnPrev_clicked();
    void on_btnPause_clicked();
    void on_btnRepeat_clicked();
    void on_btnMute_clicked();
    void on_btnSeleccionarRuta_clicked();
    void on_btnCrearCancion_clicked();
    void on_btnCrearPlaylist_clicked();
    void on_btnCrearGenero_clicked();

    void on_SeekSlider_sliderMoved(int position);

    void on_bttnShowPlay_clicked();

    void on_bttnShowSongs_clicked();

    void on_btnAgregarCancio_clicked();

private:

    Ui::UIExample *ui;
    QString ruta;
    vector<Genero*> generos;
    vector<SongInfo*> canciones;
    vector<PlayListInfo*> pListas;
    GeneroFileV *gfv = nullptr;
    SongInfoFileV *sifv = nullptr;
    PlayListFileV *plfv = nullptr;

    //lo agregue de mainwindow -> shell0
    enum RepeatFlags {None = 0, One = 1, All =2};
    bool ShuffleFlag;
    bool isPlayingFlag;
    int RepeatStat;

    QMediaPlayer *mPlayer;
    QAudioOutput *aOutput;

};

#endif // UIEXAMPLE_H
