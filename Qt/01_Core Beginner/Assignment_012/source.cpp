#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{

}

void Source::sayHello()
{
    qInfo() << "Hello World";
}

void Source::doTest()
{
    emit test();
}
