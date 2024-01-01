#include <QCoreApplication>
#include <QDebug>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n1;
    qInfo() << "Enter first number:";
    std::cin >> n1;

    int n2;
    qInfo() << "Enter first number:";
    std::cin >> n2;

    try {
        if (n2 == 0) throw QString("Division by zero");

        int c = n1/n2;
        qInfo() << "Division:" << c;

    } catch (QString e) {
        qInfo() << e;
    }

    return a.exec();
}
