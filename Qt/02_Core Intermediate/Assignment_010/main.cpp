#include <QCoreApplication>
#include <QThreadPool>
#include <QProcess>
#include <QDebug>
#include <QByteArray>

void startProcess() {
    QProcess process;

    qInfo() << "Start";
    process.start("echo", QStringList() << "Hello World");

    if (process.waitForStarted()) {
        if (process.waitForReadyRead()) {
            QByteArray output = process.readAll();
            qInfo() << "Output: " << output;

            if (process.waitForFinished()) {
                qInfo() << "Exit code:" << process.exitCode();
            }
        }

    }

    process.close();
}

void executeProcess() {
    QProcess process;

    qInfo() << "Execute";
    int exitCode = process.execute("echo", QStringList() << "Hello World");
    qInfo() << "Exit code:" << exitCode;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //start is an asynchronous method while execute is a synchronous.

    startProcess();
    qInfo() << "";
    executeProcess();

    return a.exec();
}
