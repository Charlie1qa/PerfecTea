/********************************************************************************
** Form generated from reading UI file 'mywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWindow
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;

    void setupUi(QWidget *MyWindow)
    {
        if (MyWindow->objectName().isEmpty())
            MyWindow->setObjectName(QStringLiteral("MyWindow"));
        MyWindow->resize(357, 264);
        MyWindow->setStyleSheet(QStringLiteral("background-color: rgb(152, 208, 119);"));
        pushButton_2 = new QPushButton(MyWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 20, 81, 81));
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/img/regular.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(72, 72));
        pushButton_3 = new QPushButton(MyWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 20, 81, 81));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/img/long.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(72, 72));
        pushButton_4 = new QPushButton(MyWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 130, 81, 81));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/img/large.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(72, 72));
        pushButton_5 = new QPushButton(MyWindow);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 130, 81, 81));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/img/small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(72, 72));
        pushButton_6 = new QPushButton(MyWindow);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 130, 81, 81));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/buttons/img/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(72, 72));
        pushButton = new QPushButton(MyWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 81, 81));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/buttons/img/short.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(72, 72));
        label_2 = new QLabel(MyWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 110, 51, 17));
        label_3 = new QLabel(MyWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 110, 41, 17));
        label_4 = new QLabel(MyWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 220, 41, 17));
        label_5 = new QLabel(MyWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 220, 41, 17));
        label_6 = new QLabel(MyWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 220, 61, 17));
        label = new QLabel(MyWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 110, 41, 17));

        retranslateUi(MyWindow);

        QMetaObject::connectSlotsByName(MyWindow);
    } // setupUi

    void retranslateUi(QWidget *MyWindow)
    {
        MyWindow->setWindowTitle(QApplication::translate("MyWindow", "PerfecTea", 0));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton->setText(QString());
        label_2->setText(QApplication::translate("MyWindow", "Regular", 0));
        label_3->setText(QApplication::translate("MyWindow", "Long", 0));
        label_4->setText(QApplication::translate("MyWindow", "Large", 0));
        label_5->setText(QApplication::translate("MyWindow", "Small", 0));
        label_6->setText(QApplication::translate("MyWindow", "Settings", 0));
        label->setText(QApplication::translate("MyWindow", "Short", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWindow: public Ui_MyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MYWINDOW_H
