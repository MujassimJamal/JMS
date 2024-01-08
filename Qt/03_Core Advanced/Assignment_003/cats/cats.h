#ifndef CATS_H
#define CATS_H

#include <QObject>
#include <QtPlugin>
#include <QDebug>
#include <QString>
#include "plugin.h"

class Cats: public QObject, public Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.voidrealms.plugin")
    Q_INTERFACES(Plugin)

public:
    explicit Cats(QObject* parent = nullptr);
    ~Cats();

signals:

public slots:

    // Plugin interface
public:
    void test(QString name) Q_DECL_OVERRIDE; // override
};

#endif // CATS_H
