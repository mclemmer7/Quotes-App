/********************************************************************************
** Form generated from reading UI file 'delete_subwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_SUBWINDOW_H
#define UI_DELETE_SUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Delete_Subwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Delete_Subwindow)
    {
        if (Delete_Subwindow->objectName().isEmpty())
            Delete_Subwindow->setObjectName(QString::fromUtf8("Delete_Subwindow"));
        Delete_Subwindow->resize(452, 164);
        label = new QLabel(Delete_Subwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 421, 61));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(2);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Delete_Subwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 90, 93, 28));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Delete_Subwindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 90, 93, 28));
        pushButton_2->setFont(font);

        retranslateUi(Delete_Subwindow);

        QMetaObject::connectSlotsByName(Delete_Subwindow);
    } // setupUi

    void retranslateUi(QDialog *Delete_Subwindow)
    {
        Delete_Subwindow->setWindowTitle(QCoreApplication::translate("Delete_Subwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Delete_Subwindow", "Are you sure you want to delete this quote?", nullptr));
        pushButton->setText(QCoreApplication::translate("Delete_Subwindow", "Yes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Delete_Subwindow", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete_Subwindow: public Ui_Delete_Subwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_SUBWINDOW_H
