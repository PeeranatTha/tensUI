#include "tens.h"
#include <QtWidgets>
#include <QMessageBox>

tens::tens(QWidget *parent) :
    QWidget(parent)
{
    //m_pClientsocket = new QTcpSocket(this);

    //UI
    QLabel *TestLabel = new QLabel("test");
    QPushButton *ConnectButton = new QPushButton("Connect");

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(TestLabel);
    mainLayout->addWidget(ConnectButton);
    setLayout(mainLayout);
//! [4]

//! [5]
    setWindowTitle(tr("Tens"));
}


