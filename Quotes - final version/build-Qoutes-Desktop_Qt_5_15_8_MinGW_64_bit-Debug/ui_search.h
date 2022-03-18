/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
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
        label->setGeometry(QRect(350, 10, 261, 81));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(search);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 95, 161, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "Dialog", nullptr));
        Search_homeBtn->setText(QCoreApplication::translate("search", "Back to Home", nullptr));
        label->setText(QCoreApplication::translate("search", "iQuotes", nullptr));
        label_2->setText(QCoreApplication::translate("search", "Search Results:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
