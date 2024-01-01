#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Hello my name is Mujassim";
    QByteArray encoded = name.toLatin1().toBase64();
    QByteArray decoded = QByteArray::fromBase64(encoded);

    qInfo() << encoded;
    qInfo() << "------------------------------------------";
    qInfo() << decoded;


    return a.exec();
}
