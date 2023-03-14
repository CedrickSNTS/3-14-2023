#include "eslabra.h"
#include "ui_eslabra.h"
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include "eslabrainfo.h"

EslabraInfo *eslabrainfo;

Eslabra::Eslabra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Eslabra)
{
    ui->setupUi(this);
}

Eslabra::~Eslabra()
{
    delete ui;
}

void Eslabra::on_pushButton_clicked()
{
    hide();
        eslabrainfo = new EslabraInfo(this);
        eslabrainfo->show();
}


void Eslabra::on_pB_ViewDesc_clicked()
{
    QFile File("eslabraTxt.txt");
        if (File.open(QIODevice::ReadOnly))
        {
            QTextStream stream(&File);
            QString FileData;
            while (stream.atEnd() == false)
            {
                FileData += stream.readLine();
            }
            ui->textEditEslabra->setText(FileData);
        }
}

