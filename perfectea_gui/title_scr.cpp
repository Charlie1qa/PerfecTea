#include "title_scr.h"
#include "ui_title_scr.h"
#include "settime.h"
#include "infodialog.h"
#include "placedialog.h"
#include "readydialog.h"
#include <QTimer>
#include <QDateTime>
#include <QThread>
#include <QProcess>
#include <unistd.h>

int cupsize = 0;
int cuplength = 0;


title_scr::title_scr(QWidget *parent) :
    QMainWindow(parent),   
    ui(new Ui::title_scr)
{    
    ui->setupUi(this);

    /* timer will execute "showTime" function
     * everytime it expires (as soon as possible, use 'start(1000)'
     * to update every second) */
    QTimer *timer=new QTimer(this);    
    connect(timer, SIGNAL(timeout()),this,SLOT(showTime()));    
    timer->start(100);
    temp = 65;
    countdowntimer=new QTimer(this);
    connect(countdowntimer, SIGNAL(timeout()),this,SLOT(updateBar()));
    ui->stackedWidget->setCurrentIndex(0);
    ui->progressBar->setRange(0,100);
    ui->progressBar->setValue(0);

   /* connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_2_clicked()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(on_pushButton_3_clicked()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(on_pushButton_4_clicked()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(on_pushButton_5_clicked()));*/
    connect(ui->pushButton_12, SIGNAL(clicked()), this, SLOT(on_pushButton_12_clicked()));
    if ((cupsize || cuplength) == 0){
        ui->pushButton_4 -> setEnabled(false);
        ui->pushButton_5 -> setEnabled(false);
        }
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

double title_scr::checkTemp()
{
    QProcess process;
    // code to check temperature
    process.start("./checkTemp");
    process.waitForFinished();
    QThread::sleep(1);
    QString output(process.readAllStandardOutput());
    temp = output.toDouble();
    process.close();
    return temp;
}


void title_scr::operateMotor()
{
    QProcess process, process2;
    // code to operate motor
    //process.start("./Motor");
    //process.waitForFinished();
    //QString dirstring = QString::number(direction);
    if (direction == 0) process2.start("echo 0");
    else if (direction ==1) process2.start("echo 1");
    else process2.start("echo 2");
    process2.waitForFinished();

    //process.close();
    process2.close();
}

void title_scr::updateBar()
{    
    QProcess process, process2;
    //short brewtime
    if (cuplength == 1){
        ui->progressBar->setValue(10-counter);
        counter--;
    }
    //regular brewtime
    else if (cuplength == 2){
        ui->progressBar->setValue(360-counter);
        counter--;
    }
    //long brewtime
    else if (cuplength == 3){
        ui->progressBar->setValue(420-counter);
        counter--;
    }
    //when counter reaches 0, reset values
    if (counter < 0){
        countdowntimer->stop();
        ui->pushButton -> setEnabled(true);
        ui->pushButton_2 -> setEnabled(true);
        ui->pushButton_3 -> setEnabled(true);


        cupsize = 0;
        cuplength = 0;
        counter = 0;

        ui->progressBar->setRange(0,100);
        ui->progressBar->setValue(0);
        ui->label_9->setText("Please select the brew strength");

        //raise the infuser
        process.start("sh", QStringList() << "-c" << "./up");
        sleep(2);

        process.close();
        process2.start("sh", QStringList() << "-c" << "./zero");
        sleep(2);
        process2.close();

        //open TeaReady dialog window
        readyDialog window;
        window.setModal(true);
        window.exec();

        //return to menu
        ui->stackedWidget->setCurrentIndex(1);

    }
}

title_scr::~title_scr()
{
    delete ui;
}

void title_scr::mousePressEvent(QMouseEvent *event)
{
    if (ui->stackedWidget->currentIndex()==0){      //if mouse is pressed while on title screen, go to screen one
        ui->stackedWidget->setCurrentIndex(1);
    }
}

//help button
void title_scr::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

//help menu back button
void title_scr::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//shutdown button
void title_scr::on_pushButton_10_clicked()
{
    QApplication::quit();
}

//info and credits button
void title_scr::on_pushButton_8_clicked()
{
    infodialog window;
    window.setModal(true);
    window.exec();
}

//call the time/date setting window from help menu
void title_scr::on_pushButton_7_clicked()
{
    SetTime window;
    window.setModal(true);
    window.exec();
}

//short button
void title_scr::on_pushButton_clicked()
{    
    //QProcess process, process2;
    cuplength = 1;
    ui->label_9->setText("Please select the size of your cup");
    ui->pushButton -> setEnabled(false);
    ui->pushButton_2 -> setEnabled(false);
    ui->pushButton_3 -> setEnabled(false);
    ui->pushButton_4 -> setEnabled(true);
    ui->pushButton_5 -> setEnabled(true);
/*
    process.start("sh", QStringList() << "-c" << "./down");
    QThread::sleep(2);

    process.close();
    process2.start("sh", QStringList() << "-c" << "./zero");
    QThread::sleep(2);
    process2.close();
*/
}

/* debug back button
 resets values, re-enables buttons */
void title_scr::on_pushButton_12_clicked()
{
    ui->pushButton -> setEnabled(true);
    ui->pushButton_2 -> setEnabled(true);
    ui->pushButton_3 -> setEnabled(true);
    ui->pushButton_4 -> setEnabled(false);
    ui->pushButton_5 -> setEnabled(false);
    cupsize = 0;
    cuplength = 0;
    counter = 0;
    ui->label_9->setText("Please select the brew strength");
    ui->stackedWidget->setCurrentIndex(1);
    if (countdowntimer->isActive()==true) countdowntimer->stop();

}


//regular button
void title_scr::on_pushButton_2_clicked()
{
    cuplength = 2;
    ui->label_9->setText("Please select the size of your cup");
    ui->pushButton -> setEnabled(false);
    ui->pushButton_2 -> setEnabled(false);
    ui->pushButton_3 -> setEnabled(false);
    ui->pushButton_4 -> setEnabled(true);
    ui->pushButton_5 -> setEnabled(true);

}

//long button
void title_scr::on_pushButton_3_clicked()
{
    cuplength = 3;
    ui->label_9->setText("Please select the size of your cup");
    ui->pushButton -> setEnabled(false);
    ui->pushButton_2 -> setEnabled(false);
    ui->pushButton_3 -> setEnabled(false);
    ui->pushButton_4 -> setEnabled(true);
    ui->pushButton_5 -> setEnabled(true);
}

//large button
void title_scr::on_pushButton_4_clicked()
{
    QProcess process, process2;
    cupsize = 2;
    ui->label_9->setText("Please select the brewtime");
    ui->pushButton_4 -> setEnabled(false);
    ui->pushButton_5 -> setEnabled(false);
    if (cuplength != 0)
    {
        placeDialog window;         // calls place dialog window
        window.setModal(true);
        window.exec();
        /* check if the dialog window was closed and switch to the
         * loading screen if it was */
        if (window.isActiveWindow() == false){
            //check water temperature here
            while (temp > 80){
                temp = checkTemp();
                /* QString temptext;
                 *  temptext = QString::number(temp);
                 *  ui->label_8->setText(temptext);
                 */
            }

            //lower the infuser here
            process.start("sh", QStringList() << "-c" << "./down");
            sleep(2);

            process.close();
            process2.start("sh", QStringList() << "-c" << "./zero");
            sleep(1);
            process2.close();
            ui->stackedWidget->setCurrentIndex(2);
            if (cuplength == 1) counter = 10;                              //360 seconds brewing time countdown
            else if (cuplength == 2) counter = 360;
            else counter = 420;
            ui->progressBar->setRange(0,counter);
            countdowntimer->start(1000);
        }
    }
}

//small button
void title_scr::on_pushButton_5_clicked()
{
    QProcess process, process2;
    cupsize = 1;
    ui->label_9->setText("Please select the brewtime");
    ui->pushButton_4 -> setEnabled(false);
    ui->pushButton_5 -> setEnabled(false);
    if (cuplength != 0)
    {
        placeDialog window;         // calls place dialog window
        window.setModal(true);
        window.exec();
        /* check if the dialog window was closed and switch to the
         * loading screen if it was */
        if (window.isActiveWindow() == false){
            //check water temperature here
            while (temp > 80){
                temp = checkTemp();
                /* QString temptext;
                 *  temptext = QString::number(temp);
                 *  ui->label_8->setText(temptext);
                 */
            }

            //lower the infuser here
            process.start("sh", QStringList() << "-c" << "./down");
            sleep(2);
            process.terminate();
            //process.close();
            process2.start("sh", QStringList() << "-c" << "./zero");
            sleep(2);
            process2.terminate();
            //process2.close();

            ui->stackedWidget->setCurrentIndex(2);
            if (cuplength == 1) counter = 10;                              //360 seconds brewing time countdown
            else if (cuplength == 2) counter = 360;
            else counter = 420;
            ui->progressBar->setRange(0,counter);
            countdowntimer->start(1000);
        }
    }
}

//cancel button
void title_scr::on_pushButton_13_clicked()
{
    ui->pushButton -> setEnabled(true);
    ui->pushButton_2 -> setEnabled(true);
    ui->pushButton_3 -> setEnabled(true);
    ui->pushButton_4 -> setEnabled(false);
    ui->pushButton_5 -> setEnabled(false);
    cupsize = 0;
    cuplength = 0;
    counter = 0;
    ui->label_9->setText("Please select the brewtime");
    ui->stackedWidget->setCurrentIndex(0);
    if (countdowntimer->isActive()) countdowntimer->stop();
}
