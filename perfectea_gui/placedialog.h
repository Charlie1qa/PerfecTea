#ifndef PLACEDIALOG_H
#define PLACEDIALOG_H

#include <QDialog>

namespace Ui {
class placeDialog;
}

class placeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit placeDialog(QWidget *parent = 0);
    ~placeDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::placeDialog *ui;
};

#endif // PLACEDIALOG_H
