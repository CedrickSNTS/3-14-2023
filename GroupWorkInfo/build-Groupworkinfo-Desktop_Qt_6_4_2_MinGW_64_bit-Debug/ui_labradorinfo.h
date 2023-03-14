/********************************************************************************
** Form generated from reading UI file 'labradorinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABRADORINFO_H
#define UI_LABRADORINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LabradorInfo
{
public:
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *LabradorInfo)
    {
        if (LabradorInfo->objectName().isEmpty())
            LabradorInfo->setObjectName("LabradorInfo");
        LabradorInfo->resize(400, 300);
        label_2 = new QLabel(LabradorInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 90, 261, 121));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        pushButton_2 = new QPushButton(LabradorInfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 230, 81, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton_2->setFont(font1);
        pushButton = new QPushButton(LabradorInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 230, 81, 41));
        pushButton->setFont(font1);

        retranslateUi(LabradorInfo);
        QObject::connect(pushButton, &QPushButton::clicked, LabradorInfo, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(LabradorInfo);
    } // setupUi

    void retranslateUi(QDialog *LabradorInfo)
    {
        LabradorInfo->setWindowTitle(QCoreApplication::translate("LabradorInfo", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("LabradorInfo", "Bente Dos", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LabradorInfo", "Edit", nullptr));
        pushButton->setText(QCoreApplication::translate("LabradorInfo", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LabradorInfo: public Ui_LabradorInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABRADORINFO_H
