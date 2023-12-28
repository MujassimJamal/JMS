#include <QCoreApplication>
#include <QDebug>
#include <QMetaObject>
#include <QMetaClassInfo>

#include "test.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test* test = new Test();
    test->setObjectName("test");
    const QMetaObject* testMetaInfo = test->metaObject();

    qInfo() << test->metaObject()->className();
    qInfo() << "Info: " << testMetaInfo->classInfo(0).name() << "  =  " << testMetaInfo->classInfo(0).value();
    qInfo() << "Info: " << testMetaInfo->classInfo(1).name() << "  =  " << testMetaInfo->classInfo(1).value();

    return a.exec();
}
