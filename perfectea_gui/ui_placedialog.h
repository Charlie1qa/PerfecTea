/********************************************************************************
** Form generated from reading UI file 'placedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEDIALOG_H
#define UI_PLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_placeDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *placeDialog)
    {
        if (placeDialog->objectName().isEmpty())
            placeDialog->setObjectName(QStringLiteral("placeDialog"));
        placeDialog->resize(400, 300);
        placeDialog->setStyleSheet(QStringLiteral("background-color: rgb(152, 208, 119);"));
        label = new QLabel(placeDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 361, 161));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setWordWrap(true);
        pushButton = new QPushButton(placeDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 180, 101, 61));

        retranslateUi(placeDialog);

        QMetaObject::connectSlotsByName(placeDialog);
    } // setupUi

    void retranslateUi(QDialog *placeDialog)
    {
        placeDialog->setWindowTitle(QApplication::translate("placeDialog", "Dialog", 0));
        label->setText(QApplication::translate("placeDialog", "Please add a mug with hot water to the landing stage and insert the T-Point in the water", 0));
        pushButton->setText(QApplication::translate("placeDialog", "Done", 0));
    } // retranslateUi

};

namespace Ui {
    class placeDialog: public Ui_placeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEDIALOG_H
