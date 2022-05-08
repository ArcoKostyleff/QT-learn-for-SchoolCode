/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QPushButton *loadButton;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *findButton;
    QComboBox *comboBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(573, 360);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 50, 133, 22));
        loadButton = new QPushButton(Widget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(280, 130, 214, 24));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(81, 189, 200, 16));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 120, 104, 71));
        findButton = new QPushButton(Widget);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(290, 50, 75, 24));
        comboBox = new QComboBox(Widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 270, 69, 22));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "\321\207\321\202\320\276 \320\270\321\211\320\265\320\274? ", nullptr));
        loadButton->setText(QCoreApplication::translate("Widget", "\320\267\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\277\321\200\320\270\320\262\320\272\320\270 \321\213\321\213\321\213 \320\260\320\260 \321\213\321\213 \321\213 \320\220\320\233\320\265\320\275\320\260 \320\277\321\200\320\270\320\262\320\265\321\202 ", nullptr));
        findButton->setText(QCoreApplication::translate("Widget", "\320\270\321\201\320\272\320\260\321\202\321\214", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "4", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
