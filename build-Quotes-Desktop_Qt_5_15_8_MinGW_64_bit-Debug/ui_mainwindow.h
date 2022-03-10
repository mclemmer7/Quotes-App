/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionDelete;
    QAction *actionSearch;
    QAction *actionQuit;
    QAction *actionEdit;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *page_4;
    QLabel *label_2;
    QLabel *label_4;
    QTextEdit *textEdit_3;
    QLabel *label_5;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_3;
    QWidget *page_5;
    QLabel *label_3;
    QSlider *verticalSlider;
    QTableWidget *tableWidget;
    QPushButton *pushButton_4;
    QWidget *page;
    QLabel *label_7;
    QLabel *label_6;
    QTableView *tableView;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuHome;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 50, 801, 531));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        textEdit_2 = new QTextEdit(page_3);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(140, 40, 291, 31));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 40, 93, 28));
        QFont font;
        font.setPointSize(12);
        pushButton_2->setFont(font);
        radioButton = new QRadioButton(page_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(140, 100, 91, 31));
        radioButton->setFont(font);
        radioButton_2 = new QRadioButton(page_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 100, 121, 31));
        radioButton_2->setFont(font);
        radioButton_3 = new QRadioButton(page_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(380, 100, 101, 31));
        radioButton_3->setFont(font);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_2 = new QLabel(page_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 10, 71, 31));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setLineWidth(2);
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 60, 401, 31));
        label_4->setFont(font);
        textEdit_3 = new QTextEdit(page_4);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(30, 100, 741, 101));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 220, 321, 21));
        label_5->setFont(font);
        textEdit_4 = new QTextEdit(page_4);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(30, 250, 741, 41));
        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 320, 93, 28));
        pushButton_3->setFont(font);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 71, 31));
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setLineWidth(2);
        label_3->setAlignment(Qt::AlignCenter);
        verticalSlider = new QSlider(page_5);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(760, 80, 22, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(page_5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(35, 80, 691, 192));
        pushButton_4 = new QPushButton(page_5);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 330, 93, 28));
        pushButton_4->setFont(font);
        stackedWidget->addWidget(page_5);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 10, 71, 31));
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::Box);
        label_7->setFrameShadow(QFrame::Raised);
        label_7->setLineWidth(2);
        label_7->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 80, 531, 31));
        label_6->setFont(font);
        tableView = new QTableView(page);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(100, 130, 591, 192));
        stackedWidget->addWidget(page);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 0, 111, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MV Boli"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuHome = new QMenu(menubar);
        menuHome->setObjectName(QString::fromUtf8("menuHome"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHome->menuAction());
        menuHome->addAction(actionSearch);
        menuHome->addAction(actionAdd);
        menuHome->addAction(actionDelete);
        menuHome->addAction(actionEdit);
        menuHome->addSeparator();
        menuHome->addAction(actionQuit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionSearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter an author</p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Author", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Keyword", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Tag", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Enter a quote that you would like to add:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter author's name:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Please Select the quote that you would like to edit:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "iQuotes", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
