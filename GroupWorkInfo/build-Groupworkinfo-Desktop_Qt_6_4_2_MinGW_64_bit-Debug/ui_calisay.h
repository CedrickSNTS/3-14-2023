/********************************************************************************
** Form generated from reading UI file 'calisay.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALISAY_H
#define UI_CALISAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Calisay
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QTextEdit *textEditCalisay;
    QPushButton *pB_ViewDesc;

    void setupUi(QDialog *Calisay)
    {
        if (Calisay->objectName().isEmpty())
            Calisay->setObjectName("Calisay");
        Calisay->resize(857, 719);
        label = new QLabel(Calisay);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 420, 551, 51));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        pushButton = new QPushButton(Calisay);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 650, 211, 51));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        label_3 = new QLabel(Calisay);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, -60, 381, 451));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/PICTURES FOR GROUPWORK/325371136_542851281129175_8345838986307427715_n-removebg-preview.png")));
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);
        textEditCalisay = new QTextEdit(Calisay);
        textEditCalisay->setObjectName("textEditCalisay");
        textEditCalisay->setGeometry(QRect(160, 490, 541, 131));
        pB_ViewDesc = new QPushButton(Calisay);
        pB_ViewDesc->setObjectName("pB_ViewDesc");
        pB_ViewDesc->setGeometry(QRect(200, 650, 211, 51));
        pB_ViewDesc->setFont(font1);

        retranslateUi(Calisay);

        QMetaObject::connectSlotsByName(Calisay);
    } // setupUi

    void retranslateUi(QDialog *Calisay)
    {
        Calisay->setWindowTitle(QCoreApplication::translate("Calisay", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Calisay", "ANNE KRISHANE CALISAY", nullptr));
        pushButton->setText(QCoreApplication::translate("Calisay", "Other Information", nullptr));
        label_3->setText(QString());
        pB_ViewDesc->setText(QCoreApplication::translate("Calisay", "View Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calisay: public Ui_Calisay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALISAY_H
