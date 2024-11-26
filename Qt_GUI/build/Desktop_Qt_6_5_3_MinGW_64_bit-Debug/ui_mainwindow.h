/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QFrame *frame_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(80, 30, 261, 241));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lcdNumber = new QLCDNumber(frame);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(130, 0, 131, 51));
        lcdNumber->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: blue;\n"
"font.size: 20pt;\n"
"border-radius: 10px;\n"
"border: 2px solid black;\n"
"border-color: gray;"));
        lcdNumber_2 = new QLCDNumber(frame);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(130, 50, 131, 51));
        lcdNumber_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: blue;\n"
"font.size: 20pt;\n"
"border-radius: 10px;\n"
"border: 2px solid black;\n"
"border-color: gray;"));
        lcdNumber_3 = new QLCDNumber(frame);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setGeometry(QRect(130, 100, 131, 51));
        lcdNumber_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: blue;\n"
"font.size: 20pt;\n"
"border-radius: 10px;\n"
"border: 2px solid black;\n"
"border-color: gray;"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, -1, 131, 151));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(130, 100, 131, 51));
        lineEdit_4->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: blue;\n"
""));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 131, 51));
        label_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: green;\n"
"font-weight: bold;                \n"
"font-size: 18px;\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
"border-color: gray;"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 50, 131, 51));
        label_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: green;\n"
"font-weight: bold;                \n"
"font-size: 18px;\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
"border-color: gray;"));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 100, 131, 51));
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: green;\n"
"font-weight: bold;                \n"
"font-size: 18px;\n"
"border: 2px solid black;\n"
"border-radius: 10px;\n"
"border-color: gray;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "CURRENT (A)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "VOLTAGE ( V )", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CURRENT ( A )", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " POWER ( W )", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
