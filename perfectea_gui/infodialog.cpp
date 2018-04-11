#include "infodialog.h"
#include "ui_infodialog.h"

infodialog::infodialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infodialog)
{
    ui->setupUi(this);
}

infodialog::~infodialog()
{
    delete ui;
}

void infodialog::on_pushButton_clicked()
{
    infodialog::close();
}
