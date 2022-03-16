#ifndef HOME_H
#define HOME_H

#include <QDialog>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "ui_home.h"
#include "about.h"
#include "ui_about.h"

namespace Ui {
class Home;
}

class Home : public QDialog
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private slots:
    void on_HomeSearchBtn_clicked();

    void on_AdminBtn_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_AboutBtn_clicked();

private:
    Ui::Home *ui;
};

#endif // HOME_H
