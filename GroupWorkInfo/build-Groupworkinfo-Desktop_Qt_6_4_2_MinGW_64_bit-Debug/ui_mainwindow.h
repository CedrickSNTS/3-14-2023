/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QRadioButton *rb_Santos;
    QRadioButton *rb_Eslabra;
    QRadioButton *rb_Gabriel;
    QRadioButton *rb_Calisay;
    QRadioButton *rb_Labrador;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(668, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 30, 301, 81));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 120, 421, 341));
        rb_Santos = new QRadioButton(groupBox);
        rb_Santos->setObjectName("rb_Santos");
        rb_Santos->setGeometry(QRect(50, 250, 361, 41));
        QFont font1;
        font1.setPointSize(18);
        rb_Santos->setFont(font1);
        rb_Eslabra = new QRadioButton(groupBox);
        rb_Eslabra->setObjectName("rb_Eslabra");
        rb_Eslabra->setGeometry(QRect(50, 100, 361, 41));
        rb_Eslabra->setFont(font1);
        rb_Gabriel = new QRadioButton(groupBox);
        rb_Gabriel->setObjectName("rb_Gabriel");
        rb_Gabriel->setGeometry(QRect(50, 150, 361, 41));
        rb_Gabriel->setFont(font1);
        rb_Calisay = new QRadioButton(groupBox);
        rb_Calisay->setObjectName("rb_Calisay");
        rb_Calisay->setGeometry(QRect(50, 50, 361, 41));
        rb_Calisay->setFont(font1);
        rb_Labrador = new QRadioButton(groupBox);
        rb_Labrador->setObjectName("rb_Labrador");
        rb_Labrador->setGeometry(QRect(50, 200, 361, 41));
        rb_Labrador->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 510, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 668, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Start Down", nullptr));
        groupBox->setTitle(QString());
        rb_Santos->setText(QCoreApplication::translate("MainWindow", "Cedrick Santos", nullptr));
        rb_Eslabra->setText(QCoreApplication::translate("MainWindow", "Jan Kristian Eslabra", nullptr));
        rb_Gabriel->setText(QCoreApplication::translate("MainWindow", "Luis Maverick Gabriel", nullptr));
        rb_Calisay->setText(QCoreApplication::translate("MainWindow", "Krishane Anne Calisay", nullptr));
        rb_Labrador->setText(QCoreApplication::translate("MainWindow", "Lain Ysabel Labrador", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
