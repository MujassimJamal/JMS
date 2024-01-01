#include <QCoreApplication>
#include <QDebug>
#include <iostream>

#include "person.h"
#include "student.h"
#include "teacher.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Student* s;
    Teacher* t;

    t->teach();
    s->buyBooks();

    t->sayHello("Mr. Smith");
    s->sayHello();

    return a.exec();
}
