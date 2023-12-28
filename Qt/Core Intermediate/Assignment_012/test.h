#ifndef TEST_H
#define TEST_H

#include <QObject>

class Test : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(Test)

    Q_CLASSINFO("Author", "Mujassim Bhaijamal")
    Q_CLASSINFO("URL", "mujassimjamal.github.io")
public:
    explicit Test(QObject *parent = nullptr);

signals:
};

#endif // TEST_H
