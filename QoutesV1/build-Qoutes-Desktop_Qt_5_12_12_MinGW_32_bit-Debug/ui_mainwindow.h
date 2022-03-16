/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *QuotesTable;
    QPushButton *Load;
    QPushButton *add_btn;
    QLineEdit *Author_textBox;
    QLineEdit *Search_TextBox;
    QPushButton *SearchBtn;
    QPushButton *DeleteBtn;
    QLineEdit *QuoteTxtbox;
    QLineEdit *GenreTxtbox;
    QLineEdit *TitleTxtbox;
    QLineEdit *SourceTxtbox;
    QLineEdit *SourceTypeTxtbox;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(810, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QuotesTable = new QTableView(centralwidget);
        QuotesTable->setObjectName(QString::fromUtf8("QuotesTable"));
        QuotesTable->setGeometry(QRect(30, 110, 751, 251));
        Load = new QPushButton(centralwidget);
        Load->setObjectName(QString::fromUtf8("Load"));
        Load->setGeometry(QRect(700, 80, 80, 24));
        add_btn = new QPushButton(centralwidget);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setGeometry(QRect(550, 440, 80, 24));
        Author_textBox = new QLineEdit(centralwidget);
        Author_textBox->setObjectName(QString::fromUtf8("Author_textBox"));
        Author_textBox->setGeometry(QRect(30, 370, 501, 24));
        Search_TextBox = new QLineEdit(centralwidget);
        Search_TextBox->setObjectName(QString::fromUtf8("Search_TextBox"));
        Search_TextBox->setGeometry(QRect(30, 80, 571, 24));
        SearchBtn = new QPushButton(centralwidget);
        SearchBtn->setObjectName(QString::fromUtf8("SearchBtn"));
        SearchBtn->setGeometry(QRect(620, 80, 80, 24));
        DeleteBtn = new QPushButton(centralwidget);
        DeleteBtn->setObjectName(QString::fromUtf8("DeleteBtn"));
        DeleteBtn->setGeometry(QRect(550, 410, 80, 24));
        QuoteTxtbox = new QLineEdit(centralwidget);
        QuoteTxtbox->setObjectName(QString::fromUtf8("QuoteTxtbox"));
        QuoteTxtbox->setGeometry(QRect(30, 400, 501, 24));
        GenreTxtbox = new QLineEdit(centralwidget);
        GenreTxtbox->setObjectName(QString::fromUtf8("GenreTxtbox"));
        GenreTxtbox->setGeometry(QRect(30, 430, 501, 24));
        TitleTxtbox = new QLineEdit(centralwidget);
        TitleTxtbox->setObjectName(QString::fromUtf8("TitleTxtbox"));
        TitleTxtbox->setGeometry(QRect(30, 460, 501, 24));
        SourceTxtbox = new QLineEdit(centralwidget);
        SourceTxtbox->setObjectName(QString::fromUtf8("SourceTxtbox"));
        SourceTxtbox->setGeometry(QRect(30, 490, 501, 24));
        SourceTypeTxtbox = new QLineEdit(centralwidget);
        SourceTypeTxtbox->setObjectName(QString::fromUtf8("SourceTypeTxtbox"));
        SourceTypeTxtbox->setGeometry(QRect(30, 520, 501, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 0, 261, 81));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 810, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Load->setText(QApplication::translate("MainWindow", "Load", nullptr));
        add_btn->setText(QApplication::translate("MainWindow", "ADD", nullptr));
        Author_textBox->setText(QApplication::translate("MainWindow", "Author", nullptr));
        SearchBtn->setText(QApplication::translate("MainWindow", "Search", nullptr));
        DeleteBtn->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        QuoteTxtbox->setText(QApplication::translate("MainWindow", "Quote", nullptr));
        GenreTxtbox->setText(QApplication::translate("MainWindow", "Genre", nullptr));
        TitleTxtbox->setText(QApplication::translate("MainWindow", "Title", nullptr));
        SourceTxtbox->setText(QApplication::translate("MainWindow", "Source", nullptr));
        SourceTypeTxtbox->setText(QApplication::translate("MainWindow", "Source Type", nullptr));
        label->setText(QApplication::translate("MainWindow", "iQoutes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
