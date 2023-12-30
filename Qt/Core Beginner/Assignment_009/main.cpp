#include <QCoreApplication>
#include <QDebug>
#include <iostream>

void calculateAge(int age) {
    age = age + 10;
    qInfo() << "In ten years you will be:" << age;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 21;

    qInfo() << "Enter your age in years:";
    std::cin >> age;

    calculateAge(age);
//    qInfo() << "Outside function: " << age;

    return a.exec();
}
