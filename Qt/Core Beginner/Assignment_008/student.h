#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include "person.h"

class Student : public Person
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

    void buyBooks();

signals:

};

#endif // STUDENT_H
