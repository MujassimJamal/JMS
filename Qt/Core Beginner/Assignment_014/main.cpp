#include <QCoreApplication>
#include <QDebug>
#include <iostream>

template<class T>
void add(T a, T b) {
    T c = a + b;
    qInfo() << c;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    add<int>(8, 100);

    return a.exec();
}
