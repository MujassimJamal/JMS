#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include "source.h"

class Destination : public QObject
{
    Q_OBJECT
public:
    explicit Destination(QObject *parent = nullptr);

signals:

public slots:
    void test();
};

#endif // DESTINATION_H
