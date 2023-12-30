#include "teacher.h"

Teacher::Teacher(QObject *parent)
    : Person{parent}
{

}

void Teacher::teach()
{
    qInfo() << "Teaching";
}
