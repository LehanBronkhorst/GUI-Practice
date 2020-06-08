#include "simplexwindow.h"
#include "ui_simplexwindow.h"

SimplexWindow::SimplexWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SimplexWindow)
{
    ui->setupUi(this);
}

SimplexWindow::~SimplexWindow()
{
    delete ui;
}


/*void SimplexWindow::on_SimplexNewButton_clicked()
{
    hide();
    problem->sh
}*/
