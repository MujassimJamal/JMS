#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age:";
    std::cin >> age;
    qInfo() << "You are" << age << "years old";

    return a.exec();
}
