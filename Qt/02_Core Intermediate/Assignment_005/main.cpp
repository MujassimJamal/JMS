#include <QCoreApplication>
#include <QDebug>
#include <QLoggingCategory>

Q_DECLARE_LOGGING_CATEGORY(test);
Q_LOGGING_CATEGORY(test, "test");

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Starting test";

    // Even numbers
    for(int i=0; i<1000; i++) {
        if (i%2==0) {
            QLoggingCategory::setFilterRules("test.info=true");
        }else{
            QLoggingCategory::setFilterRules("test.info=false");
        }

        qInfo(test) << "Test " << i;
    }

    qInfo() << "Complete";

    return a.exec();
}
