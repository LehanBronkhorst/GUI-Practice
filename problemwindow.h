#ifndef PROBLEMWINDOW_H
#define PROBLEMWINDOW_H
#include "methodsdialog.h"

#include <QMainWindow>

namespace Ui {
    class ProblemWindow;
}

class ProblemWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProblemWindow(QWidget *parent = 0);
    ~ProblemWindow();

private:
    Ui::ProblemWindow *ui;
    MethodsDialog *method;

private slots:
    void on_ConfirmProblemButton_clicked();
};

#endif // PROBLEMWINDOW_H
