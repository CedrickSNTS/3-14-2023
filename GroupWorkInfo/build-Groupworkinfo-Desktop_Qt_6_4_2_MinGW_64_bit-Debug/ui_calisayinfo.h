/********************************************************************************
** Form generated from reading UI file 'calisayinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALISAYINFO_H
#define UI_CALISAYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalisayInfo
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CalisayInfo)
    {
        if (CalisayInfo->objectName().isEmpty())
            CalisayInfo->setObjectName("CalisayInfo");
        CalisayInfo->resize(383, 338);
        label_2 = new QLabel(CalisayInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 100, 261, 121));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        pushButton = new QPushButton(CalisayInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 260, 81, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(CalisayInfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 260, 81, 41));
        pushButton_2->setFont(font1);

        retranslateUi(CalisayInfo);
        QObject::connect(pushButton, &QPushButton::clicked, CalisayInfo, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(CalisayInfo);
    } // setupUi

    void retranslateUi(QDialog *CalisayInfo)
    {
        CalisayInfo->setWindowTitle(QCoreApplication::translate("CalisayInfo", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("CalisayInfo", "Mapagmahal", nullptr));
        pushButton->setText(QCoreApplication::translate("CalisayInfo", "Close", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CalisayInfo", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalisayInfo: public Ui_CalisayInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALISAYINFO_H
