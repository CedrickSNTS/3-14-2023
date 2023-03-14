/********************************************************************************
** Form generated from reading UI file 'eslabrainfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESLABRAINFO_H
#define UI_ESLABRAINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EslabraInfo
{
public:
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *EslabraInfo)
    {
        if (EslabraInfo->objectName().isEmpty())
            EslabraInfo->setObjectName("EslabraInfo");
        EslabraInfo->resize(400, 300);
        label_2 = new QLabel(EslabraInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 90, 261, 121));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        pushButton_2 = new QPushButton(EslabraInfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 230, 81, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton_2->setFont(font1);
        pushButton = new QPushButton(EslabraInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 230, 81, 41));
        pushButton->setFont(font1);

        retranslateUi(EslabraInfo);
        QObject::connect(pushButton, &QPushButton::clicked, EslabraInfo, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(EslabraInfo);
    } // setupUi

    void retranslateUi(QDialog *EslabraInfo)
    {
        EslabraInfo->setWindowTitle(QCoreApplication::translate("EslabraInfo", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("EslabraInfo", "Mapag aruga", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EslabraInfo", "Edit", nullptr));
        pushButton->setText(QCoreApplication::translate("EslabraInfo", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EslabraInfo: public Ui_EslabraInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESLABRAINFO_H
