#include "branchwindow.h"
#include "ui_branchwindow.h"

BranchWindow::BranchWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BranchWindow)
{
    ui->setupUi(this);
}

BranchWindow::~BranchWindow()
{
    delete ui;
}
