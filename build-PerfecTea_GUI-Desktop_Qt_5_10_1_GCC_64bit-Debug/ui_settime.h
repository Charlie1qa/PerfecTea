/********************************************************************************
** Form generated from reading UI file 'settime.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTIME_H
#define UI_SETTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SetTime
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *SetTime)
    {
        if (SetTime->objectName().isEmpty())
            SetTime->setObjectName(QStringLiteral("SetTime"));
        SetTime->resize(303, 209);
        SetTime->setStyleSheet(QStringLiteral("background-color: rgb(152, 208, 119);"));
        textEdit = new QTextEdit(SetTime);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 90, 271, 41));
        pushButton_2 = new QPushButton(SetTime);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 140, 81, 41));
        label = new QLabel(SetTime);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 291, 51));
        label->setWordWrap(true);
        pushButton = new QPushButton(SetTime);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 140, 81, 41));

        retranslateUi(SetTime);

        QMetaObject::connectSlotsByName(SetTime);
    } // setupUi

    void retranslateUi(QDialog *SetTime)
    {
        SetTime->setWindowTitle(QApplication::translate("SetTime", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("SetTime", "Cancel", nullptr));
        label->setText(QApplication::translate("SetTime", "Enter system time and date in such format: 2 OCT 2006 14:00:00", nullptr));
        pushButton->setText(QApplication::translate("SetTime", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetTime: public Ui_SetTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTIME_H
