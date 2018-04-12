#include "tens.h"
#include <QtWidgets>
#include <QMessageBox>

tens::tens(QWidget *parent) :
    QWidget(parent)
{
    m_pClientsocket = new QTcpSocket(this);

    //UI
    QLabel *TestLabel = new QLabel("test");
    ConnectButton = new QPushButton("Connect", this);
    OutLabel = new QLabel("my text");

    connect(ConnectButton, SIGNAL (released()), this, SLOT (on_ConnectButton_clicked()));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(TestLabel);
    mainLayout->addWidget(ConnectButton);
    mainLayout->addWidget(OutLabel);
    setLayout(mainLayout);

    setWindowTitle(tr("Tens"));
}

//IP&PORT
void tens::on_ConnectButton_clicked()
{
    QString IP = "192.168.4.1";
    int port = 8888;
    m_pClientsocket->connectToHost(IP,port);
         connect(m_pClientsocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));

}

void tens::displayError ( QAbstractSocket::SocketError socketError )
{
    switch (socketError) {
         case QAbstractSocket::RemoteHostClosedError:
             break;
         case QAbstractSocket::HostNotFoundError:
             QMessageBox::information(this, tr("Fortune Client"),
                                      tr("The host was not found. Please check the "
                                         "host name and port settings."));
             break;
         case QAbstractSocket::ConnectionRefusedError:
             QMessageBox::information(this, tr("Tens"),
                                      tr("The connection was refused by the peer. "
                                         "Make sure the fortune server is running, "
                                         "and check that the host name and port "
                                         "settings are correct."));
             break;
         default:
             QMessageBox::information(this, tr("Tens"),
                                      tr("The following error occurred: %1.")
                                      .arg(m_pClientsocket->errorString()));
         }
}


