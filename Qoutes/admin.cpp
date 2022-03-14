#include "admin.h"
#include "ui_admin.h"
#include "home.h"
#include "ui_home.h"
Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}


void AdminAddToAuthor(QString AuthorID,QString QuoteID, QString AuthorName){
    Admin conn;


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
void AdminAddToGenQuote (QString QuoteID,QString Quote,QString SourceID,QString GenreID,QString Genre){
    Admin conn;
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
void AdminAddToQuote (QString QuoteID,QString Quote,QString SourceID,QString GenreID,QString Genre){
    Admin conn;
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
void  AdminAddToQuote (QString QuoteID,QString Quote,QString SourceID,QString GenreID){
    Admin conn;
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
void AdminAddToGenre (QString GenreID,QString Genre){
    Admin conn;
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
void AdminAddToSource  (QString SourceID,QString Title,QString Source,QString SourceType){
    Admin conn;
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


void Admin::on_Admin_Load_clicked()
{
    Admin conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID");

    qry->exec();

    model->setQuery(*qry);

    ui->Admin_QuotesTable->setModel(model);
    ui->Admin_QuotesTable->show();

    qry->clear();
    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << (model->rowCount());


}

bool VerifyID(QString entry){
    Admin conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);


    qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID where AuthorID='"+entry+"'");
    qry->exec();

    model->setQuery(*qry);



    qry->clear();
    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << (model->rowCount());

    if( (model->rowCount()) == 0){
            return true;
    }else{
            return false;
    }
}
void Admin::on_Admin_SearchBtn_clicked()
{
    Admin conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);
    QString entry = ui->Admin_Search_TextBox->text();

    qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID where AuthorName='"+entry+"'");
    qry->exec();

    model->setQuery(*qry);

    ui->Admin_QuotesTable->setModel(model);
    ui->Admin_QuotesTable->show();

    qry->clear();
    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << (model->rowCount());

}

void Admin::on_Admin_DeleteBtn_clicked()
{
        Admin conn;
        QSqlQueryModel *model = new QSqlQueryModel();

        conn.DbOpen();
        QSqlQuery* qry = new QSqlQuery(conn.db);
        QString entry = ui->Admin_Search_TextBox->text();

        qry->prepare("DELETE from AUTHOR where AuthorName='"+entry+"'");
        qry->exec();

        model->setQuery(*qry);

        ui->Admin_QuotesTable->setModel(model);
        ui->Admin_QuotesTable->show();

        qry->clear();
        conn.DbClose();
        QSqlDatabase::removeDatabase("qt_sql_default_connection");
        qDebug() << (model->rowCount());

}

void Admin::on_Admin_add_btn_clicked()
{
        bool checkID;
        QString AuthorName,AuthorID,QuoteID,SourceID,GenreID,Quote,Genre,Title,Source,SourceType;
        QString entry;
        AuthorName = ui->Admin_Author_textBox->text();
        Quote = ui->Admin_QuoteTxtbox->text();
        Title = ui->Admin_TitleTxtbox->text();
        Source = ui->Admin_SourceTxtbox->text();
        SourceType = ui->Admin_SourceTypeTxtbox->text();
        Genre = ui->Admin_GenreTxtbox->text();

        int rand = qrand() % 1000;

        while((checkID=false)){
              rand = qrand() % 1000;
              checkID = VerifyID(QString::number(rand));
        }



        AuthorID = QString::number(rand);
        QuoteID = AuthorID;
        SourceID = AuthorID;
        GenreID = AuthorID;


        AdminAddToAuthor(AuthorID,QuoteID,AuthorName);
        AdminAddToGenQuote (QuoteID,Quote,SourceID,GenreID,Genre);
        AdminAddToQuote (QuoteID,Quote,SourceID,GenreID);
        AdminAddToGenre (GenreID,Genre);
        AdminAddToSource (SourceID,Title,Source,SourceType);




}

void Admin::on_Admin_HomeBtn_clicked()
{
    Home h;
    h.setModal(true);
    this->hide();
    h.exec();
}

