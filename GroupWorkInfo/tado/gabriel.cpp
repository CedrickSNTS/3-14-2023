#include "gabriel.h"
#include "ui_gabriel.h"
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include "gabrielinfo.h"

GabrielInfo *gabrielinfo;

Gabriel::Gabriel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gabriel)
{
    ui->setupUi(this);
}

Gabriel::~Gabriel()
{
    delete ui;
}

void Gabriel::on_pushButton_clicked()
{
    hide();
        gabrielinfo = new GabrielInfo(this);
        gabrielinfo->show();
}


void Gabriel::on_pB_ViewDesc_clicked()
{

    QFile File("gabrielTxt.txt");
            if (File.open(QIODevice::ReadOnly))
            {
                QTextStream stream(&File);
                QString FileData;
                while (stream.atEnd() == false)
                {
                    FileData += stream.readLine();
                }
                ui->textEditGabriel->setText(FileData);
            }
}

