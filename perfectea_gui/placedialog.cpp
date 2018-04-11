#include "placedialog.h"
#include "ui_placedialog.h"

placeDialog::placeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::placeDialog)
{
    ui->setupUi(this);
}

placeDialog::~placeDialog()
{
    delete ui;
}

void placeDialog::on_pushButton_clicked()
{
    placeDialog::close();
}
