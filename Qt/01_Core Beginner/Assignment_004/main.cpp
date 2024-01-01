#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 21;
    qInfo() << "I am" << age << "years old";

    return a.exec();
}
