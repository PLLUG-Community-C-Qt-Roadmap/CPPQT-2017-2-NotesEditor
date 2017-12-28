#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class QStateMachine;

class NewNoteWizard : public QDialog
{
    Q_OBJECT

public:
    explicit NewNoteWizard(QWidget *parent = 0);
    ~NewNoteWizard();

private:
    Ui::Dialog *ui;
    QStateMachine *mStateMachine;
};

#endif // DIALOG_H
