#include "title_scr.h"
#include <QApplication>
#include <QGuiApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    title_scr title;

    title.showFullScreen();
    return app.exec();
}
