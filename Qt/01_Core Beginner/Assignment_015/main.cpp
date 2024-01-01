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
    //garbage values are automatically translated to 0 so the condition will still work without specifying typeid. However i just wanted to try checking out the integer type for the age explicitly.

    ageList.removeOne(0);
    qInfo() << "";
    foreach (int i, ageList) {
        qInfo() << i;
    }

    qInfo() << "Finished";

    return a.exec();
}
