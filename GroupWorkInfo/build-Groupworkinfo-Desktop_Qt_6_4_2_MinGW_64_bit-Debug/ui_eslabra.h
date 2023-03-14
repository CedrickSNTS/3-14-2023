/********************************************************************************
** Form generated from reading UI file 'eslabra.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESLABRA_H
#define UI_ESLABRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Eslabra
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pB_ViewDesc;
    QTextEdit *textEditEslabra;

    void setupUi(QDialog *Eslabra)
    {
        if (Eslabra->objectName().isEmpty())
            Eslabra->setObjectName("Eslabra");
        Eslabra->resize(857, 719);
        label = new QLabel(Eslabra);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 330, 551, 51));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        pushButton = new QPushButton(Eslabra);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 610, 211, 51));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        label_3 = new QLabel(Eslabra);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 20, 321, 301));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/PICTURES FOR GROUPWORK/334248263_874257860327066_6285662305883854258_n (1).jpg")));
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);
        pB_ViewDesc = new QPushButton(Eslabra);
        pB_ViewDesc->setObjectName("pB_ViewDesc");
        pB_ViewDesc->setGeometry(QRect(190, 610, 211, 51));
        pB_ViewDesc->setFont(font1);
        textEditEslabra = new QTextEdit(Eslabra);
        textEditEslabra->setObjectName("textEditEslabra");
        textEditEslabra->setGeometry(QRect(150, 450, 541, 131));

        retranslateUi(Eslabra);

        QMetaObject::connectSlotsByName(Eslabra);
    } // setupUi

    void retranslateUi(QDialog *Eslabra)
    {
        Eslabra->setWindowTitle(QCoreApplication::translate("Eslabra", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Eslabra", "JAN KRISTIAN ESLABRA", nullptr));
        pushButton->setText(QCoreApplication::translate("Eslabra", "Other Information", nullptr));
        label_3->setText(QString());
        pB_ViewDesc->setText(QCoreApplication::translate("Eslabra", "View Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eslabra: public Ui_Eslabra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESLABRA_H
