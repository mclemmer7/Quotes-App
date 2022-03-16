#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
}

About::~About()
{
    delete ui;
}

void About::on_About_HomeBtn_clicked()
{
    Home h;
    h.setModal(true);
    this->hide();
    h.exec();
}


void About::on_About_AdminBtn_clicked()
{
    Admin admin;

    admin.setModal(true);
    this->hide();
    admin.exec();
}

