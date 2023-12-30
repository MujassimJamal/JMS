#include "student.h"

Student::Student(QObject *parent)
    : Person{parent}
{

}

void Student::buyBooks()
{
    qInfo() << "Buying books!";
}
