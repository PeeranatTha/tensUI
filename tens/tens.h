#ifndef TENS_H
#define TENS_H

#include <QWidget>
#include <QTcpSocket>

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


};

#endif // TENS_H
