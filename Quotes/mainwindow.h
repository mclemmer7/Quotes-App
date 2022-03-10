#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDataWidgetMapper>
#include <QSqlError>
#include <QLineEdit>
#include <QDebug>

#include <delete_subwindow.h>
#include <searchdisplay.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAdd_triggered();

    void on_actionDelete_triggered();

    void on_actionSearch_triggered();

    void on_pushButton_4_clicked();

    void on_actionQuit_triggered();

    void on_pushButton_2_clicked();

    void on_actionEdit_triggered();

private:
    enum PAGES {SEARCH,ADD,DELETE,EDIT};
    Ui::MainWindow *ui;
    Delete_Subwindow *deleteUI;
    SearchDisplay *searchUI;
};
#endif // MAINWINDOW_H
