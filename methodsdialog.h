#ifndef METHODSDIALOG_H
#define METHODSDIALOG_H
#include "simplexwindow.h"
#include "branchwindow.h"
#include <QDialog>

namespace Ui {
    class MethodsDialog;
}

class MethodsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MethodsDialog(QWidget *parent = 0);
    ~MethodsDialog();

private:
    Ui::MethodsDialog *ui;
    SimplexWindow *simplex;
    BranchWindow *branch;

private slots:


private slots:
    void on_pushButton_clicked();
    void on_SimplexButton_clicked();
};

#endif // METHODSDIALOG_H
