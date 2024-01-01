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

    //the below concurrent's run method runs the count method on a separate thread taken from thread pool. 
    //and since only a single thread is going to run the count method, it will be executed sequentially hence printing out the number of files at the last.
    QFuture<void> f = QtConcurrent::run(&count, path);
    f.waitForFinished();
    qInfo() << "Done";

    return a.exec();
}
