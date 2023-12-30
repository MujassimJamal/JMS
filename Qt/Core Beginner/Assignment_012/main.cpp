#include <QCoreApplication>
#include <QDebug>
#include <iostream>

#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Source src;
    Destination desc;

    QObject::connect(&src, &Source::test, &desc, &Destination::test);
    src.doTest();

    return a.exec();
}
