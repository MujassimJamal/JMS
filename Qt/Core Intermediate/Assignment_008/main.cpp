#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <QFile>
#include <QDir>
#include <QDataStream>

using namespace std;


void writeData(QString path) {
    QFile file(path);

    if (!file.open(QFile::WriteOnly)) return;

    QList<int> list = {1, 2, 3, 4};
    QDataStream stream(&file);

    stream << list;
    file.flush();
    file.close();
}

void readData(QString path) {
    QFile file(path);

    if (!file.open(QFile::ReadOnly)) return;

    QList<int> list;
    QDataStream stream(&file);

    stream >> list;
    qInfo() << list;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString path = QDir::currentPath() + QDir::separator() + "test.txt";
    qInfo() << path;

    writeData(path);
    readData(path);

    return a.exec();
}
