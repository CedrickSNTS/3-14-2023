/********************************************************************************
** Form generated from reading UI file 'labrador.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABRADOR_H
#define UI_LABRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Labrador
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pB_ViewDesc;
    QTextEdit *textEditLabrador;

    void setupUi(QDialog *Labrador)
    {
        if (Labrador->objectName().isEmpty())
            Labrador->setObjectName("Labrador");
        Labrador->resize(857, 719);
        pushButton = new QPushButton(Labrador);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(420, 620, 211, 51));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        label = new QLabel(Labrador);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 330, 551, 51));
        QFont font1;
        font1.setPointSize(28);
        label->setFont(font1);
        label_3 = new QLabel(Labrador);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, -150, 321, 471));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/PICTURES FOR GROUPWORK/photo_2023-03-06_15-17-58-removebg-preview.png")));
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);
        pB_ViewDesc = new QPushButton(Labrador);
        pB_ViewDesc->setObjectName("pB_ViewDesc");
        pB_ViewDesc->setGeometry(QRect(170, 620, 211, 51));
        pB_ViewDesc->setFont(font);
        textEditLabrador = new QTextEdit(Labrador);
        textEditLabrador->setObjectName("textEditLabrador");
        textEditLabrador->setGeometry(QRect(130, 460, 541, 131));

        retranslateUi(Labrador);

        QMetaObject::connectSlotsByName(Labrador);
    } // setupUi

    void retranslateUi(QDialog *Labrador)
    {
        Labrador->setWindowTitle(QCoreApplication::translate("Labrador", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Labrador", "Other Information", nullptr));
        label->setText(QCoreApplication::translate("Labrador", "LAIN YSABEL LABRADOR", nullptr));
        label_3->setText(QString());
        pB_ViewDesc->setText(QCoreApplication::translate("Labrador", "View Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Labrador: public Ui_Labrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABRADOR_H
