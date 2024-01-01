#include <QCoreApplication>
#include <QDebug>
#include <iostream>

void printHello(int m) {
    QString msg = "Hello World";
    for (int i=0; i<m; i++) {
        qInfo() << msg;
    }
}

void getInput() {
    int m;
    qInfo() << "Enter the maximum:";
    std::cin >> m;

    printHello(m);
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    getInput();

    return a.exec();
}
