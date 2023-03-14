/********************************************************************************
** Form generated from reading UI file 'santosinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SANTOSINFO_H
#define UI_SANTOSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SantosInfo
{
public:
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *SantosInfo)
    {
        if (SantosInfo->objectName().isEmpty())
            SantosInfo->setObjectName("SantosInfo");
        SantosInfo->resize(400, 300);
        label_2 = new QLabel(SantosInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 90, 261, 121));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        pushButton_2 = new QPushButton(SantosInfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 230, 81, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton_2->setFont(font1);
        pushButton = new QPushButton(SantosInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 230, 81, 41));
        pushButton->setFont(font1);

        retranslateUi(SantosInfo);
        QObject::connect(pushButton, &QPushButton::clicked, SantosInfo, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(SantosInfo);
    } // setupUi

    void retranslateUi(QDialog *SantosInfo)
    {
        SantosInfo->setWindowTitle(QCoreApplication::translate("SantosInfo", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SantosInfo", "Lumbay", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SantosInfo", "Edit", nullptr));
        pushButton->setText(QCoreApplication::translate("SantosInfo", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SantosInfo: public Ui_SantosInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SANTOSINFO_H
