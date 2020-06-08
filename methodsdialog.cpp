#include "methodsdialog.h"
#include "ui_methodsdialog.h"

MethodsDialog::MethodsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MethodsDialog)
{
    ui->setupUi(this);
}

MethodsDialog::~MethodsDialog()
{
    delete ui;
}



void MethodsDialog::on_SimplexButton_clicked()
{
    hide();
    simplex = new SimplexWindow(this);
    simplex->show();
}

void MethodsDialog::on_pushButton_clicked()
{
    hide();
    branch = new BranchWindow(this);
    branch->show();
}
