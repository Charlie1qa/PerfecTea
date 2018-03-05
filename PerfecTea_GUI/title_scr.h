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

    void mousePressEvent(QMouseEvent *event);

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::title_scr *ui;
};

#endif // TITLE_SCR_H
