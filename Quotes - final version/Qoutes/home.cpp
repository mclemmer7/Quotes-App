#include "home.h"
#include "ui_home.h"
#include "search.h"
#include "admin.h"
#include "ui_admin.h"
#include <QMessageBox>
#include "about.h"
#include "ui_about.h"
Home::Home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}

void Home::on_HomeSearchBtn_clicked()
{
    QString entry;
    QString cat;
    entry = ui->HomeSearch_TextBox->text();

    search Search;

    if(ui->AuthorRdBtn->isChecked()){
        cat = "author";
    }else if(ui->TagRdBtn->isChecked()){
        cat = "tag";
    }else if(ui->KeywordRdBtn->isChecked()){
        cat = "key";
    }

    Search.ShowSearch(entry,cat);
    this->hide();
    Search.setModal(true);
    Search.exec();

}

void Home::on_AdminBtn_clicked()
{
     Admin admin;

     admin.setModal(true);
     this->hide();
     admin.exec();

}

void Home::on_AboutBtn_clicked()
{
    About about;
    about.setModal(true);
    this->hide();
    about.exec();

}

