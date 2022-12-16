/********************************************************************************
** Form generated from reading UI file 'uiexample.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIEXAMPLE_H
#define UI_UIEXAMPLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIExample
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnShuffel;
    QPushButton *btnPrev;
    QPushButton *btnPlay;
    QPushButton *btnStop;
    QPushButton *btnPause;
    QPushButton *btnNext;
    QPushButton *btnRepeat;
    QPushButton *btnMute;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QListView *listGenero;
    QLineEdit *lineGenero;
    QPushButton *btnCrearGenero;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *lineNombreCancion;
    QLabel *label_5;
    QLineEdit *lineDisco;
    QLabel *label_6;
    QLineEdit *lineArtistas;
    QPushButton *btnSeleccionarRuta;
    QPushButton *btnCrearCancion;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLineEdit *lineNombrePlaylist;
    QPushButton *btnCrearPlaylist;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblTimeElsp;
    QSlider *SeekSlider;
    QLabel *lblTimeRemaining;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tablaCanciones;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tablaPlaylist;
    QPushButton *btnAgregarCancio;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIExample)
    {
        if (UIExample->objectName().isEmpty())
            UIExample->setObjectName("UIExample");
        UIExample->resize(650, 720);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UIExample->sizePolicy().hasHeightForWidth());
        UIExample->setSizePolicy(sizePolicy);
        UIExample->setMinimumSize(QSize(650, 720));
        UIExample->setMaximumSize(QSize(650, 720));
        centralwidget = new QWidget(UIExample);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 570, 391, 71));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnShuffel = new QPushButton(groupBox_4);
        btnShuffel->setObjectName("btnShuffel");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/icons/Shuffle-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnShuffel->setIcon(icon);
        btnShuffel->setIconSize(QSize(18, 18));
        btnShuffel->setCheckable(true);

        horizontalLayout_2->addWidget(btnShuffel);

        btnPrev = new QPushButton(groupBox_4);
        btnPrev->setObjectName("btnPrev");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/icons/Fast Backward-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrev->setIcon(icon1);
        btnPrev->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btnPrev);

        btnPlay = new QPushButton(groupBox_4);
        btnPlay->setObjectName("btnPlay");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/icons/Play-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon2);
        btnPlay->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btnPlay);

        btnStop = new QPushButton(groupBox_4);
        btnStop->setObjectName("btnStop");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/icons/Stop-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon3);
        btnStop->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btnStop);

        btnPause = new QPushButton(groupBox_4);
        btnPause->setObjectName("btnPause");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/icons/Pause-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon4);
        btnPause->setIconSize(QSize(18, 18));
        btnPause->setCheckable(true);

        horizontalLayout_2->addWidget(btnPause);

        btnNext = new QPushButton(groupBox_4);
        btnNext->setObjectName("btnNext");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/icons/Fast Forward-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNext->setIcon(icon5);
        btnNext->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btnNext);

        btnRepeat = new QPushButton(groupBox_4);
        btnRepeat->setObjectName("btnRepeat");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/icons/Repeat-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRepeat->setIcon(icon6);
        btnRepeat->setIconSize(QSize(18, 18));
        btnRepeat->setCheckable(true);
        btnRepeat->setChecked(true);

        horizontalLayout_2->addWidget(btnRepeat);

        btnMute = new QPushButton(groupBox_4);
        btnMute->setObjectName("btnMute");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/icons/Mute-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMute->setIcon(icon7);
        btnMute->setIconSize(QSize(16, 16));
        btnMute->setCheckable(true);
        btnMute->setAutoRepeat(false);
        btnMute->setFlat(false);

        horizontalLayout_2->addWidget(btnMute);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(420, 30, 190, 161));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMinimumSize(QSize(190, 90));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        listGenero = new QListView(groupBox_5);
        listGenero->setObjectName("listGenero");

        verticalLayout->addWidget(listGenero);

        lineGenero = new QLineEdit(groupBox_5);
        lineGenero->setObjectName("lineGenero");

        verticalLayout->addWidget(lineGenero);

        btnCrearGenero = new QPushButton(groupBox_5);
        btnCrearGenero->setObjectName("btnCrearGenero");

        verticalLayout->addWidget(btnCrearGenero);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(420, 190, 190, 270));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        groupBox_6->setMinimumSize(QSize(190, 270));
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        lineNombreCancion = new QLineEdit(groupBox_6);
        lineNombreCancion->setObjectName("lineNombreCancion");

        verticalLayout_2->addWidget(lineNombreCancion);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        lineDisco = new QLineEdit(groupBox_6);
        lineDisco->setObjectName("lineDisco");

        verticalLayout_2->addWidget(lineDisco);

        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        lineArtistas = new QLineEdit(groupBox_6);
        lineArtistas->setObjectName("lineArtistas");

        verticalLayout_2->addWidget(lineArtistas);

        btnSeleccionarRuta = new QPushButton(groupBox_6);
        btnSeleccionarRuta->setObjectName("btnSeleccionarRuta");

        verticalLayout_2->addWidget(btnSeleccionarRuta);

        btnCrearCancion = new QPushButton(groupBox_6);
        btnCrearCancion->setObjectName("btnCrearCancion");

        verticalLayout_2->addWidget(btnCrearCancion);

        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(420, 470, 190, 130));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setMinimumSize(QSize(190, 130));
        verticalLayout_3 = new QVBoxLayout(groupBox_7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        lineNombrePlaylist = new QLineEdit(groupBox_7);
        lineNombrePlaylist->setObjectName("lineNombrePlaylist");

        verticalLayout_3->addWidget(lineNombrePlaylist);

        btnCrearPlaylist = new QPushButton(groupBox_7);
        btnCrearPlaylist->setObjectName("btnCrearPlaylist");

        verticalLayout_3->addWidget(btnCrearPlaylist);

        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(19, 540, 381, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lblTimeElsp = new QLabel(horizontalLayoutWidget);
        lblTimeElsp->setObjectName("lblTimeElsp");
        lblTimeElsp->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_5->addWidget(lblTimeElsp);

        SeekSlider = new QSlider(horizontalLayoutWidget);
        SeekSlider->setObjectName("SeekSlider");
        SeekSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(SeekSlider);

        lblTimeRemaining = new QLabel(horizontalLayoutWidget);
        lblTimeRemaining->setObjectName("lblTimeRemaining");
        lblTimeRemaining->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_5->addWidget(lblTimeRemaining);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(220, 30, 180, 501));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(180, 320));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        tablaCanciones = new QTableWidget(groupBox_2);
        if (tablaCanciones->columnCount() < 1)
            tablaCanciones->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaCanciones->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tablaCanciones->setObjectName("tablaCanciones");
        QFont font;
        font.setPointSize(8);
        tablaCanciones->setFont(font);
        tablaCanciones->setContextMenuPolicy(Qt::ActionsContextMenu);
        tablaCanciones->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tablaCanciones->setDragDropMode(QAbstractItemView::DragDrop);
        tablaCanciones->setAlternatingRowColors(true);
        tablaCanciones->setSelectionMode(QAbstractItemView::SingleSelection);
        tablaCanciones->setSelectionBehavior(QAbstractItemView::SelectRows);
        tablaCanciones->setGridStyle(Qt::SolidLine);
        tablaCanciones->setSortingEnabled(true);
        tablaCanciones->setWordWrap(true);
        tablaCanciones->setCornerButtonEnabled(false);
        tablaCanciones->setRowCount(0);
        tablaCanciones->setColumnCount(1);
        tablaCanciones->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_3->addWidget(tablaCanciones);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 30, 180, 501));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(180, 320));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        tablaPlaylist = new QTableWidget(groupBox_3);
        if (tablaPlaylist->columnCount() < 1)
            tablaPlaylist->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaPlaylist->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        tablaPlaylist->setObjectName("tablaPlaylist");
        tablaPlaylist->setFont(font);
        tablaPlaylist->setContextMenuPolicy(Qt::ActionsContextMenu);
        tablaPlaylist->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tablaPlaylist->setDragDropMode(QAbstractItemView::DragDrop);
        tablaPlaylist->setAlternatingRowColors(true);
        tablaPlaylist->setSelectionMode(QAbstractItemView::SingleSelection);
        tablaPlaylist->setSelectionBehavior(QAbstractItemView::SelectRows);
        tablaPlaylist->setGridStyle(Qt::SolidLine);
        tablaPlaylist->setSortingEnabled(true);
        tablaPlaylist->setWordWrap(true);
        tablaPlaylist->setCornerButtonEnabled(false);
        tablaPlaylist->setRowCount(0);
        tablaPlaylist->setColumnCount(1);
        tablaPlaylist->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_4->addWidget(tablaPlaylist);

        btnAgregarCancio = new QPushButton(groupBox);
        btnAgregarCancio->setObjectName("btnAgregarCancio");
        btnAgregarCancio->setGeometry(QRect(430, 610, 160, 32));

        horizontalLayout->addWidget(groupBox);

        UIExample->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIExample);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 650, 24));
        UIExample->setMenuBar(menubar);
        statusbar = new QStatusBar(UIExample);
        statusbar->setObjectName("statusbar");
        UIExample->setStatusBar(statusbar);

        retranslateUi(UIExample);

        QMetaObject::connectSlotsByName(UIExample);
    } // setupUi

    void retranslateUi(QMainWindow *UIExample)
    {
        UIExample->setWindowTitle(QCoreApplication::translate("UIExample", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UIExample", "Music Player", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("UIExample", "Controller:", nullptr));
        btnShuffel->setText(QString());
        btnPrev->setText(QString());
        btnPlay->setText(QString());
        btnStop->setText(QString());
        btnPause->setText(QString());
        btnNext->setText(QString());
        btnRepeat->setText(QString());
        btnMute->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("UIExample", "Crear Genero", nullptr));
        label_3->setText(QCoreApplication::translate("UIExample", "Genero:", nullptr));
        btnCrearGenero->setText(QCoreApplication::translate("UIExample", "Crear", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("UIExample", "Crear Cancion", nullptr));
        label_4->setText(QCoreApplication::translate("UIExample", "Nombre:", nullptr));
        label_5->setText(QCoreApplication::translate("UIExample", "Disco:", nullptr));
        label_6->setText(QCoreApplication::translate("UIExample", "Artistas:", nullptr));
        btnSeleccionarRuta->setText(QCoreApplication::translate("UIExample", "Seleccionar ruta mp3", nullptr));
        btnCrearCancion->setText(QCoreApplication::translate("UIExample", "Crear", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("UIExample", "Crear Playlist", nullptr));
        label_7->setText(QCoreApplication::translate("UIExample", "Nombre:", nullptr));
        btnCrearPlaylist->setText(QCoreApplication::translate("UIExample", "Crear", nullptr));
        lblTimeElsp->setText(QCoreApplication::translate("UIExample", "00:00", nullptr));
        lblTimeRemaining->setText(QCoreApplication::translate("UIExample", "00:00", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("UIExample", "Musica", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaCanciones->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("UIExample", "Title", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("UIExample", "Playlists", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaPlaylist->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("UIExample", "Title", nullptr));
        btnAgregarCancio->setText(QCoreApplication::translate("UIExample", "Agregar Cancion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIExample: public Ui_UIExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIEXAMPLE_H
