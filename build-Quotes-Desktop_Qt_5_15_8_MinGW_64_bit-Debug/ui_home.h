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

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(754, 453);
        label = new QLabel(Home);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 10, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Home);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(480, 60, 55, 16));
        label_3 = new QLabel(Home);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(560, 60, 55, 16));
        label_4 = new QLabel(Home);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(650, 60, 55, 16));

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Home", "iQuotes", nullptr));
        label_2->setText(QCoreApplication::translate("Home", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Home", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Home", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
