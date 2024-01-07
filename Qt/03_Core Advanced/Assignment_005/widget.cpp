#include "widget.h"

Widget::Widget(QObject *parent)
    : QObject{parent}
{}

void Widget::doMath(int max)
{
    int value = QRandomGenerator::global()->bounded(max);
    value = value * 1000;
    qInfo() << "Value: " << value;
}

void Widget::testMath()
{
    QBENCHMARK
    {
        int max = QRandomGenerator::global()->bounded(1000);
        doMath(max);
    }
}
