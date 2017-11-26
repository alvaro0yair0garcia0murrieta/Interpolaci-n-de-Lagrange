#include "met5.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    met5 w;
    w.show();

    return a.exec();
}
