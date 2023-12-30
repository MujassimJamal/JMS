#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int m;
    qInfo() << "Enter a maximum";
    std::cin >> m;

    for (int i=1; i<=m; i++) {
        qInfo() << i << "Hello";
    }

    return a.exec();
}
