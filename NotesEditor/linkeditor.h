#ifndef LINKEDITOR_H
#define LINKEDITOR_H

#include <QWidget>

namespace Ui {
class LinkEditor;
}

class LinkEditor : public QWidget
{
    Q_OBJECT

public:
    explicit LinkEditor(QWidget *parent = 0);
    ~LinkEditor();

private:
    Ui::LinkEditor *ui;
};

#endif // LINKEDITOR_H
