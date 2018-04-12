#include "tens.h"
#include <QtWidgets>
#include <QMessageBox>

tens::tens(QWidget *parent) :
    QWizard(parent)
{
    setWindowTitle(tr("Tens"));

    addPage(new WelcomePage);
    addPage(new InfoPage);
    addPage(new SetupPage);
}


//Page1
WelcomePage::WelcomePage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle(tr("Welcome"));

    WelcomeLabel = new QLabel(tr("Welcome"));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(WelcomeLabel);
    setLayout(layout);
}


//Page2
InfoPage::InfoPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle(tr("Subject Information"));

    InfoLabel = new QLabel(tr("Subject Info"));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(InfoLabel);
    setLayout(layout);
}


//Page3
SetupPage::SetupPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle(tr("Setup"));

    //m_pClientsocket = new QTcpSocket(this);

    ConnectButton = new QPushButton("Connect", this);
    //connect(ConnectButton, SIGNAL (released()), this, SLOT (on_ConnectButton_clicked()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(ConnectButton);
    setLayout(layout);
}

//IP&PORT
/*void tens::on_ConnectButton_clicked()
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
             QMessageBox::information(this, tr("Tens"),
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
}*/


