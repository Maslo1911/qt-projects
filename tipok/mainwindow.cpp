#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "math.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sumButton_clicked()
{
    bool correct1 = false;
    bool correct2= false;
    float val1 = ui->lineEdit_value_1->text().toFloat(&correct1);
    float val2 = ui->lineEdit_value_2->text().toFloat(&correct2);
    if (correct1 && correct2)
    {
        float res = val1 + val2;
        if(qIsInf(res))
        {
            ui->label_result_value->setText("Бесконечность!");
        }
        else if(qIsNull(res))
        {
            ui->label_result_value->setText("Не число!");
        }
        else
        {
            QString result = QString::number(res, 'f', 10);
            ui->label_result_value->setText(result);
        }
    }
    else
    {
        ui->label_result_value->setText("Ошибка!");
    }
}


void MainWindow::on_pushButton_mul_clicked()
{
    bool correct1 = false;
    bool correct2= false;
    float val1 = ui->lineEdit_value_1->text().toFloat(&correct1);
    float val2 = ui->lineEdit_value_2->text().toFloat(&correct2);
    if (correct1 && correct2)
    {
        float res = val1 * val2;
        if(qIsInf(res))
        {
            ui->label_result_value->setText("Бесконечность!");
        }
        else if(qIsNull(res))
        {
            ui->label_result_value->setText("Не число!");
        }
        else
        {
            QString result = QString::number(res, 'f', 10);
            ui->label_result_value->setText(result);
        }
    }
    else
    {
        ui->label_result_value->setText("Ошибка!");
    }
}

