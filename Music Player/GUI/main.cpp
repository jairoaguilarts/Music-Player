#include "uiexample.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UIExample w;
    w.show();

    return a.exec();
}
