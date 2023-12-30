#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <QObject>

#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test t;
    QObject::connect(&t, &Test::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection);

    qInfo() << "Closing the application";
    t.close();

    return a.exec();
}
