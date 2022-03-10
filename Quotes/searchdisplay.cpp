#include "searchdisplay.h"
#include "ui_searchdisplay.h"

SearchDisplay::SearchDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDisplay)
{
    ui->setupUi(this);
}

SearchDisplay::~SearchDisplay()
{
    delete ui;
}
