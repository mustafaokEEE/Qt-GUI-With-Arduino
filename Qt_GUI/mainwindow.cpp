#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Seri portu başlat
    arduino = new QSerialPort(this);
    connect(arduino, &QSerialPort::readyRead, this, &MainWindow::readData);

    setupSerialPort();
}

MainWindow::~MainWindow()
{
    if (arduino->isOpen()) {
        arduino->close();
    }
    delete ui;
}

void MainWindow::setupSerialPort()
{
    QString arduino_uno_port_name=("COM5");
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            if (serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id &&
                serialPortInfo.productIdentifier() == arduino_uno_product_id) {

                qDebug() << "Arduino Uno found on port:" << serialPortInfo.portName();

                arduino->setPort(serialPortInfo);
                arduino->setBaudRate(QSerialPort::Baud9600);
                arduino->setDataBits(QSerialPort::Data8);
                arduino->setParity(QSerialPort::NoParity);
                arduino->setStopBits(QSerialPort::OneStop);
                arduino->setFlowControl(QSerialPort::NoFlowControl);

                if (arduino->open(QIODevice::ReadWrite)) {
                    qDebug() << "Serial port opened successfully!";
                } else {
                    qDebug() << "Failed to open serial port!";
                }
                return;
            }
        }
    }

    qDebug() << "Arduino Uno not found!";
}

void MainWindow::readData() {
    QByteArray data = arduino->readAll();
    QString dataStr = QString(data);
    qDebug() << "Data received:" << dataStr;

    // Veriyi ',' ile ayır
    QStringList dataList = dataStr.split(",");
    foreach (const QString &value, dataList) {
        if (value.startsWith("i=")) {
            QString iValue = value.mid(2);
            ui->lcdNumber->display(iValue.toFloat());
        }
        else if (value.startsWith("x=")) {
            QString xValue = value.mid(2);
            ui->lcdNumber_2->display(xValue.toFloat());
        }
        else if (value.startsWith("z=")) {
            QString zValue = value.mid(2);
            ui->lcdNumber_3->display(zValue.toFloat());
        }

    }
}

