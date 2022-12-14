#ifndef UIEXAMPLE_H
#define UIEXAMPLE_H

#include <QMainWindow>

namespace Ui {
class UIExample;
}

class UIExample : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIExample(QWidget *parent = nullptr);
    ~UIExample();

private:
    Ui::UIExample *ui;
};

#endif // UIEXAMPLE_H
