#include "title_scr.h"
#include "ui_title_scr.h"
#include "settime.h"
#include "infodialog.h"
#include <QTimer>
#include <QDateTime>

title_scr::title_scr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::title_scr)
{
    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();
    ui->stackedWidget->setCurrentIndex(0);

}

void title_scr::showTime()
{
    QTime time=QTime::currentTime();
    QString time_string=time.toString("hh : mm");
    ui->clock1->setText(time_string);

    QDate date=QDate::currentDate();
    QString datetext=date.toString("ddd dd \nMMM yyyy");
    ui->date1->setText(datetext);

}

title_scr::~title_scr()
{
    delete ui;
}

void title_scr::mousePressEvent(QMouseEvent *event)
{
    if (ui->stackedWidget->currentIndex()==0){
        ui->stackedWidget->setCurrentIndex(1);
    }
}

void title_scr::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void title_scr::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void title_scr::on_pushButton_10_clicked()
{
    QApplication::quit();
}

void title_scr::on_pushButton_8_clicked()
{
    infodialog window;
    window.setModal(true);
    window.exec();
}

void title_scr::on_pushButton_7_clicked()
{
    SetTime window;
    window.setModal(true);
    window.exec();
}
