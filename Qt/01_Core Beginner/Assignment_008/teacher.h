#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include "person.h"

class Teacher : public Person
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

    void teach();

signals:

};

#endif // TEACHER_H
