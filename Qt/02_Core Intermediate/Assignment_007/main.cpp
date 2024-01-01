#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QByteArray>
#include <QIODevice>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QByteArray data;
    for (int i=0; i<1000; i++) {
        data.append(1);
    }

    QByteArray compress = qCompress(data);
    QByteArray decompress = qUncompress(compress);

    qInfo() << "Original: " << data.size();
    qInfo() << "Compress: " << compress.size();
    qInfo() << "Decompress: " << decompress.size();

    return a.exec();
}
