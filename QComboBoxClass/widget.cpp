#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

     QStringList list;
     list <<"Fruits"<<"Apple"<<"Orange"<<"papaya"<<"JackFruit";

     ui->comboBox->setStyleSheet("background-color: rgb(0, 0, 0) ; color: rgb(0, 255, 255);");
        ui->comboBox->setEditable(true);
        for(int i=0;i<list.size();i++)
        {
        ui->comboBox->addItem(QIcon("C:/Users/Vabs/Documents/github/QComboBoxClass/fruit.jpg"),list.at(i));
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_CaptureValuepushButton_clicked()
{
    ui->comboBox->currentText();

         qDebug()<<"The currently choosen item is"<<(ui->comboBox->currentText());

        qDebug()<<"The Index is:"<<ui->comboBox->currentIndex();
}

void Widget::on_SetValuepushButton_clicked()
{
     ui->comboBox->setCurrentIndex(3);
}

void Widget::on_GetValuepushButton_clicked()
{
    qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";

        for(int i=0;i<ui->comboBox->count();i++)

        {
            qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);
        }
}
