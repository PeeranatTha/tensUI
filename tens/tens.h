#ifndef TENS_H
#define TENS_H

#include <QWidget>
#include <QTcpSocket>
#include <QPushButton>
#include <QLabel>

class tens : public QWidget
{
    Q_OBJECT

public:
    explicit tens(QWidget *parent = 0);

    QTcpSocket *m_pClientsocket;

    //error connection

private slots:
    void displayError ( QAbstractSocket::SocketError socketError );

    void on_ConnectButton_clicked();

private:
    QPushButton *ConnectButton;
    QLabel *OutLabel;


};

#endif // TENS_H
