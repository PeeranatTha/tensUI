#include "tens.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tens w;
    w.show();

    return a.exec();
}
