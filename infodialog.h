#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class infodialog;
}

class infodialog : public QDialog
{
    Q_OBJECT

public:
    explicit infodialog(QWidget *parent = 0);
    ~infodialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::infodialog *ui;
};

#endif // INFODIALOG_H
