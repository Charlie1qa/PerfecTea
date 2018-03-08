/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_infodialog
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *infodialog)
    {
        if (infodialog->objectName().isEmpty())
            infodialog->setObjectName(QStringLiteral("infodialog"));
        infodialog->resize(320, 240);
        infodialog->setStyleSheet(QStringLiteral("background-color: rgb(152, 208, 119);"));
        pushButton = new QPushButton(infodialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 180, 89, 25));
        label = new QLabel(infodialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 251, 111));
        label->setWordWrap(true);
        label_2 = new QLabel(infodialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 111, 17));

        retranslateUi(infodialog);

        QMetaObject::connectSlotsByName(infodialog);
    } // setupUi

    void retranslateUi(QDialog *infodialog)
    {
        infodialog->setWindowTitle(QApplication::translate("infodialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("infodialog", "Close", Q_NULLPTR));
        label->setText(QApplication::translate("infodialog", "The GUI was created by Karolis Borodicas, Charlie Owens and Martin Cusack. All rights reserved.", Q_NULLPTR));
        label_2->setText(QApplication::translate("infodialog", "PerfecTea v0.1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class infodialog: public Ui_infodialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
