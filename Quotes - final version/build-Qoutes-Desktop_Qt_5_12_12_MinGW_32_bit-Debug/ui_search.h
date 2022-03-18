/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QPushButton *Search_homeBtn;
    QTableView *Search_tableView;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Search_AboutBtn;
    QPushButton *Search_AdminBtn;
    QPushButton *Search_HomeBtn;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(900, 600);
        Search_homeBtn = new QPushButton(search);
        Search_homeBtn->setObjectName(QString::fromUtf8("Search_homeBtn"));
        Search_homeBtn->setGeometry(QRect(20, 560, 101, 24));
        Search_tableView = new QTableView(search);
        Search_tableView->setObjectName(QString::fromUtf8("Search_tableView"));
        Search_tableView->setGeometry(QRect(20, 140, 861, 411));
        label = new QLabel(search);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 261, 81));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(search);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 161, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        Search_AboutBtn = new QPushButton(search);
        Search_AboutBtn->setObjectName(QString::fromUtf8("Search_AboutBtn"));
        Search_AboutBtn->setGeometry(QRect(700, 10, 80, 24));
        Search_AboutBtn->setFont(font1);
        Search_AboutBtn->setFlat(true);
        Search_AdminBtn = new QPushButton(search);
        Search_AdminBtn->setObjectName(QString::fromUtf8("Search_AdminBtn"));
        Search_AdminBtn->setGeometry(QRect(790, 10, 101, 24));
        Search_AdminBtn->setFont(font1);
        Search_AdminBtn->setFlat(true);
        Search_HomeBtn = new QPushButton(search);
        Search_HomeBtn->setObjectName(QString::fromUtf8("Search_HomeBtn"));
        Search_HomeBtn->setGeometry(QRect(610, 10, 80, 24));
        Search_HomeBtn->setFont(font1);
        Search_HomeBtn->setFlat(true);

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QApplication::translate("search", "Dialog", nullptr));
        Search_homeBtn->setText(QApplication::translate("search", "Back to Home", nullptr));
        label->setText(QApplication::translate("search", "iQuotes", nullptr));
        label_2->setText(QApplication::translate("search", "Search Results:", nullptr));
        Search_AboutBtn->setText(QApplication::translate("search", "About", nullptr));
        Search_AdminBtn->setText(QApplication::translate("search", "Menu", nullptr));
        Search_HomeBtn->setText(QApplication::translate("search", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
