#include "search.h"
#include "ui_search.h"
#include "ui_home.h"
#include "home.h"

search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_Search_homeBtn_clicked()
{
    Home h;
    h.setModal(true);
    this->hide();
    h.exec();

}



void search::on_Search_AdminBtn_clicked()
{
    Admin admin;
    admin.setModal(true);
    this->hide();
    admin.exec();
}


void search::on_Search_AboutBtn_clicked()
{
    About about;
    about.setModal(true);
    this->hide();
    about.exec();
}


void search::on_Search_HomeBtn_clicked()
{
    Home h;
    h.setModal(true);
    this->hide();
    h.exec();
}

