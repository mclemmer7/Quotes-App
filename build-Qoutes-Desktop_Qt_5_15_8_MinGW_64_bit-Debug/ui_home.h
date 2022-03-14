/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
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
    QPushButton *ContactBtn;

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
        AdminBtn->setGeometry(QRect(800, 10, 80, 24));
        QFont font;
        font.setPointSize(12);
        AdminBtn->setFont(font);
        AdminBtn->setFlat(true);
        AuthorRdBtn = new QRadioButton(Home);
        AuthorRdBtn->setObjectName(QString::fromUtf8("AuthorRdBtn"));
        AuthorRdBtn->setGeometry(QRect(120, 200, 91, 22));
        AuthorRdBtn->setCheckable(true);
        AuthorRdBtn->setChecked(true);
        TagRdBtn = new QRadioButton(Home);
        TagRdBtn->setObjectName(QString::fromUtf8("TagRdBtn"));
        TagRdBtn->setGeometry(QRect(220, 200, 91, 22));
        KeywordRdBtn = new QRadioButton(Home);
        KeywordRdBtn->setObjectName(QString::fromUtf8("KeywordRdBtn"));
        KeywordRdBtn->setGeometry(QRect(300, 200, 91, 22));
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
        AboutBtn->setGeometry(QRect(710, 10, 80, 24));
        AboutBtn->setFont(font);
        AboutBtn->setFlat(true);
        ContactBtn = new QPushButton(Home);
        ContactBtn->setObjectName(QString::fromUtf8("ContactBtn"));
        ContactBtn->setGeometry(QRect(620, 10, 80, 24));
        ContactBtn->setFont(font);
        ContactBtn->setFlat(true);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Dialog", nullptr));
        HomeSearchBtn->setText(QCoreApplication::translate("Home", "Search", nullptr));
        AdminBtn->setText(QCoreApplication::translate("Home", "Admin", nullptr));
        AuthorRdBtn->setText(QCoreApplication::translate("Home", "Author", nullptr));
        TagRdBtn->setText(QCoreApplication::translate("Home", "Genre", nullptr));
        KeywordRdBtn->setText(QCoreApplication::translate("Home", "Keyword", nullptr));
        label->setText(QCoreApplication::translate("Home", "iQoutes", nullptr));
        AboutBtn->setText(QCoreApplication::translate("Home", "About", nullptr));
        ContactBtn->setText(QCoreApplication::translate("Home", "Contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
