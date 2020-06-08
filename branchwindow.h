#ifndef BRANCHWINDOW_H
#define BRANCHWINDOW_H

#include <QMainWindow>

namespace Ui {
    class BranchWindow;
}

class BranchWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BranchWindow(QWidget *parent = 0);
    ~BranchWindow();

private:
    Ui::BranchWindow *ui;
};

#endif // BRANCHWINDOW_H
