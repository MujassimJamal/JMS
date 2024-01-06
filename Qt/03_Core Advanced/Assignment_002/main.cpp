#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QEventLoop>
#include <QUrl>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString url = "https://postman-echo.com/get";

    QNetworkAccessManager* manager = new QNetworkAccessManager(&a);
    QEventLoop* loop = new QEventLoop(&a);

    QNetworkRequest* request = new QNetworkRequest(QUrl(url));
    QNetworkReply* reply = manager->get(*request);
    a.connect(reply, &QNetworkReply::finished, loop, &QEventLoop::quit);

    loop->exec();

    qInfo() << "After loop";
    qInfo() << reply->readAll();

    reply->deleteLater();
    delete request;

    return a.exec();
}
