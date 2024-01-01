#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>
#include <QDebug>

class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = nullptr);

    void sayHello();
    void doTest();

signals:
    void test();

};

#endif // SOURCE_H
