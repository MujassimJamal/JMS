#include "watcher.h"

Watcher::Watcher(QString file, QObject *parent)
    : QObject{parent}
{
    QString filePath = QDir::currentPath() + QDir::separator() + file;
    qInfo() << "File Path: " << filePath;
    qFile.setFile(filePath);

    exists = false;
    lastModified = qFile.lastModified();
}

Watcher::~Watcher()
{
    timer.stop();
    disconnect(&timer, &QTimer::timeout, this, &Watcher::watchFile);
}

void Watcher::startWatcher()
{
    timer.setInterval(500);
    connect(&timer, &QTimer::timeout, this, &Watcher::watchFile);
    timer.start();
}

void Watcher::watchFile()
{
    qFile.refresh(); //optional
    QDateTime current = QDateTime::currentDateTime();
    if (qFile.exists()) {
        if (!exists) qInfo() << "Created: " << qFile.created().toString(Qt::DateFormat::SystemLocaleLongDate);
        if (lastModified != qFile.lastModified()) qInfo() << "Modified: " << qFile.lastModified().toString(Qt::DateFormat::SystemLocaleLongDate);
        exists = true;
        lastModified = qFile.lastModified();
    } else {
        if (exists) qInfo () << "Deleted: " << current.toString(Qt::DateFormat::SystemLocaleLongDate);
        exists = false;
        lastModified = current;
    }
}
