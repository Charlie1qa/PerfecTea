/********************************************************************************
** Form generated from reading UI file 'title_scr.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLE_SCR_H
#define UI_TITLE_SCR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_title_scr
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *date1;
    QLabel *bckgr1;
    QLabel *clock1;
    QWidget *page_2;
    QLabel *label_2;
    QLabel *label_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *page_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QMainWindow *title_scr)
    {
        if (title_scr->objectName().isEmpty())
            title_scr->setObjectName(QStringLiteral("title_scr"));
        title_scr->resize(480, 320);
        title_scr->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(title_scr);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setAutoFillBackground(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 621, 381));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        date1 = new QLabel(page);
        date1->setObjectName(QStringLiteral("date1"));
        date1->setEnabled(true);
        date1->setGeometry(QRect(50, 230, 141, 61));
        QFont font;
        font.setPointSize(15);
        date1->setFont(font);
        date1->setAcceptDrops(false);
        date1->setAutoFillBackground(false);
        date1->setStyleSheet(QStringLiteral(""));
        bckgr1 = new QLabel(page);
        bckgr1->setObjectName(QStringLiteral("bckgr1"));
        bckgr1->setGeometry(QRect(0, 0, 480, 320));
        bckgr1->setStyleSheet(QStringLiteral("border-image: url(:/buttons/img/title1.png);"));
        clock1 = new QLabel(page);
        clock1->setObjectName(QStringLiteral("clock1"));
        clock1->setGeometry(QRect(250, 230, 131, 51));
        QFont font1;
        font1.setPointSize(20);
        clock1->setFont(font1);
        stackedWidget->addWidget(page);
        bckgr1->raise();
        date1->raise();
        clock1->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QStringLiteral("background-color: rgb(152, 208, 119);"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 130, 51, 17));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 270, 61, 17));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 170, 90, 90));
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/img/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(85, 85));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 30, 90, 90));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/img/regular.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(85, 85));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 170, 90, 90));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/img/small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(85, 85));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 270, 41, 17));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 130, 41, 17));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 170, 90, 90));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/img/large.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(85, 85));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 270, 41, 17));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 30, 90, 90));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/buttons/img/long.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(85, 85));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 130, 41, 17));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 90, 90));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/buttons/img/short.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(85, 85));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QStringLiteral("background-color: rgb(152, 208, 119);"));
        pushButton_7 = new QPushButton(page_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(130, 30, 191, 51));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(130, 90, 191, 51));
        pushButton_9 = new QPushButton(page_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 150, 191, 51));
        pushButton_10 = new QPushButton(page_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(130, 210, 191, 51));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(180, 270, 89, 25));
        stackedWidget->addWidget(page_3);
        title_scr->setCentralWidget(centralwidget);

        retranslateUi(title_scr);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(title_scr);
    } // setupUi

    void retranslateUi(QMainWindow *title_scr)
    {
        title_scr->setWindowTitle(QApplication::translate("title_scr", "PerfecTea", Q_NULLPTR));
        date1->setText(QApplication::translate("title_scr", "Date\n"
"", Q_NULLPTR));
        bckgr1->setText(QString());
        clock1->setText(QApplication::translate("title_scr", "Time", Q_NULLPTR));
        label_2->setText(QApplication::translate("title_scr", "Regular", Q_NULLPTR));
        label_6->setText(QApplication::translate("title_scr", "Help", Q_NULLPTR));
        pushButton_6->setText(QString());
        pushButton_2->setText(QString());
        pushButton_5->setText(QString());
        label_5->setText(QApplication::translate("title_scr", "Small", Q_NULLPTR));
        label_3->setText(QApplication::translate("title_scr", "Long", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_4->setText(QApplication::translate("title_scr", "Large", Q_NULLPTR));
        pushButton_3->setText(QString());
        label->setText(QApplication::translate("title_scr", "Short", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_7->setText(QApplication::translate("title_scr", "Set Date && Time", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("title_scr", "Info and Credits", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("title_scr", "Easter Egg?", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("title_scr", "Shutdown", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("title_scr", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class title_scr: public Ui_title_scr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLE_SCR_H
