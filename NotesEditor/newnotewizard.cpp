#include "newnotewizard.h"
#include "ui_newnotewizard.h"

#include <QStateMachine>

NewNoteWizard::NewNoteWizard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
  , mStateMachine{new QStateMachine(this)}
{
    ui->setupUi(this);

    QState *page1 = new QState;
    page1->assignProperty(ui->descriptionLabel, "text", "Step 1");
    page1->assignProperty(ui->prevPushButton, "enabled", false);
    page1->assignProperty(ui->wizardStackedWidget, "currentIndex", 0);
    mStateMachine->addState(page1);

    QState *page2 = new QState;
    page2->assignProperty(ui->descriptionLabel, "text", "Step 2");
    page2->assignProperty(ui->prevPushButton, "enabled", true);
    page2->assignProperty(ui->wizardStackedWidget, "currentIndex", 1);
    mStateMachine->addState(page2);

    page1->addTransition(ui->nextPushButton, &QPushButton::clicked, page2);
    page2->addTransition(ui->prevPushButton, &QPushButton::clicked, page1);

    mStateMachine->setInitialState(page1);
    mStateMachine->start();
}

NewNoteWizard::~NewNoteWizard()
{
    delete ui;
}
