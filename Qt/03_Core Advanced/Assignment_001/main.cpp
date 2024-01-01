#include <QCoreApplication>
#include <QDebug>
#include <QFuture>
#include <QtConcurrent>
#include <QDirIterator>
#include <QDir>

void count(QString path) {
    QDirIterator iter(path, QDir::Files,  QDirIterator::Subdirectories);
    int value = 0;
    while (iter.hasNext()) {
        qInfo() << iter.next();
        value++;
    }

    qInfo() << "Found" << value << "files";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString path = QDir::currentPath();

    QFuture<void> f = QtConcurrent::run(&count, path);
    f.waitForFinished();
    qInfo() << "Done";

    return a.exec();
}
