/********************************************************************************
** Form generated from reading UI file 'tens.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENS_H
#define UI_TENS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tens
{
public:

    void setupUi(QWidget *tens)
    {
        if (tens->objectName().isEmpty())
            tens->setObjectName(QStringLiteral("tens"));
        tens->resize(400, 300);

        retranslateUi(tens);

        QMetaObject::connectSlotsByName(tens);
    } // setupUi

    void retranslateUi(QWidget *tens)
    {
        tens->setWindowTitle(QApplication::translate("tens", "tens", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tens: public Ui_tens {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENS_H
