#ifndef SETTIME_H
#define SETTIME_H

#include <QDialog>

namespace Ui {
class SetTime;
}

class SetTime : public QDialog
{
    Q_OBJECT

public:
    explicit SetTime(QWidget *parent = 0);
    ~SetTime();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::SetTime *ui;
};

#endif // SETTIME_H
