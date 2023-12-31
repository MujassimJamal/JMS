#include <QCoreApplication>
#include <QDebug>
#include "watcher.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Watcher w("test.txt", &a);
    w.startWatcher();

    return a.exec();
}
