#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    QList<int> ageList;

    do {
        qInfo() << "Enter an age:";
        std::cin >> age;

        ageList.append(age);
    }while (age != 0 && *(typeid(age).name()) == 'i');

    ageList.removeOne(0);
    qInfo() << "";
    foreach (int i, ageList) {
        qInfo() << i;
    }

    qInfo() << "Finished";

    return a.exec();
}
