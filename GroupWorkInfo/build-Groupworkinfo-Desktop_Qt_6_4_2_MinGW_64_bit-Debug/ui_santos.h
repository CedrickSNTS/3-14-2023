/********************************************************************************
** Form generated from reading UI file 'santos.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SANTOS_H
#define UI_SANTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Santos
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pB_ViewDesc;
    QTextEdit *textEditSantos;

    void setupUi(QDialog *Santos)
    {
        if (Santos->objectName().isEmpty())
            Santos->setObjectName("Santos");
        Santos->resize(857, 719);
        pushButton = new QPushButton(Santos);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 620, 211, 51));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        label = new QLabel(Santos);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 380, 441, 51));
        QFont font1;
        font1.setPointSize(28);
        label->setFont(font1);
        label_3 = new QLabel(Santos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 30, 311, 291));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/PICTURES FOR GROUPWORK/2.png")));
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);
        pB_ViewDesc = new QPushButton(Santos);
        pB_ViewDesc->setObjectName("pB_ViewDesc");
        pB_ViewDesc->setGeometry(QRect(180, 620, 211, 51));
        pB_ViewDesc->setFont(font);
        textEditSantos = new QTextEdit(Santos);
        textEditSantos->setObjectName("textEditSantos");
        textEditSantos->setGeometry(QRect(150, 460, 541, 131));

        retranslateUi(Santos);

        QMetaObject::connectSlotsByName(Santos);
    } // setupUi

    void retranslateUi(QDialog *Santos)
    {
        Santos->setWindowTitle(QCoreApplication::translate("Santos", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Santos", "Other Information", nullptr));
        label->setText(QCoreApplication::translate("Santos", "CEDRICK SANTOS", nullptr));
        label_3->setText(QString());
        pB_ViewDesc->setText(QCoreApplication::translate("Santos", "View Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Santos: public Ui_Santos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SANTOS_H
