#ifndef TITLE_SCR_H
#define TITLE_SCR_H

#include <QMainWindow>

namespace Ui {
class title_scr;
}

class title_scr : public QMainWindow
{
    Q_OBJECT

public:
    explicit title_scr(QWidget *parent = 0);
    ~title_scr();

private slots:
    void showTime();    

    void updateBar();

    double checkTemp();

    void mousePressEvent(QMouseEvent *event);

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::title_scr *ui;
    int counter;
    float temp;
    QTimer *countdowntimer;
};

#endif // TITLE_SCR_H
