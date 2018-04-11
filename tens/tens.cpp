#include "tens.h"
#include <QtWidgets>

tens::tens(QWidget *parent) :
    QWidget(parent)
{
    QLabel *TestLabel = new QLabel("test");

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(TestLabel);
    setLayout(mainLayout);
//! [4]

//! [5]
    setWindowTitle(tr("Tens"));
}


