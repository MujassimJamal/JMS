#include <QCoreApplication>
#include <QDebug>
#include <QVector>
#include <QRandomGenerator>

// using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<int> vecA;
    QVector<int> vecB;

    vecA.resize(10);
    std::fill(vecA.begin(), vecA.end(), 5);
    for (int i=0; i<10; i++) {
        vecB.append(QRandomGenerator::global()->bounded(100));
    }

    std::sort(vecB.begin(), vecB.end());

    qInfo() << vecA;
    qInfo() << vecB;

    return a.exec();
}
