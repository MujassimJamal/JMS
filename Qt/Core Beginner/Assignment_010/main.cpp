#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "calc.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calc* c = new Calc();

    c->calcDogYear();
    c->calcCatYear();

    delete c;

    return a.exec();
}
