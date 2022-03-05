/********************************************************************************
** Form generated from reading UI file 'searchdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDISPLAY_H
#define UI_SEARCHDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SearchDisplay
{
public:
    QLabel *label;

    void setupUi(QDialog *SearchDisplay)
    {
        if (SearchDisplay->objectName().isEmpty())
            SearchDisplay->setObjectName(QString::fromUtf8("SearchDisplay"));
        SearchDisplay->resize(400, 300);
        label = new QLabel(SearchDisplay);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 161, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(2);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(SearchDisplay);

        QMetaObject::connectSlotsByName(SearchDisplay);
    } // setupUi

    void retranslateUi(QDialog *SearchDisplay)
    {
        SearchDisplay->setWindowTitle(QCoreApplication::translate("SearchDisplay", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SearchDisplay", "Search Results:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDisplay: public Ui_SearchDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDISPLAY_H
