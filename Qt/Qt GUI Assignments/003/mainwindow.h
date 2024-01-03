#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QValidator>
#include <QRegExpValidator>
#include <QRegularExpressionValidator>
#include <QRegExp>
#include <QThread>
#include <QtConcurrent>
#include <QFuture>
#include <QDir>
#include <QFile>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_submitBtn_clicked();
    void on_emailEdit_textChanged(const QString &arg1);

private:
    bool isValidInput();
    bool isDataSaved(QString content);

    void showInfoMessageBox(QString &message);
    void showCriticalMessageBox(QString &message);

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
