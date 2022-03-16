#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    void DbClose(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool DbOpen(){

        db.setDatabaseName("db.sqlite");

        if(!db.open()) {
          qDebug()<<("Failed");
          return false;
        }else{
            qDebug()<<("Success");
            return true;
        }
    }
private slots:
    void on_Admin_DeleteBtn_clicked();

    void on_Admin_Load_clicked();

    void on_Admin_SearchBtn_clicked();

    void on_Admin_add_btn_clicked();

    void on_Admin_HomeBtn_clicked();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
