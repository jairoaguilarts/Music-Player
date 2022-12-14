#ifndef UIEXAMPLE_H
#define UIEXAMPLE_H

#include <QMainWindow>
#include"creargenero.h"
#include "crearcancion.h"

namespace Ui {
class UIExample;
}

class UIExample : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIExample(QWidget *parent = nullptr);
    ~UIExample();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::UIExample *ui;
};

#endif // UIEXAMPLE_H
