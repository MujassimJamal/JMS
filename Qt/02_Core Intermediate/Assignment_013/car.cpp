#include "car.h"

car::car(QObject *parent)
    : QObject{parent}
{}

car *car::instance()
{
    return Singleton<car>::instance(car::createInstance);
}

car *car::createInstance()
{
    return new car(nullptr);
}
