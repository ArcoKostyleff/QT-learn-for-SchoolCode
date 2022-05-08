#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_findButton_clicked();

    void on_loadButton_clicked();

private:
    Ui::Widget *ui;
    void loadTextFile();

};
#endif // WIDGET_H
