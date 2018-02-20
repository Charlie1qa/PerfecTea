#include "mywindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *widget = new QWidget;
    Ui::MyWindow ui;
    ui.setupUi(widget);

    widget->show();
    return app.exec();
}
