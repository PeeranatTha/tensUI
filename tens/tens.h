#ifndef TENS_H
#define TENS_H

#include <QWizard>
#include <QWidget>
#include <QTcpSocket>
#include <QPushButton>
#include <QLabel>

class tens : public QWizard
{
    Q_OBJECT

public:
    explicit tens(QWidget *parent = 0);
    //void accept() override;

    QTcpSocket *m_pClientsocket;
    //error connection

private:

};


//Page1
class WelcomePage : public QWizardPage
{
    Q_OBJECT

public:
    WelcomePage(QWidget *parent = 0);

private:
    QLabel *WelcomeLabel;
};


//Page2
class InfoPage : public QWizardPage
{
    Q_OBJECT

public:
    InfoPage(QWidget *parent = 0);

private:
    QLabel *InfoLabel;
};


//Page3
class SetupPage : public QWizardPage
{
    Q_OBJECT

public:
    SetupPage(QWidget *parent = 0);
    //QTcpSocket *m_pClientsocket;

/*private slots:
    void displayError ( QAbstractSocket::SocketError socketError );
private slots:
    void on_ConnectButton_clicked();*/

private:
    QPushButton *ConnectButton;
};

#endif // TENS_H
