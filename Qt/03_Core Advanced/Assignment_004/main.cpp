#include <QCoreApplication>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Inspecting Drivers";

    foreach (QString driver, QSqlDatabase::drivers()) {
        qInfo() << driver;

        QSqlDatabase db = QSqlDatabase::addDatabase(driver);

        qInfo() << "Transactions: " << db.driver()->hasFeature(QSqlDriver::DriverFeature::Transactions);
    }

    return a.exec();
}
