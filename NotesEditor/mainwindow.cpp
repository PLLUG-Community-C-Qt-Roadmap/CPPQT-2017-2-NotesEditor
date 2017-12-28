#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->addPushButton, &QPushButton::clicked, this, &MainWindow::slotAddNote);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotAddNote()
{
    Dialog *addDialog = new Dialog(this);
    addDialog->show();
}
