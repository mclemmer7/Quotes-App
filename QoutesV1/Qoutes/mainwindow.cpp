#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <iostream>
#include <random>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




}

MainWindow::~MainWindow(){

    db.removeDatabase("qt_sql_default_connection");
  //  db.removeDatabase("https://spuonline-my.sharepoint.com/:u:/g/personal/cabanillaj_spu_edu/EQzGlBvpxGFJgL4N8vv9h_wB7KHIWSs4uP7bl338OMGOQw?e=PLiEN8");
}


void MainWindow::on_Load_clicked()

{
    MainWindow conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID");

    qry->exec();

    model->setQuery(*qry);

    ui->QuotesTable->setModel(model);
    ui->QuotesTable->show();

    qry->clear();
    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << (model->rowCount());




}

void AddToAuthor(QString AuthorID,QString QuoteID, QString AuthorName){
    MainWindow conn;


    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    QString entry;

    entry = "INSERT INTO AUTHOR values (" +AuthorID+ "," +QuoteID+ ",'" +AuthorName+ "') ";
    qry->prepare(entry);
    qry->exec();
    qry->clear();


    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << "Added to Author";
}
void AddToGenQuote (QString QuoteID,QString Quote,QString SourceID,QString GenreID,QString Genre){
    MainWindow conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    QString entry;

    entry = "INSERT INTO GENQUOTE values (" +QuoteID+ ",'" +Quote+ "'," +SourceID+ ","+ GenreID+",'"+ Genre+"')";
    qry->prepare(entry);
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << "Added to Qoute";
}
void AddToQuote (QString QuoteID,QString Quote,QString SourceID,QString GenreID,QString Genre){
    MainWindow conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    QString entry;

    entry = "INSERT INTO GENQUOTE values (" +QuoteID+ ",'" +Quote+ "'," +SourceID+ ","+ GenreID+",'"+ Genre+"')";
    qry->prepare(entry);
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << "Added to Qoute";
}
void  AddToQuote (QString QuoteID,QString Quote,QString SourceID,QString GenreID){
    MainWindow conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    QString entry;

    entry = "INSERT INTO QUOTE values (" +QuoteID+ ",'" +Quote+ "'," +SourceID+ ","+ GenreID+")";
    qry->prepare(entry);
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << "Added to Qoute";
}
void  AddToGenre (QString GenreID,QString Genre){
    MainWindow conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    QString entry;

    entry = "INSERT INTO GENRE values ("+ GenreID+",'"+ Genre+"')";
    qry->prepare(entry);
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << "Added to Qoute";
}
void AddToSource  (QString SourceID,QString Title,QString Source,QString SourceType){
    MainWindow conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    QString entry;

    entry = "INSERT INTO SOURCE values (" +SourceID+ ",'" +Title+ "','" +Source+ "','"+SourceType+"')";
    qry->prepare(entry);
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << "Added to Qoute";
}


void MainWindow::on_add_btn_clicked()
{
//    MainWindow conn;
//    QSqlQueryModel *model = new QSqlQueryModel();

//    conn.DbOpen();
//    QSqlQuery* qry = new QSqlQuery(conn.db);

    QString AuthorName,AuthorID,QuoteID,SourceID,GenreID,Quote,Genre,Title,Source,SourceType;
    QString entry;
    AuthorName = ui->Author_textBox->text();
    Quote = ui->QuoteTxtbox->text();
    Title = ui->TitleTxtbox->text();
    Source = ui->SourceTxtbox->text();
    SourceType = ui->SourceTypeTxtbox->text();
    Genre = ui->GenreTxtbox->text();

    int rand = qrand() % 1000;
    AuthorID = QString::number(rand);
    QuoteID = AuthorID;
    SourceID = AuthorID;
    GenreID = AuthorID;


    AddToAuthor(AuthorID,QuoteID,AuthorName);
    AddToGenQuote (QuoteID,Quote,SourceID,GenreID,Genre);
    AddToQuote (QuoteID,Quote,SourceID,GenreID);
    AddToGenre (GenreID,Genre);
    AddToSource (SourceID,Title,Source,SourceType);







//    conn.DbClose();
//    QSqlDatabase::removeDatabase("qt_sql_default_connection");
//    qDebug() << (model->rowCount());

}
void MainWindow::on_SearchBtn_clicked()
{
    MainWindow conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);
    QString entry = ui->Search_TextBox->text();

    qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID where AuthorName='"+entry+"'");
    qry->exec();

    model->setQuery(*qry);

    ui->QuotesTable->setModel(model);
    ui->QuotesTable->show();

    qry->clear();
    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << (model->rowCount());


}
void MainWindow::on_DeleteBtn_clicked()
{
    MainWindow conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);
    QString entry = ui->Search_TextBox->text();

    qry->prepare("DELETE from AUTHOR where AuthorName='"+entry+"'");
    qry->exec();

    model->setQuery(*qry);

    ui->QuotesTable->setModel(model);
    ui->QuotesTable->show();

    qry->clear();
    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << (model->rowCount());

}

