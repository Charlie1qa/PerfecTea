#include "readydialog.h"
#include "ui_readydialog.h"

readyDialog::readyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::readyDialog)
{
    ui->setupUi(this);
}

readyDialog::~readyDialog()
{
    delete ui;
}

void readyDialog::on_pushButton_clicked()
{
    readyDialog::close();
}
