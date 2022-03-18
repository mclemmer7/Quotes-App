/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QPushButton *Admin_add_btn;
    QLineEdit *Admin_Author_textBox;
    QLineEdit *Admin_SourceTypeTxtbox;
    QLineEdit *Admin_QuoteTxtbox;
    QPushButton *Admin_SearchBtn;
    QLineEdit *Admin_GenreTxtbox;
    QLineEdit *Admin_TitleTxtbox;
    QLineEdit *Admin_SourceTxtbox;
    QPushButton *Admin_Load;
    QTableView *Admin_QuotesTable;
    QLineEdit *Admin_Search_TextBox;
    QPushButton *Admin_DeleteBtn;
    QLabel *label;
    QPushButton *Admin_AdminBtn;
    QPushButton *Admin_AboutBtn;
    QPushButton *Admin_HomeBtn;
    QLabel *label_2;
    QPushButton *Admin_EditBtn;
    QPushButton *Admin_ConfirmDltBtn;
    QPushButton *Admin_CancelBtn;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *Admin_AElbl;
    QPushButton *Admin_ConfirmAddBtn;
    QPushButton *Admin_FindBtn;
    QLineEdit *Admin_AuthorID_textBox;
    QPushButton *Admin_ConfirmEditBtn;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(900, 600);
        Admin_add_btn = new QPushButton(Admin);
        Admin_add_btn->setObjectName(QString::fromUtf8("Admin_add_btn"));
        Admin_add_btn->setGeometry(QRect(750, 140, 100, 60));
        Admin_Author_textBox = new QLineEdit(Admin);
        Admin_Author_textBox->setObjectName(QString::fromUtf8("Admin_Author_textBox"));
        Admin_Author_textBox->setGeometry(QRect(230, 400, 501, 24));
        Admin_SourceTypeTxtbox = new QLineEdit(Admin);
        Admin_SourceTypeTxtbox->setObjectName(QString::fromUtf8("Admin_SourceTypeTxtbox"));
        Admin_SourceTypeTxtbox->setGeometry(QRect(230, 550, 501, 24));
        Admin_QuoteTxtbox = new QLineEdit(Admin);
        Admin_QuoteTxtbox->setObjectName(QString::fromUtf8("Admin_QuoteTxtbox"));
        Admin_QuoteTxtbox->setGeometry(QRect(230, 430, 501, 24));
        Admin_SearchBtn = new QPushButton(Admin);
        Admin_SearchBtn->setObjectName(QString::fromUtf8("Admin_SearchBtn"));
        Admin_SearchBtn->setGeometry(QRect(750, 90, 100, 40));
        Admin_GenreTxtbox = new QLineEdit(Admin);
        Admin_GenreTxtbox->setObjectName(QString::fromUtf8("Admin_GenreTxtbox"));
        Admin_GenreTxtbox->setGeometry(QRect(230, 460, 501, 24));
        Admin_TitleTxtbox = new QLineEdit(Admin);
        Admin_TitleTxtbox->setObjectName(QString::fromUtf8("Admin_TitleTxtbox"));
        Admin_TitleTxtbox->setGeometry(QRect(230, 490, 501, 24));
        Admin_SourceTxtbox = new QLineEdit(Admin);
        Admin_SourceTxtbox->setObjectName(QString::fromUtf8("Admin_SourceTxtbox"));
        Admin_SourceTxtbox->setGeometry(QRect(230, 520, 501, 24));
        Admin_Load = new QPushButton(Admin);
        Admin_Load->setObjectName(QString::fromUtf8("Admin_Load"));
        Admin_Load->setGeometry(QRect(750, 210, 100, 60));
        Admin_QuotesTable = new QTableView(Admin);
        Admin_QuotesTable->setObjectName(QString::fromUtf8("Admin_QuotesTable"));
        Admin_QuotesTable->setGeometry(QRect(30, 140, 701, 251));
        Admin_Search_TextBox = new QLineEdit(Admin);
        Admin_Search_TextBox->setObjectName(QString::fromUtf8("Admin_Search_TextBox"));
        Admin_Search_TextBox->setGeometry(QRect(30, 90, 701, 40));
        Admin_DeleteBtn = new QPushButton(Admin);
        Admin_DeleteBtn->setObjectName(QString::fromUtf8("Admin_DeleteBtn"));
        Admin_DeleteBtn->setGeometry(QRect(750, 280, 100, 60));
        label = new QLabel(Admin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 121, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        Admin_AdminBtn = new QPushButton(Admin);
        Admin_AdminBtn->setObjectName(QString::fromUtf8("Admin_AdminBtn"));
        Admin_AdminBtn->setGeometry(QRect(790, 10, 101, 24));
        QFont font1;
        font1.setPointSize(12);
        Admin_AdminBtn->setFont(font1);
        Admin_AdminBtn->setFlat(true);
        Admin_AboutBtn = new QPushButton(Admin);
        Admin_AboutBtn->setObjectName(QString::fromUtf8("Admin_AboutBtn"));
        Admin_AboutBtn->setGeometry(QRect(700, 10, 80, 24));
        Admin_AboutBtn->setFont(font1);
        Admin_AboutBtn->setFlat(true);
        Admin_HomeBtn = new QPushButton(Admin);
        Admin_HomeBtn->setObjectName(QString::fromUtf8("Admin_HomeBtn"));
        Admin_HomeBtn->setGeometry(QRect(610, 10, 80, 24));
        Admin_HomeBtn->setFont(font1);
        Admin_HomeBtn->setFlat(true);
        label_2 = new QLabel(Admin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 10, 901, 81));
        QFont font2;
        font2.setPointSize(32);
        font2.setBold(true);
        font2.setItalic(false);
        label_2->setFont(font2);
        label_2->setAutoFillBackground(false);
        label_2->setAlignment(Qt::AlignCenter);
        Admin_EditBtn = new QPushButton(Admin);
        Admin_EditBtn->setObjectName(QString::fromUtf8("Admin_EditBtn"));
        Admin_EditBtn->setGeometry(QRect(750, 350, 100, 60));
        Admin_ConfirmDltBtn = new QPushButton(Admin);
        Admin_ConfirmDltBtn->setObjectName(QString::fromUtf8("Admin_ConfirmDltBtn"));
        Admin_ConfirmDltBtn->setGeometry(QRect(750, 420, 100, 60));
        Admin_CancelBtn = new QPushButton(Admin);
        Admin_CancelBtn->setObjectName(QString::fromUtf8("Admin_CancelBtn"));
        Admin_CancelBtn->setGeometry(QRect(750, 490, 100, 60));
        label_3 = new QLabel(Admin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(148, 400, 81, 21));
        QFont font3;
        font3.setBold(true);
        label_3->setFont(font3);
        label_4 = new QLabel(Admin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(148, 430, 81, 21));
        label_4->setFont(font3);
        label_5 = new QLabel(Admin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(148, 460, 81, 21));
        label_5->setFont(font3);
        label_6 = new QLabel(Admin);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(148, 490, 81, 21));
        label_6->setFont(font3);
        label_7 = new QLabel(Admin);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(148, 520, 81, 21));
        label_7->setFont(font3);
        label_8 = new QLabel(Admin);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(148, 550, 81, 21));
        label_8->setFont(font3);
        Admin_AElbl = new QLabel(Admin);
        Admin_AElbl->setObjectName(QString::fromUtf8("Admin_AElbl"));
        Admin_AElbl->setGeometry(QRect(40, 440, 191, 100));
        QFont font4;
        font4.setPointSize(24);
        font4.setBold(true);
        Admin_AElbl->setFont(font4);
        Admin_ConfirmAddBtn = new QPushButton(Admin);
        Admin_ConfirmAddBtn->setObjectName(QString::fromUtf8("Admin_ConfirmAddBtn"));
        Admin_ConfirmAddBtn->setGeometry(QRect(750, 420, 100, 60));
        Admin_FindBtn = new QPushButton(Admin);
        Admin_FindBtn->setObjectName(QString::fromUtf8("Admin_FindBtn"));
        Admin_FindBtn->setGeometry(QRect(750, 420, 100, 60));
        Admin_AuthorID_textBox = new QLineEdit(Admin);
        Admin_AuthorID_textBox->setObjectName(QString::fromUtf8("Admin_AuthorID_textBox"));
        Admin_AuthorID_textBox->setGeometry(QRect(230, 400, 501, 24));
        Admin_ConfirmEditBtn = new QPushButton(Admin);
        Admin_ConfirmEditBtn->setObjectName(QString::fromUtf8("Admin_ConfirmEditBtn"));
        Admin_ConfirmEditBtn->setGeometry(QRect(750, 490, 100, 60));
        label_2->raise();
        Admin_add_btn->raise();
        Admin_Author_textBox->raise();
        Admin_SourceTypeTxtbox->raise();
        Admin_QuoteTxtbox->raise();
        Admin_SearchBtn->raise();
        Admin_GenreTxtbox->raise();
        Admin_TitleTxtbox->raise();
        Admin_SourceTxtbox->raise();
        Admin_Load->raise();
        Admin_QuotesTable->raise();
        Admin_Search_TextBox->raise();
        Admin_DeleteBtn->raise();
        label->raise();
        Admin_AdminBtn->raise();
        Admin_AboutBtn->raise();
        Admin_HomeBtn->raise();
        Admin_EditBtn->raise();
        Admin_ConfirmDltBtn->raise();
        Admin_CancelBtn->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        Admin_AElbl->raise();
        Admin_ConfirmAddBtn->raise();
        Admin_FindBtn->raise();
        Admin_AuthorID_textBox->raise();
        Admin_ConfirmEditBtn->raise();

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "Dialog", nullptr));
        Admin_add_btn->setText(QApplication::translate("Admin", "Add", nullptr));
        Admin_Author_textBox->setText(QString());
        Admin_SourceTypeTxtbox->setText(QString());
        Admin_QuoteTxtbox->setText(QString());
        Admin_SearchBtn->setText(QApplication::translate("Admin", "Search", nullptr));
        Admin_GenreTxtbox->setText(QString());
        Admin_TitleTxtbox->setText(QString());
        Admin_SourceTxtbox->setText(QString());
        Admin_Load->setText(QApplication::translate("Admin", "Load All", nullptr));
        Admin_DeleteBtn->setText(QApplication::translate("Admin", "Delete", nullptr));
        label->setText(QApplication::translate("Admin", "iQuotes", nullptr));
        Admin_AdminBtn->setText(QApplication::translate("Admin", "Menu", nullptr));
        Admin_AboutBtn->setText(QApplication::translate("Admin", "About", nullptr));
        Admin_HomeBtn->setText(QApplication::translate("Admin", "Home", nullptr));
        label_2->setText(QApplication::translate("Admin", "Menu", nullptr));
        Admin_EditBtn->setText(QApplication::translate("Admin", "Edit", nullptr));
        Admin_ConfirmDltBtn->setText(QApplication::translate("Admin", "Confirm", nullptr));
        Admin_CancelBtn->setText(QApplication::translate("Admin", "Cancel", nullptr));
        label_3->setText(QApplication::translate("Admin", "Author :", nullptr));
        label_4->setText(QApplication::translate("Admin", "Quote :", nullptr));
        label_5->setText(QApplication::translate("Admin", "Genre :", nullptr));
        label_6->setText(QApplication::translate("Admin", "Title :", nullptr));
        label_7->setText(QApplication::translate("Admin", "Source :", nullptr));
        label_8->setText(QApplication::translate("Admin", "Source Type :", nullptr));
        Admin_AElbl->setText(QString());
        Admin_ConfirmAddBtn->setText(QApplication::translate("Admin", "Confirm", nullptr));
        Admin_FindBtn->setText(QApplication::translate("Admin", "Find", nullptr));
        Admin_AuthorID_textBox->setText(QString());
        Admin_ConfirmEditBtn->setText(QApplication::translate("Admin", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
