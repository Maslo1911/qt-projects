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


void MainWindow::on_pushButton_sin_clicked()
{
    bool isConvertOk;
    float value = ui->lineEdit_value_1->text().toFloat(&isConvertOk);

    if (!isConvertOk)
    {
        ui->label_result_value->setText("Ошибка ввода!");
        return;
    }

    if (ui->radioButton_grad->isChecked())
    {
        float s = sin(value * M_PI / 180.0);
        ui->label_result_value->setNum(s);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        float s = sin(value);
        ui->label_result_value->setNum(s);
    }
    else
    {
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_cos_clicked()
{
    bool isConvertOk;
    float value = ui->lineEdit_value_1->text().toFloat(&isConvertOk);

    if (!isConvertOk)
    {
        ui->label_result_value->setText("Ошибка ввода!");
        return;
    }

    if (ui->radioButton_grad->isChecked())
    {
        float c = cos(value * M_PI / 180.0);
        ui->label_result_value->setNum(c);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        float c = cos(value);
        ui->label_result_value->setNum(c);
    }
    else
    {
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_tan_clicked()
{
    bool isConvertOk;
    float value = ui->lineEdit_value_1->text().toFloat(&isConvertOk);

    if (!isConvertOk)
    {
        ui->label_result_value->setText("Ошибка ввода!");
        return;
    }

    if (ui->radioButton_grad->isChecked())
    {
        float tg = tan(value * M_PI / 180.0);
        ui->label_result_value->setNum(tg);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        float tg = tan(value);
        ui->label_result_value->setNum(tg);
    }
    else
    {
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_cot_clicked()
{
    bool isConvertOk;
    float value = ui->lineEdit_value_1->text().toFloat(&isConvertOk);

    if (!isConvertOk)
    {
        ui->label_result_value->setText("Ошибка ввода!");
        return;
    }

    if (ui->radioButton_grad->isChecked())
    {
        float ctg = 1 / tan(value * M_PI / 180.0);
        ui->label_result_value->setNum(ctg);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        float ctg = 1 / tan(value);
        ui->label_result_value->setNum(ctg);
    }
    else
    {
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_arcsin_clicked()
{
    bool isConvertOk;
    float value = ui->lineEdit_value_1->text().toFloat(&isConvertOk);

    if (!isConvertOk)
    {
        ui->label_result_value->setText("Ошибка ввода!");
        return;
    }

    if (ui->radioButton_grad->isChecked())
    {
        float arcs = asin(value * M_PI / 180.0);
        ui->label_result_value->setNum(arcs);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        float arcs = asin(value);
        ui->label_result_value->setNum(arcs);
    }
    else
    {
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_arccos_clicked()
{
    bool isConvertOk;
    float value = ui->lineEdit_value_1->text().toFloat(&isConvertOk);

    if (!isConvertOk)
    {
        ui->label_result_value->setText("Ошибка ввода!");
        return;
    }

    if (ui->radioButton_grad->isChecked())
    {
        float arcc = acos(value * M_PI / 180.0);
        ui->label_result_value->setNum(arcc);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        float arcc = acos(value);
        ui->label_result_value->setNum(arcc);
    }
    else
    {
        ui->label_result_value->setText("Выберите тип!");
    }
}

