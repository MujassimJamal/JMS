#include "destination.h"

Destination::Destination(QObject *parent)
    : QObject{parent}
{

}

void Destination::test()
{
    Source* src = qobject_cast<Source*>(sender());
    src->sayHello();
}
