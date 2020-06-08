#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "problemwindow.h"
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ProblemWindow *problem;


private slots:
    void on_EnterButton_clicked();
};

#endif // MAINWINDOW_H
