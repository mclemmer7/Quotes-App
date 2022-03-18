#include "admin.h"
#include "ui_admin.h"
#include "home.h"
#include "ui_home.h"
Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);

    ui->label_3->setText("");
    ui->label_4->setText("");
    ui->label_5->setText("");
    ui->label_6->setText("");
    ui->label_7->setText("");
    ui->label_8->setText("");
    ui->Admin_QuoteTxtbox->hide();
    ui->Admin_Author_textBox->hide();
    ui->Admin_GenreTxtbox->hide();
    ui->Admin_SourceTxtbox->hide();
    ui->Admin_SourceTypeTxtbox->hide();
    ui->Admin_TitleTxtbox->hide();

    ui->Admin_CancelBtn->hide();
    ui->Admin_ConfirmDltBtn->hide();
    ui->Admin_ConfirmAddBtn->hide();

    ui->Admin_AuthorID_textBox->hide();
    ui->Admin_FindBtn->hide();
    ui->Admin_ConfirmEditBtn->hide();
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

void AdminDeleteToAuthor(QString AuthorID){
    Admin conn;

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);
    qry->prepare("Delete from AUTHOR where AuthorID='"+AuthorID+"'");
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");

}
void AdminDeleteToGenQuote (QString QuoteID){
    Admin conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("Delete from GENQUOTE where QuoteID='"+QuoteID+"'");
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");

}
void AdminDeleteToQuote (QString QuoteID){
    Admin conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("Delete from QUOTE where QuoteID='"+QuoteID+"'");
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");

}
void AdminDeleteToGenre (QString GenreID){
    Admin conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("Delete from GENRE where GenreID='"+GenreID+"'");
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");

}
void AdminDeleteToSource  (QString SourceID){
    Admin conn;
    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("Delete from SOURCE where SourceID='"+SourceID+"'");
    qry->exec();
    qry->clear();

    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");

}

void Admin::on_Admin_Load_clicked(){
    Admin conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("select AUTHOR.AuthorID,AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID");

    qry->exec();

    model->setQuery(*qry);

    ui->Admin_QuotesTable->setModel(model);
    ui->Admin_QuotesTable->show();

    qry->clear();
    conn.DbClose();
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    qDebug() << (model->rowCount());




    ui->label_3->setText("");
    ui->label_4->setText("");
    ui->label_5->setText("");
    ui->label_6->setText("");
    ui->label_7->setText("");
    ui->label_8->setText("");
    ui->Admin_QuoteTxtbox->hide();
    ui->Admin_Author_textBox->hide();
    ui->Admin_GenreTxtbox->hide();
    ui->Admin_SourceTxtbox->hide();
    ui->Admin_SourceTypeTxtbox->hide();
    ui->Admin_TitleTxtbox->hide();

    ui->Admin_CancelBtn->hide();
    ui->Admin_ConfirmDltBtn->hide();

    ui->Admin_AElbl->setText("");

    ui->Admin_AuthorID_textBox->hide();
    ui->Admin_FindBtn->hide();
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
    ui->Admin_CancelBtn->hide();
    ui->Admin_ConfirmDltBtn->hide();

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
        ui->label_3->setText("Author ID");
        ui->Admin_AElbl->setText("DELETE");
        ui->Admin_Author_textBox->show();
        ui->Admin_Author_textBox->setText("");
        ui->Admin_CancelBtn->show();
        ui->Admin_ConfirmDltBtn->show();


        ui->label_4->setText("");
        ui->label_5->setText("");
        ui->label_6->setText("");
        ui->label_7->setText("");
        ui->label_8->setText("");
        ui->Admin_QuoteTxtbox->hide();
        ui->Admin_GenreTxtbox->hide();
        ui->Admin_SourceTxtbox->hide();
        ui->Admin_SourceTypeTxtbox->hide();
        ui->Admin_TitleTxtbox->hide();

        ui->Admin_AuthorID_textBox->show();
        ui->Admin_FindBtn->hide();
}

