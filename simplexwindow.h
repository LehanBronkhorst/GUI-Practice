#ifndef SIMPLEXWINDOW_H
#define SIMPLEXWINDOW_H
#include <QMainWindow>
//#include "problemwindow.h"

namespace Ui {
    class SimplexWindow;
}

class SimplexWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SimplexWindow(QWidget *parent = 0);
    ~SimplexWindow();

private:
    Ui::SimplexWindow *ui;
    //ProblemWindow *problem;

private slots:


private slots:
    //void on_SimplexNewButton_clicked();
};

#endif // SIMPLEXWINDOW_H




