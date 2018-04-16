/********************************************************************************
** Form generated from reading UI file 'readydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READYDIALOG_H
#define UI_READYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_readyDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *readyDialog)
    {
        if (readyDialog->objectName().isEmpty())
            readyDialog->setObjectName(QStringLiteral("readyDialog"));
        readyDialog->resize(400, 300);
        readyDialog->setStyleSheet(QStringLiteral("background-color: rgb(152, 208, 119);"));
        label = new QLabel(readyDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 191, 131));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setWordWrap(true);
        pushButton = new QPushButton(readyDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 160, 111, 81));
        pushButton->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));

        retranslateUi(readyDialog);

        QMetaObject::connectSlotsByName(readyDialog);
    } // setupUi

    void retranslateUi(QDialog *readyDialog)
    {
        readyDialog->setWindowTitle(QApplication::translate("readyDialog", "Dialog", 0));
        label->setText(QApplication::translate("readyDialog", "Tea is ready, Enjoy :)", 0));
        pushButton->setText(QApplication::translate("readyDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class readyDialog: public Ui_readyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READYDIALOG_H
