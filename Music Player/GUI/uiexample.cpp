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
