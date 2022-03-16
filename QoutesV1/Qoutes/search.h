#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include "admin.h"
#include "ui_search.h"

namespace Ui {
class search;
}

class search : public QDialog
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();
    void ShowSearch(QString entry,QString cat){

        Admin conn;
        QSqlQueryModel *model = new QSqlQueryModel();

        conn.DbOpen();
        QSqlQuery* qry = new QSqlQuery(conn.db);

        if(cat == "author"){
            qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID where AuthorName like '%"+entry+"%'");
            qry->exec();

            model->setQuery(*qry);

            ui->Search_tableView->setModel(model);
            ui->Search_tableView->show();

            qry->clear();
            conn.DbClose();
            QSqlDatabase::removeDatabase("qt_sql_default_connection");
            qDebug() << (model->rowCount());
        }else if(cat == "tag"){
            qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID where GENQUOTE.Genre like '%"+entry+"%'");
            qry->exec();

            model->setQuery(*qry);

            ui->Search_tableView->setModel(model);
            ui->Search_tableView->show();

            qry->clear();
            conn.DbClose();
            QSqlDatabase::removeDatabase("qt_sql_default_connection");
            qDebug() << (model->rowCount());
        }else if(cat == "key"){
            qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID where QUOTE.Quote like '%"+entry+"%'");
            qry->exec();

            model->setQuery(*qry);

            ui->Search_tableView->setModel(model);
            ui->Search_tableView->show();

            qry->clear();
            conn.DbClose();
            QSqlDatabase::removeDatabase("qt_sql_default_connection");
            qDebug() << (model->rowCount());
        }


    }

private slots:
    void on_Search_homeBtn_clicked();

private:
    Ui::search *ui;
};

#endif // SEARCH_H
