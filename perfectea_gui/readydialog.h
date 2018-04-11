#ifndef READYDIALOG_H
#define READYDIALOG_H

#include <QDialog>

namespace Ui {
class readyDialog;
}

class readyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit readyDialog(QWidget *parent = 0);
    ~readyDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::readyDialog *ui;
};

#endif // READYDIALOG_H
