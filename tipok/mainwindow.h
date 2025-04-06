#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sumButton_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_cot_clicked();

    void on_pushButton_arcsin_clicked();

    void on_pushButton_arccos_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
