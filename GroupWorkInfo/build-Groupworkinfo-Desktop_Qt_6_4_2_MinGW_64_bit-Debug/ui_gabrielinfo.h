/********************************************************************************
** Form generated from reading UI file 'gabrielinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GABRIELINFO_H
#define UI_GABRIELINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GabrielInfo
{
public:
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *GabrielInfo)
    {
        if (GabrielInfo->objectName().isEmpty())
            GabrielInfo->setObjectName("GabrielInfo");
        GabrielInfo->resize(400, 300);
        label_2 = new QLabel(GabrielInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 90, 261, 121));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        pushButton_2 = new QPushButton(GabrielInfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 230, 81, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton_2->setFont(font1);
        pushButton = new QPushButton(GabrielInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 230, 81, 41));
        pushButton->setFont(font1);

        retranslateUi(GabrielInfo);
        QObject::connect(pushButton, &QPushButton::clicked, GabrielInfo, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(GabrielInfo);
    } // setupUi

    void retranslateUi(QDialog *GabrielInfo)
    {
        GabrielInfo->setWindowTitle(QCoreApplication::translate("GabrielInfo", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("GabrielInfo", "Mapagkawanggawa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GabrielInfo", "Edit", nullptr));
        pushButton->setText(QCoreApplication::translate("GabrielInfo", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GabrielInfo: public Ui_GabrielInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GABRIELINFO_H