void Admin::on_Admin_add_btn_clicked()
{


    ui->label_3->setText("Author :");
    ui->label_4->setText("Quote :");
    ui->label_5->setText("Genre :");
    ui->label_6->setText("Title :");
    ui->label_7->setText("Source");
    ui->label_8->setText("Source Type :");
    ui->Admin_QuoteTxtbox->show();
    ui->Admin_Author_textBox->show();
    ui->Admin_GenreTxtbox->show();
    ui->Admin_SourceTxtbox->show();
    ui->Admin_SourceTypeTxtbox->show();
    ui->Admin_TitleTxtbox->show();

    ui->Admin_CancelBtn->show();
    ui->Admin_ConfirmAddBtn->show();
    ui->Admin_AElbl->setText("ADD");

    ui->Admin_AuthorID_textBox->show();
    ui->Admin_FindBtn->hide();



}
void Admin::on_Admin_HomeBtn_clicked()
{
    Home h;
    h.setModal(true);
    this->hide();
    h.exec();
}
void Admin::on_Admin_AboutBtn_clicked()
{
    About about;
    about.setModal(true);
    this->hide();
    about.exec();
}

void Admin::on_Admin_ConfirmDltBtn_clicked()
{

    QString entry = ui->Admin_Author_textBox->text();

    AdminDeleteToAuthor(entry);
    AdminDeleteToGenQuote(entry);
    AdminDeleteToGenre(entry);
    AdminDeleteToQuote(entry);
    AdminDeleteToSource(entry);
    ui->Admin_Author_textBox->setText("");
}
void Admin::on_Admin_CancelBtn_clicked()
{

    ui->label_3->setText("");
    ui->label_4->setText("");
    ui->label_5->setText("");
    ui->label_6->setText("");
    ui->label_7->setText("");
    ui->label_8->setText("");
    ui->Admin_QuoteTxtbox->hide();
    ui->Admin_Author_textBox->hide();
    ui->Admin_GenreTxtbox->hide();
    ui->Admin_SourceTxtbox->hide();
    ui->Admin_SourceTypeTxtbox->hide();
    ui->Admin_TitleTxtbox->hide();

    ui->Admin_CancelBtn->hide();
    ui->Admin_ConfirmDltBtn->hide();
    ui->Admin_ConfirmAddBtn->hide();
    ui->Admin_AElbl->setText("");

    ui->Admin_AuthorID_textBox->hide();
    ui->Admin_FindBtn->hide();
}
void Admin::on_Admin_ConfirmAddBtn_clicked()
{
    bool checkID;

    ui->Admin_AElbl->setText("ADD");
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



void Admin::on_Admin_EditBtn_clicked()
{
    ui->label_3->show();
    ui->label_3->setText("AuthorID");
    ui->Admin_AElbl->setText("EDIT");
    ui->Admin_AuthorID_textBox->show();
    ui->Admin_FindBtn->show();
}


void Admin::on_Admin_FindBtn_clicked()
{
    Admin conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.DbOpen();
    QSqlQuery* qry = new QSqlQuery(conn.db);
    QString entry = ui->Admin_AuthorID_textBox->text();

    qry->prepare("select AUTHOR.AuthorName,QUOTE.Quote,GENQUOTE.Genre,SOURCE.Title,SOURCE.Source,SOURCE.SourceType from AUTHOR join QUOTE on QUOTE.QuoteID = AUTHOR.QuoteID join GENQUOTE on QUOTE.QuoteID = GENQUOTE.QuoteID join SOURCE on QUOTE.SourceID = SOURCE.SourceID where AuthorID='"+entry+"'");
    qry->exec();



    if(qry->exec()){
        while(qry->next()){
            ui->Admin_Author_textBox->setText(qry->value(0).toString());
            ui->Admin_QuoteTxtbox->setText(qry->value(1).toString());
            ui->Admin_GenreTxtbox->setText(qry->value(2).toString());
            ui->Admin_TitleTxtbox->setText(qry->value(3).toString());
            ui->Admin_SourceTxtbox->setText(qry->value(4).toString());
            ui->Admin_SourceTypeTxtbox->setText(qry->value(5).toString());
        }

        qry->clear();
        conn.DbClose();
        QSqlDatabase::removeDatabase("qt_sql_default_connection");
    }
    ui->Admin_AuthorID_textBox->hide();
    ui->label_3->setText("Author :");
    ui->label_4->setText("Quote :");
    ui->label_5->setText("Genre :");
    ui->label_6->setText("Title :");
    ui->label_7->setText("Source");
    ui->label_8->setText("Source Type :");
    ui->Admin_QuoteTxtbox->show();
    ui->Admin_Author_textBox->show();
    ui->Admin_GenreTxtbox->show();
    ui->Admin_SourceTxtbox->show();
    ui->Admin_SourceTypeTxtbox->show();
    ui->Admin_TitleTxtbox->show();

    ui->Admin_ConfirmEditBtn->show();
    ui->Admin_FindBtn->hide();




}


void Admin::on_Admin_ConfirmEditBtn_clicked()
{

}

