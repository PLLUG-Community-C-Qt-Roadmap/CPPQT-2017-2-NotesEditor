#include "linkeditor.h"
#include "ui_linkeditor.h"

LinkEditor::LinkEditor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LinkEditor)
{
    ui->setupUi(this);
}

LinkEditor::~LinkEditor()
{
    delete ui;
}
