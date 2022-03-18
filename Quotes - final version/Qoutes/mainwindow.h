#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QtSql>
#include <QMainWindow>
#include <QtDebug>
#include <QFileInfo>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
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
    ~MainWindow();

private slots:
    void on_Load_clicked();

    void on_add_btn_clicked();

    void on_SearchBtn_clicked();

    void on_DeleteBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
