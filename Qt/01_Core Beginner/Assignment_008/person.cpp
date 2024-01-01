#include "person.h"

Person::Person(QObject *parent)
    : QObject{parent}
{

}

void Person::sayHello(QString name)
{
    if (!name.isEmpty()) {
        qInfo() << "Hello" << name;
    }else{
        qInfo() << "Hello";
    }
}
