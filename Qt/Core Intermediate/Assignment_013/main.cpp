#include <QCoreApplication>
#include <QDebug>
#include "car.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    car::instance()->name = "Mujassim";
    car::instance()->age = 21;

    car* myCar = car::instance();
    qInfo() << myCar->name << " is " << QString::number(myCar->age) << " years old.";


    return a.exec();
}
