#ifndef CAR_H
#define CAR_H

#include <QObject>
#include "singleton.h"

class car : public QObject
{
    Q_OBJECT
public:
    explicit car(QObject *parent = nullptr);

    QString name;
    int age;

    static car* instance();

private:
    static car* createInstance();

signals:
};

#endif // CAR_H
