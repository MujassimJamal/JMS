#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <QMap>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<QString, int> nameMap;
    QString name;
    int age;
    QTextStream qin(stdin);

    do {
        qInfo() << "Enter a name or type quit";
        name = qin.readLine();

        if (name.toLower() == "quit") { break; }

        qInfo() << "Enter an age";
        age = qin.readLine().toInt();

        qInfo() << name << " is " << age << " years old";
        nameMap[name] = age;
    }while(true);

    foreach (QString name, nameMap.keys()) {
        qInfo() << name << " is " << nameMap[name] << " years old";
    }

    return a.exec();
}
