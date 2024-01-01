#include <QCoreApplication>
#include <QDebug>
#include <QSettings>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QCoreApplication::setOrganizationName("Test");
    QCoreApplication::setOrganizationName("tes.xyz");
    QCoreApplication::setApplicationName("test");

    QSettings settings(QCoreApplication::organizationName(), QCoreApplication::applicationName());

    QString key = "test";

    settings.beginGroup("group1");
    settings.setValue(key, 123);
    settings.endGroup();

    settings.beginGroup("group2");
    settings.setValue(key, 456);
    settings.endGroup();

    foreach (QString group, settings.childGroups()) {
        settings.beginGroup(group);
        qInfo() << settings.value(key);
        settings.endGroup();
    }

    qInfo() << settings.fileName();

    return a.exec();
}
