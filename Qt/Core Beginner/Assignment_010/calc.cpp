#include "calc.h"

Calc::Calc(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";
}

Calc::~Calc()
{
    qInfo() << this << "deconstructed";
}

void Calc::calcDogYear()
{
    qInfo() << "Age in dog years: " << 308;
}

void Calc::calcCatYear()
{
    qInfo() << "Age in cat years: " << 176;
}
