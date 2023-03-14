#include "calisay.h"
#include "ui_calisay.h"
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include "calisayinfo.h"

CalisayInfo *calisayinfo;


Calisay::Calisay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calisay)
{
    ui->setupUi(this);

}

Calisay::~Calisay()
{
    delete ui;
}

void Calisay::on_pushButton_clicked()
{
    hide();
    calisayinfo = new CalisayInfo(this);
    calisayinfo->show();
}


void Calisay::on_lineEdit_editingFinished()
{
//    QFile file1("./calisay.txt");
//    file1.open(QIODevice::ReadOnly | QIODevice::Text);

//    QApplication::processEvents();
//    QString b = ui->lineEdit->text();


}


void Calisay::on_pB_ViewDesc_clicked()
{
    QFile File("calisayTxt.txt");
        if (File.open(QIODevice::ReadOnly))
        {
            QTextStream stream(&File);
            QString FileData;
            while (stream.atEnd() == false)
            {
                FileData += stream.readLine();
            }
            ui->textEditCalisay->setText(FileData);
        }
}

