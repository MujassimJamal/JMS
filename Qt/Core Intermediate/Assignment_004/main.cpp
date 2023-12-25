#include <QCoreApplication>
#include <QIODevice>
#include <QDir>
#include <QFile>
#include <QDebug>
#include <QByteArray>

void writeRead(QString path) {
    QFile file(path);

    qInfo() << "Opening the file...";
    if (!file.open(QIODevice::ReadWrite)) {
        qInfo() << "Could not open the file: " + file.errorString();
        return;
    }

    QByteArray data = "Hello World!!!\r\n";

    qInfo() << "Writing data into the file...";
    qint64 bytes = file.write(data);

    if (bytes <= 0) {
        qInfo() << "Could not write: " + file.errorString();
        return;
    }

    file.seek(0);

    qInfo() << "Data written to the file!\nReading: ";

    QString line(file.readAll());
    qInfo() << line.trimmed();

    file.close();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString path = QDir::currentPath() + QDir::separator() + "test.txt";
    writeRead(path);

    return a.exec();
}
