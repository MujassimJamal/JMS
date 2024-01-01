#ifndef CALC_H
#define CALC_H

#include <QObject>
#include <QDebug>

class Calc : public QObject
{
    Q_OBJECT
public:
    explicit Calc(QObject *parent = nullptr);
    ~Calc();

    void calcDogYear();
    void calcCatYear();

signals:

};

#endif // CALC_H
