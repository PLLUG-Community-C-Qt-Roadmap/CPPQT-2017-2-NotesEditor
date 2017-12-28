#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "newnotewizard.h"

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
    NewNoteWizard *addDialog = new NewNoteWizard(this);
    addDialog->show();
}
