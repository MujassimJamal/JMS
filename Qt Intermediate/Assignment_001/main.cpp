#include <QCoreApplication>
#include <QDebug>
#include <QSharedPointer>
#include "test.h"

void doDelete(test* tptr) {
    qInfo() << tptr;
    tptr->deleteLater();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSharedPointer<test> tptr(new test(), doDelete);
    tptr.clear();

    return a.exec();
}
