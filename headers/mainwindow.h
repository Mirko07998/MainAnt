#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../headers/parser.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void onCompile();
    void onRun();

private:
    Ui::MainWindow *ui;
    QString inputText;

    parser p;
};

#endif // MAINWINDOW_H





