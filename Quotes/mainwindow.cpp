#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    // Setup the database
        db = QSqlDatabase::addDatabase("QSQLITE");
        QString db_path = "C:/Users/markd/OneDrive/Documents/SPU/Applications Programming/Quotes/QuotesDB.db3";
        db.setDatabaseName(db_path);
        db.open();
        if (db.isOpen()) {
            qDebug() << "Connection worked!";
        } else {
            qDebug() << "Error: connection failed!";
        }

        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);

        //QString q1 = "select Task.Name, Task.Desc, Project.Name, Task.DueDate, Task.Status from Task ";
        //q1 += "inner join Project on Task.ProjectId=Project.ProjectId";

        //QString q2 = "select t.TaskId, t.Name, t.Desc, p.Name, t.DueDate, t.Status";
        //q2 += " from Task t, Project p";
        //q2 += " where t.ProjectId = p.ProjectId";

        //qry->prepare(q2);

        //qry->exec();
       // model->setQuery(*qry);

        ui->TaskTable->setModel(model);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAdd_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_actionDelete_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_actionSearch_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_4_clicked()
{
    deleteUI = new Delete_Subwindow(this);
    deleteUI->setModal(true);   // Makes it so that you can't click out of this
    deleteUI->exec();
}


void MainWindow::on_actionQuit_triggered()
{
    close();
}


void MainWindow::on_pushButton_2_clicked()
{
    searchUI = new SearchDisplay(this);
    searchUI->setModal(true);   // Makes it so that you can't click out of this
    searchUI->exec();
}


void MainWindow::on_actionEdit_triggered()
{
    ui->stackedWidget->setCurrentIndex(3);
}

