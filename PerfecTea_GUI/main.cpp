#include "mywindow.h"
#include "title_scr.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //QWidget *widget = new QWidget;
    title_scr title;
    /*Ui::MyWindow ui;
    ui.setupUi(widget);*/


    //widget->show();
    title.show();
    return app.exec();
}
