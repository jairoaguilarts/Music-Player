#ifndef UIEXAMPLE_H
#define UIEXAMPLE_H

#include <QMainWindow>
#include <QFileDialog>
#include <iostream>
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

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::UIExample *ui;
    QString ruta;
};

#endif // UIEXAMPLE_H
