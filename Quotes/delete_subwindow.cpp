#include "delete_subwindow.h"
#include "ui_delete_subwindow.h"

Delete_Subwindow::Delete_Subwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_Subwindow)
{
    ui->setupUi(this);
}

Delete_Subwindow::~Delete_Subwindow()
{
    delete ui;
}
