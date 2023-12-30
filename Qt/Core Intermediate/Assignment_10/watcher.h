#ifndef WATCHER_H
#define WATCHER_H

#include <QObject>
#include <QDebug>
#include <QFileInfo>
#include <QDateTime>
#include <QTimer>
#include <QDir>

class Watcher : public QObject
{
    Q_OBJECT
public:
    explicit Watcher(QString file, QObject *parent = nullptr);
    ~Watcher();

    void startWatcher();

signals:

private slots:
    void watchFile();

private:
    QTimer timer;
    QFileInfo qFile;
    QDateTime lastModified;
    bool exists;
};

#endif // WATCHER_H
