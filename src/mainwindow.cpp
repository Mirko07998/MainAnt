#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Compile, &QPushButton::clicked, this, &MainWindow::onCompile);
    connect(ui->Run, &QPushButton::clicked, this, &MainWindow::onRun);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCompile(){
    inputText = ui->input->toPlainText();
    p.setInput(inputText);
    p.compileProgramm();
}


void MainWindow::onRun(){
    p.runProgramm();
}
