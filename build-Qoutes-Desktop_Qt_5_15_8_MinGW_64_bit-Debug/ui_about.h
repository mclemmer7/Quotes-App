/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *About_AdminBtn;
    QPushButton *About_AboutBtn;
    QPushButton *About_ContactBtn;
    QPushButton *About_HomeBtn;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(900, 600);
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 80, 901, 41));
        QFont font1;
        font1.setPointSize(32);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        About_AdminBtn = new QPushButton(About);
        About_AdminBtn->setObjectName(QString::fromUtf8("About_AdminBtn"));
        About_AdminBtn->setGeometry(QRect(810, 10, 80, 24));
        QFont font2;
        font2.setPointSize(12);
        About_AdminBtn->setFont(font2);
        About_AdminBtn->setFlat(true);
        About_AboutBtn = new QPushButton(About);
        About_AboutBtn->setObjectName(QString::fromUtf8("About_AboutBtn"));
        About_AboutBtn->setGeometry(QRect(720, 10, 80, 24));
        About_AboutBtn->setFont(font2);
        About_AboutBtn->setAutoDefault(false);
        About_AboutBtn->setFlat(true);
        About_ContactBtn = new QPushButton(About);
        About_ContactBtn->setObjectName(QString::fromUtf8("About_ContactBtn"));
        About_ContactBtn->setGeometry(QRect(630, 10, 80, 24));
        About_ContactBtn->setFont(font2);
        About_ContactBtn->setFlat(true);
        About_HomeBtn = new QPushButton(About);
        About_HomeBtn->setObjectName(QString::fromUtf8("About_HomeBtn"));
        About_HomeBtn->setGeometry(QRect(540, 10, 80, 24));
        About_HomeBtn->setFont(font2);
        About_HomeBtn->setFlat(true);

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("About", "iQoutes", nullptr));
        label_2->setText(QCoreApplication::translate("About", "About", nullptr));
        About_AdminBtn->setText(QCoreApplication::translate("About", "Admin", nullptr));
        About_AboutBtn->setText(QCoreApplication::translate("About", "About", nullptr));
        About_ContactBtn->setText(QCoreApplication::translate("About", "Contact", nullptr));
        About_HomeBtn->setText(QCoreApplication::translate("About", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
