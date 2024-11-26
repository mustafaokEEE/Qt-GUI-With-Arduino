#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void readData();  // Arduino'dan gelen veriyi okuma fonksiyonu
    void setupSerialPort();  // Seri port ayarlarını yapma fonksiyonu

private:
    Ui::MainWindow *ui;
    QSerialPort *arduino;  // QSerialPort nesnesi tanımlanmalı
    static const quint16 arduino_uno_vendor_id = 6790;
    static const quint16 arduino_uno_product_id = 29987;
};

#endif // MAINWINDOW_H
