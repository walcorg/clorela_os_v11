#include "clorelaos_v11.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClorelaOs_v11 w;
    w.show();
    return a.exec();
}
