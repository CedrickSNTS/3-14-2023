/********************************************************************************
** Form generated from reading UI file 'gabriel.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GABRIEL_H
#define UI_GABRIEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Gabriel
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QTextEdit *textEditGabriel;
    QPushButton *pB_ViewDesc;

    void setupUi(QDialog *Gabriel)
    {
        if (Gabriel->objectName().isEmpty())
            Gabriel->setObjectName("Gabriel");
        Gabriel->resize(857, 719);
        pushButton = new QPushButton(Gabriel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(420, 620, 211, 51));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        label = new QLabel(Gabriel);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 370, 551, 51));
        QFont font1;
        font1.setPointSize(28);
        label->setFont(font1);
        label_3 = new QLabel(Gabriel);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 10, 321, 301));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/PICTURES FOR GROUPWORK/332343800_688488226295910_2866560317758888520_n.png")));
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);
        textEditGabriel = new QTextEdit(Gabriel);
        textEditGabriel->setObjectName("textEditGabriel");
        textEditGabriel->setGeometry(QRect(140, 460, 541, 131));
        pB_ViewDesc = new QPushButton(Gabriel);
        pB_ViewDesc->setObjectName("pB_ViewDesc");
        pB_ViewDesc->setGeometry(QRect(180, 620, 211, 51));
        pB_ViewDesc->setFont(font);

        retranslateUi(Gabriel);

        QMetaObject::connectSlotsByName(Gabriel);
    } // setupUi

    void retranslateUi(QDialog *Gabriel)
    {
        Gabriel->setWindowTitle(QCoreApplication::translate("Gabriel", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Gabriel", "Other Information", nullptr));
        label->setText(QCoreApplication::translate("Gabriel", "LUIS MAVERICK GABRIEL", nullptr));
        label_3->setText(QString());
        pB_ViewDesc->setText(QCoreApplication::translate("Gabriel", "View Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gabriel: public Ui_Gabriel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GABRIEL_H
