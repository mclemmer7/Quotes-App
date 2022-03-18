#ifndef ABOUT_H
#define ABOUT_H
#include "admin.h"
#include "ui_admin.h"
#include "home.h"
#include "ui_home.h"
#include <QDialog>

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();

private slots:
    void on_About_HomeBtn_clicked();

    void on_About_AdminBtn_clicked();

private:
    Ui::About *ui;
};

#endif // ABOUT_H
