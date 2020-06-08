#include "problemwindow.h"
#include "ui_problemwindow.h"

ProblemWindow::ProblemWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProblemWindow)
{
    ui->setupUi(this);
}

ProblemWindow::~ProblemWindow()
{
    delete ui;
}

void ProblemWindow::on_ConfirmProblemButton_clicked()
{
    hide();
    method = new MethodsDialog(this);
    method->show();
}
