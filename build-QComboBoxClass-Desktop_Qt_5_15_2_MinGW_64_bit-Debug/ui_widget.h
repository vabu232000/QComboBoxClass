/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QPushButton *CaptureValuepushButton;
    QPushButton *SetValuepushButton;
    QPushButton *GetValuepushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(723, 373);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(false);

        horizontalLayout->addWidget(comboBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        CaptureValuepushButton = new QPushButton(Widget);
        CaptureValuepushButton->setObjectName(QString::fromUtf8("CaptureValuepushButton"));

        verticalLayout->addWidget(CaptureValuepushButton);

        SetValuepushButton = new QPushButton(Widget);
        SetValuepushButton->setObjectName(QString::fromUtf8("SetValuepushButton"));

        verticalLayout->addWidget(SetValuepushButton);

        GetValuepushButton = new QPushButton(Widget);
        GetValuepushButton->setObjectName(QString::fromUtf8("GetValuepushButton"));

        verticalLayout->addWidget(GetValuepushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        CaptureValuepushButton->setText(QCoreApplication::translate("Widget", "Capture Values", nullptr));
        SetValuepushButton->setText(QCoreApplication::translate("Widget", "Set Values", nullptr));
        GetValuepushButton->setText(QCoreApplication::translate("Widget", "Get Values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
