#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

QString _filePath;
void Widget::on_findButton_clicked()
{
    _filePath = QFileDialog::getExistingDirectory(0, "Directory Dialog", "");
    qDebug()<<_filePath;
}
void Widget::on_loadButton_clicked()
{
     loadTextFile();
}

void Widget::loadTextFile()
{
    QString fileName;
    fileName =_filePath + "/"+ ui->lineEdit->text() + ".txt";
    qDebug()<<fileName;
    QFile inputFile(fileName);
    if(inputFile.exists()){
        qDebug() <<"Файл есть!";
    }
    else qDebug()<<"Ниа нету ";
    inputFile.open(QIODevice::ReadOnly);
    QTextStream in(&inputFile);

    QString line;
    line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);

    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);

}


