#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

#include <vector>

/*!
 * \brief The MainWindow class is class for our main window.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief MainWindow Is class constructor.
     * \param parent Pointer to patrent object.
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /*!
     * \brief method dfgdfgfd
     * \param vec dfgfdg
     * \param param fdgfdgfd
     * \return dfggfdgfdgfd
     */
    inline int method(std::vector<int> vec, int param) {return 0;}

private slots:

    void slotAddNote();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
