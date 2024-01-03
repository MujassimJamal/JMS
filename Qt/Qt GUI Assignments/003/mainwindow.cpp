#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QThread::currentThread()->setObjectName("MainWindow Thread");
    qDebug() << "== MainWindow Thread: " << QThread::currentThread();

    //pattern taken from https://stackoverflow.com/questions/9101887/how-to-validate-email-address-using-qregexp
    QRegExp emailRe("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    emailRe.setCaseSensitivity(Qt::CaseInsensitive);
    emailRe.setPatternSyntax(QRegExp::RegExp);

    QValidator* emailValidator = new QRegExpValidator(emailRe, this);
    this->ui->emailEdit->setValidator(emailValidator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::isValidInput()
{
    if (!this->ui->emailEdit->hasAcceptableInput()) {
        this->ui->inputStatusEdit->setText("Invalid input specified!");
        return false;
    }

    return true;
}

bool MainWindow::isDataSaved(QString content)
{
    //a separate thread for file write operation
    qDebug() << "== File Worker Thread: " << QThread::currentThread();

    QFile* file = new QFile(QDir::currentPath() + "/" + "data.txt");
    file->deleteLater();

    if (!file->open(QFile::WriteOnly)) {
        qDebug() << "Can not open file!";
        return false;
    }

    QTextStream* qin = new QTextStream(file);
    *qin << content.toLatin1();

    file->close();

    return true;
}

void MainWindow::on_submitBtn_clicked()
{
    if (isValidInput()) {
        QString data;

        data = "Name: " + this->ui->nameEdit->text() + "\n";
        if (this->ui->radioGroup->checkedButton()) {
            data = data + "Gender: " + this->ui->radioGroup->checkedButton()->text() + "\n";
        }
        data = data + "DOB: " + this->ui->dateEdit->text() + "\n";
        data = data + "Address: " + this->ui->addressEdit->text() + "\n";
        data = data + "Email: " + this->ui->emailEdit->text() + "\n";
        data = data + "Phone Number: " + this->ui->phoneEdit->text() + "\n";
        data = data + "Country: " + this->ui->countryBoxEdit->currentText() + "\n";
        data = data + "Description: " + this->ui->descEdit->toPlainText();

        QFuture<bool> f = QtConcurrent::run(this, &isDataSaved, data);
        if (!f.isFinished() | !f.result()) {
            this->ui->inputStatusEdit->setText("Can not save data!");
        }

        this->ui->inputStatusEdit->setText("Data saved in data.txt");
        showInfoMessageBox(data);
    }
}

void MainWindow::showInfoMessageBox(QString &message)
{
    QMessageBox* msgBox = new QMessageBox();
    msgBox->setIcon(QMessageBox::Information);

    msgBox->setText(message);
    msgBox->exec();
}

void MainWindow::showCriticalMessageBox(QString &message)
{
    QMessageBox* msgBox = new QMessageBox();
    msgBox->setIcon(QMessageBox::Critical);

    msgBox->setText(message);
    msgBox->exec();
}


void MainWindow::on_emailEdit_textChanged(const QString &arg1)
{
    QLineEdit* emailEdit = this->ui->emailEdit;
    QString emailStyle = emailEdit->styleSheet();
    if (!emailEdit->hasAcceptableInput()) {
        emailEdit->setStyleSheet(emailStyle + "color: red;");
        this->ui->inputStatusEdit->setText("");
    }else {
        emailEdit->setStyleSheet(emailStyle + "color: green;");
    }
}

