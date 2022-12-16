/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_files;
    QAction *actionAbout_Me;
    QAction *actionRemove_File;
    QAction *actionAdd_to_Queue;
    QAction *actionPlay_Selected;
    QAction *actionCopy_to_Clipboard;
    QAction *actionClear_all;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *TablePlayList;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblTimeElsp;
    QSlider *SeekSlider;
    QLabel *lblTimeRemaining;
    QSplitter *splitter;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnShuffel;
    QPushButton *btnPrev;
    QPushButton *btnPlay;
    QPushButton *btnStop;
    QPushButton *btnPause;
    QPushButton *btnNext;
    QPushButton *btnRepeat;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMute;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(645, 536);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/icons/Audio Wave-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAdd_files = new QAction(MainWindow);
        actionAdd_files->setObjectName("actionAdd_files");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/icons/Plus Math-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_files->setIcon(icon1);
        actionAbout_Me = new QAction(MainWindow);
        actionAbout_Me->setObjectName("actionAbout_Me");
        actionRemove_File = new QAction(MainWindow);
        actionRemove_File->setObjectName("actionRemove_File");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/icons/Minus-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove_File->setIcon(icon2);
        actionAdd_to_Queue = new QAction(MainWindow);
        actionAdd_to_Queue->setObjectName("actionAdd_to_Queue");
        actionPlay_Selected = new QAction(MainWindow);
        actionPlay_Selected->setObjectName("actionPlay_Selected");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/icons/Play-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay_Selected->setIcon(icon3);
        actionCopy_to_Clipboard = new QAction(MainWindow);
        actionCopy_to_Clipboard->setObjectName("actionCopy_to_Clipboard");
        actionClear_all = new QAction(MainWindow);
        actionClear_all->setObjectName("actionClear_all");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/icons/Delete-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_all->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        TablePlayList = new QTableWidget(groupBox);
        if (TablePlayList->columnCount() < 2)
            TablePlayList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TablePlayList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TablePlayList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        TablePlayList->setObjectName("TablePlayList");
        QFont font;
        font.setPointSize(8);
        TablePlayList->setFont(font);
        TablePlayList->setContextMenuPolicy(Qt::ActionsContextMenu);
        TablePlayList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        TablePlayList->setDragDropMode(QAbstractItemView::DragDrop);
        TablePlayList->setAlternatingRowColors(true);
        TablePlayList->setSelectionMode(QAbstractItemView::SingleSelection);
        TablePlayList->setSelectionBehavior(QAbstractItemView::SelectRows);
        TablePlayList->setGridStyle(Qt::SolidLine);
        TablePlayList->setSortingEnabled(true);
        TablePlayList->setWordWrap(true);
        TablePlayList->setCornerButtonEnabled(false);
        TablePlayList->setRowCount(0);
        TablePlayList->setColumnCount(2);
        TablePlayList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(TablePlayList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblTimeElsp = new QLabel(groupBox);
        lblTimeElsp->setObjectName("lblTimeElsp");

        horizontalLayout_3->addWidget(lblTimeElsp);

        SeekSlider = new QSlider(groupBox);
        SeekSlider->setObjectName("SeekSlider");
        SeekSlider->setMaximum(100);
        SeekSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(SeekSlider);

        lblTimeRemaining = new QLabel(groupBox);
        lblTimeRemaining->setObjectName("lblTimeRemaining");

        horizontalLayout_3->addWidget(lblTimeRemaining);


        verticalLayout_2->addLayout(horizontalLayout_3);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnShuffel = new QPushButton(groupBox_3);
        btnShuffel->setObjectName("btnShuffel");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/icons/Shuffle-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnShuffel->setIcon(icon5);
        btnShuffel->setIconSize(QSize(18, 18));
        btnShuffel->setCheckable(true);

        horizontalLayout_2->addWidget(btnShuffel);

        btnPrev = new QPushButton(groupBox_3);
        btnPrev->setObjectName("btnPrev");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/icons/Fast Backward-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrev->setIcon(icon6);
        btnPrev->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btnPrev);

        btnPlay = new QPushButton(groupBox_3);
        btnPlay->setObjectName("btnPlay");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/icons/Play-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon7);
        btnPlay->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btnPlay);

        btnStop = new QPushButton(groupBox_3);
        btnStop->setObjectName("btnStop");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/icons/Stop-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon8);
        btnStop->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btnStop);

        btnPause = new QPushButton(groupBox_3);
        btnPause->setObjectName("btnPause");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/icons/Pause-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon9);
        btnPause->setIconSize(QSize(18, 18));
        btnPause->setCheckable(true);

        horizontalLayout_2->addWidget(btnPause);

        btnNext = new QPushButton(groupBox_3);
        btnNext->setObjectName("btnNext");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/icons/Fast Forward-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNext->setIcon(icon10);
        btnNext->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(btnNext);

        btnRepeat = new QPushButton(groupBox_3);
        btnRepeat->setObjectName("btnRepeat");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/icons/Repeat-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRepeat->setIcon(icon11);
        btnRepeat->setIconSize(QSize(18, 18));
        btnRepeat->setCheckable(true);
        btnRepeat->setChecked(true);

        horizontalLayout_2->addWidget(btnRepeat);

        splitter->addWidget(groupBox_3);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        btnMute = new QPushButton(groupBox_2);
        btnMute->setObjectName("btnMute");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/icons/Mute-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMute->setIcon(icon12);
        btnMute->setIconSize(QSize(16, 16));
        btnMute->setCheckable(true);
        btnMute->setAutoRepeat(false);
        btnMute->setFlat(false);

        horizontalLayout->addWidget(btnMute);

        splitter->addWidget(groupBox_2);

        verticalLayout_2->addWidget(splitter);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 645, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionAdd_files);
        menuFile->addSeparator();
        menuHelp->addAction(actionAbout_Me);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MP3 Player - by shell0 v.1", nullptr));
        actionAdd_files->setText(QCoreApplication::translate("MainWindow", "Add New Files", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_files->setToolTip(QCoreApplication::translate("MainWindow", "Add new files to playlist", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAdd_files->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_Me->setText(QCoreApplication::translate("MainWindow", "About Me", nullptr));
        actionRemove_File->setText(QCoreApplication::translate("MainWindow", "Remove File", nullptr));
#if QT_CONFIG(tooltip)
        actionRemove_File->setToolTip(QCoreApplication::translate("MainWindow", "Remove File from List", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRemove_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_to_Queue->setText(QCoreApplication::translate("MainWindow", "Add to Queue", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_to_Queue->setToolTip(QCoreApplication::translate("MainWindow", "Add to Queue to play next", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAdd_to_Queue->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlay_Selected->setText(QCoreApplication::translate("MainWindow", "Play Selected", nullptr));
#if QT_CONFIG(tooltip)
        actionPlay_Selected->setToolTip(QCoreApplication::translate("MainWindow", "Play Selected file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPlay_Selected->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy_to_Clipboard->setText(QCoreApplication::translate("MainWindow", "Copy to Clipboard", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy_to_Clipboard->setToolTip(QCoreApplication::translate("MainWindow", "Copy contents to Clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopy_to_Clipboard->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear_all->setText(QCoreApplication::translate("MainWindow", "Clear all", nullptr));
#if QT_CONFIG(tooltip)
        actionClear_all->setToolTip(QCoreApplication::translate("MainWindow", "Clear the playlist", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClear_all->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "MP3  PLAYER", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TablePlayList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TablePlayList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Ruta", nullptr));
        lblTimeElsp->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        lblTimeRemaining->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Controller:", nullptr));
        btnShuffel->setText(QString());
        btnPrev->setText(QString());
        btnPlay->setText(QString());
        btnStop->setText(QString());
        btnPause->setText(QString());
        btnNext->setText(QString());
        btnRepeat->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Volume:", nullptr));
        btnMute->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
