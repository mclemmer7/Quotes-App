/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QPushButton *HomeSearchBtn;
    QLineEdit *HomeSearch_TextBox;
    QPushButton *AdminBtn;
    QRadioButton *AuthorRdBtn;
    QRadioButton *TagRdBtn;
    QRadioButton *KeywordRdBtn;
    QLabel *label;
    QPushButton *AboutBtn;
    QLabel *label_2;
    QPushButton *HomeBtn;

    void setupUi(QDialog *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(900, 600);
        HomeSearchBtn = new QPushButton(Home);
        HomeSearchBtn->setObjectName(QString::fromUtf8("HomeSearchBtn"));
        HomeSearchBtn->setGeometry(QRect(680, 170, 80, 24));
        HomeSearch_TextBox = new QLineEdit(Home);
        HomeSearch_TextBox->setObjectName(QString::fromUtf8("HomeSearch_TextBox"));
        HomeSearch_TextBox->setGeometry(QRect(90, 170, 571, 24));
        AdminBtn = new QPushButton(Home);
        AdminBtn->setObjectName(QString::fromUtf8("AdminBtn"));
        AdminBtn->setGeometry(QRect(790, 10, 101, 24));
        QFont font;
        font.setPointSize(12);
        AdminBtn->setFont(font);
        AdminBtn->setFlat(true);
        AuthorRdBtn = new QRadioButton(Home);
        AuthorRdBtn->setObjectName(QString::fromUtf8("AuthorRdBtn"));
        AuthorRdBtn->setGeometry(QRect(90, 250, 91, 22));
        AuthorRdBtn->setCheckable(true);
        AuthorRdBtn->setChecked(true);
        TagRdBtn = new QRadioButton(Home);
        TagRdBtn->setObjectName(QString::fromUtf8("TagRdBtn"));
        TagRdBtn->setGeometry(QRect(200, 250, 71, 22));
        KeywordRdBtn = new QRadioButton(Home);
        KeywordRdBtn->setObjectName(QString::fromUtf8("KeywordRdBtn"));
        KeywordRdBtn->setGeometry(QRect(300, 250, 91, 22));
        label = new QLabel(Home);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 10, 261, 81));
        QFont font1;
        font1.setPointSize(32);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        AboutBtn = new QPushButton(Home);
        AboutBtn->setObjectName(QString::fromUtf8("AboutBtn"));
        AboutBtn->setGeometry(QRect(700, 10, 80, 24));
        AboutBtn->setFont(font);
        AboutBtn->setFlat(true);
        label_2 = new QLabel(Home);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 210, 221, 21));
        QFont font2;
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_2->setTextInteractionFlags(Qt::NoTextInteraction);
        HomeBtn = new QPushButton(Home);
        HomeBtn->setObjectName(QString::fromUtf8("HomeBtn"));
        HomeBtn->setGeometry(QRect(610, 10, 80, 24));
        HomeBtn->setFont(font);
        HomeBtn->setFlat(true);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Dialog", nullptr));
        HomeSearchBtn->setText(QApplication::translate("Home", "Search", nullptr));
        AdminBtn->setText(QApplication::translate("Home", "Menu", nullptr));
        AuthorRdBtn->setText(QApplication::translate("Home", "Author", nullptr));
        TagRdBtn->setText(QApplication::translate("Home", "Genre", nullptr));
        KeywordRdBtn->setText(QApplication::translate("Home", "Keyword", nullptr));
        label->setText(QApplication::translate("Home", "iQuotes", nullptr));
        AboutBtn->setText(QApplication::translate("Home", "About", nullptr));
        label_2->setText(QApplication::translate("Home", "Select a filter to search by:", nullptr));
        HomeBtn->setText(QApplication::translate("Home", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
