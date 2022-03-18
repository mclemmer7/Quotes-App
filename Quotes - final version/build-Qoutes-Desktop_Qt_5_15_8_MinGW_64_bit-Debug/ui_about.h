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
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *About_AdminBtn;
    QPushButton *About_AboutBtn;
    QPushButton *About_HomeBtn;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(900, 600);
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 131, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 70, 901, 51));
        QFont font1;
        font1.setPointSize(32);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        About_AdminBtn = new QPushButton(About);
        About_AdminBtn->setObjectName(QString::fromUtf8("About_AdminBtn"));
        About_AdminBtn->setGeometry(QRect(760, 10, 91, 24));
        QFont font2;
        font2.setPointSize(12);
        About_AdminBtn->setFont(font2);
        About_AdminBtn->setFlat(true);
        About_AboutBtn = new QPushButton(About);
        About_AboutBtn->setObjectName(QString::fromUtf8("About_AboutBtn"));
        About_AboutBtn->setGeometry(QRect(680, 10, 80, 24));
        About_AboutBtn->setFont(font2);
        About_AboutBtn->setAutoDefault(false);
        About_AboutBtn->setFlat(true);
        About_HomeBtn = new QPushButton(About);
        About_HomeBtn->setObjectName(QString::fromUtf8("About_HomeBtn"));
        About_HomeBtn->setGeometry(QRect(590, 10, 80, 24));
        About_HomeBtn->setFont(font2);
        About_HomeBtn->setFlat(true);
        textBrowser = new QTextBrowser(About);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(90, 150, 701, 211));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("About", "iQuotes", nullptr));
        label_2->setText(QCoreApplication::translate("About", "About", nullptr));
        About_AdminBtn->setText(QCoreApplication::translate("About", "Menu", nullptr));
        About_AboutBtn->setText(QCoreApplication::translate("About", "About", nullptr));
        About_HomeBtn->setText(QCoreApplication::translate("About", "Home", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">iQuotes is an application designed by SPU computer science students that can help anybody with their research. iQuotes can be used to create a customized list of quotes where you can add, delete, and edit quotes on your list. With the search function, you can search for any quote that has been saved to your list of quotes based off of the author, genre, or keyword.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; f"
                        "ont-size:14pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
