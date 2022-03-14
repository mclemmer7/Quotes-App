/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
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
    QPushButton *Admin_HomeBtn;
    QLabel *label;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(900, 600);
        Admin_add_btn = new QPushButton(Admin);
        Admin_add_btn->setObjectName(QString::fromUtf8("Admin_add_btn"));
        Admin_add_btn->setGeometry(QRect(550, 430, 80, 24));
        Admin_Author_textBox = new QLineEdit(Admin);
        Admin_Author_textBox->setObjectName(QString::fromUtf8("Admin_Author_textBox"));
        Admin_Author_textBox->setGeometry(QRect(30, 400, 501, 24));
        Admin_SourceTypeTxtbox = new QLineEdit(Admin);
        Admin_SourceTypeTxtbox->setObjectName(QString::fromUtf8("Admin_SourceTypeTxtbox"));
        Admin_SourceTypeTxtbox->setGeometry(QRect(30, 550, 501, 24));
        Admin_QuoteTxtbox = new QLineEdit(Admin);
        Admin_QuoteTxtbox->setObjectName(QString::fromUtf8("Admin_QuoteTxtbox"));
        Admin_QuoteTxtbox->setGeometry(QRect(30, 430, 501, 24));
        Admin_SearchBtn = new QPushButton(Admin);
        Admin_SearchBtn->setObjectName(QString::fromUtf8("Admin_SearchBtn"));
        Admin_SearchBtn->setGeometry(QRect(610, 110, 80, 24));
        Admin_GenreTxtbox = new QLineEdit(Admin);
        Admin_GenreTxtbox->setObjectName(QString::fromUtf8("Admin_GenreTxtbox"));
        Admin_GenreTxtbox->setGeometry(QRect(30, 460, 501, 24));
        Admin_TitleTxtbox = new QLineEdit(Admin);
        Admin_TitleTxtbox->setObjectName(QString::fromUtf8("Admin_TitleTxtbox"));
        Admin_TitleTxtbox->setGeometry(QRect(30, 490, 501, 24));
        Admin_SourceTxtbox = new QLineEdit(Admin);
        Admin_SourceTxtbox->setObjectName(QString::fromUtf8("Admin_SourceTxtbox"));
        Admin_SourceTxtbox->setGeometry(QRect(30, 520, 501, 24));
        Admin_Load = new QPushButton(Admin);
        Admin_Load->setObjectName(QString::fromUtf8("Admin_Load"));
        Admin_Load->setGeometry(QRect(700, 110, 80, 24));
        Admin_QuotesTable = new QTableView(Admin);
        Admin_QuotesTable->setObjectName(QString::fromUtf8("Admin_QuotesTable"));
        Admin_QuotesTable->setGeometry(QRect(30, 140, 751, 251));
        Admin_Search_TextBox = new QLineEdit(Admin);
        Admin_Search_TextBox->setObjectName(QString::fromUtf8("Admin_Search_TextBox"));
        Admin_Search_TextBox->setGeometry(QRect(30, 110, 571, 24));
        Admin_DeleteBtn = new QPushButton(Admin);
        Admin_DeleteBtn->setObjectName(QString::fromUtf8("Admin_DeleteBtn"));
        Admin_DeleteBtn->setGeometry(QRect(550, 400, 80, 24));
        Admin_HomeBtn = new QPushButton(Admin);
        Admin_HomeBtn->setObjectName(QString::fromUtf8("Admin_HomeBtn"));
        Admin_HomeBtn->setGeometry(QRect(550, 460, 80, 24));
        label = new QLabel(Admin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 10, 261, 81));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Dialog", nullptr));
        Admin_add_btn->setText(QCoreApplication::translate("Admin", "Add", nullptr));
        Admin_Author_textBox->setText(QCoreApplication::translate("Admin", "Author", nullptr));
        Admin_SourceTypeTxtbox->setText(QCoreApplication::translate("Admin", "Source Type", nullptr));
        Admin_QuoteTxtbox->setText(QCoreApplication::translate("Admin", "Quote", nullptr));
        Admin_SearchBtn->setText(QCoreApplication::translate("Admin", "Search", nullptr));
        Admin_GenreTxtbox->setText(QCoreApplication::translate("Admin", "Genre", nullptr));
        Admin_TitleTxtbox->setText(QCoreApplication::translate("Admin", "Title", nullptr));
        Admin_SourceTxtbox->setText(QCoreApplication::translate("Admin", "Source", nullptr));
        Admin_Load->setText(QCoreApplication::translate("Admin", "Load", nullptr));
        Admin_DeleteBtn->setText(QCoreApplication::translate("Admin", "Delete", nullptr));
        Admin_HomeBtn->setText(QCoreApplication::translate("Admin", "Home", nullptr));
        label->setText(QCoreApplication::translate("Admin", "iQoutes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
