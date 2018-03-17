#include "settime.h"
#include "ui_settime.h"
#include <QProcess>
#include <QStringList>
#include <QDebug>
#include <string>
#include <sstream>

SetTime::SetTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetTime)
{
    ui->setupUi(this);
}

SetTime::~SetTime()
{
    delete ui;
}

void SetTime::on_pushButton_2_clicked()
{
    SetTime::close();
}

void SetTime::on_pushButton_clicked()
{
    QString text = ui->textEdit->toPlainText();
    QProcess sh;
    sh.start("sh", QStringList() << "-c" << "date --set=\""+text+"\"");
    sh.waitForFinished();
    sh.close();

}
