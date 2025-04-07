/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_value_1;
    QLineEdit *lineEdit_value_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *sumButton;
    QLabel *label_result_text;
    QLabel *label_result_value;
    QRadioButton *radioButton_grad;
    QRadioButton *radioButton_rad;
    QPushButton *pushButton_sin;
    QLabel *label_3;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_cot;
    QPushButton *pushButton_arcsin;
    QPushButton *pushButton_arccos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(702, 367);
        MainWindow->setMinimumSize(QSize(702, 367));
        MainWindow->setMaximumSize(QSize(702, 367));
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_value_1 = new QLineEdit(centralwidget);
        lineEdit_value_1->setObjectName(QString::fromUtf8("lineEdit_value_1"));
        lineEdit_value_1->setGeometry(QRect(230, 100, 113, 21));
        lineEdit_value_2 = new QLineEdit(centralwidget);
        lineEdit_value_2->setObjectName(QString::fromUtf8("lineEdit_value_2"));
        lineEdit_value_2->setGeometry(QRect(230, 140, 113, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 100, 47, 13));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTabletTracking(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 140, 47, 13));
        sumButton = new QPushButton(centralwidget);
        sumButton->setObjectName(QString::fromUtf8("sumButton"));
        sumButton->setGeometry(QRect(190, 180, 80, 21));
        label_result_text = new QLabel(centralwidget);
        label_result_text->setObjectName(QString::fromUtf8("label_result_text"));
        label_result_text->setGeometry(QRect(310, 220, 61, 16));
        label_result_value = new QLabel(centralwidget);
        label_result_value->setObjectName(QString::fromUtf8("label_result_value"));
        label_result_value->setGeometry(QRect(380, 220, 41, 16));
        radioButton_grad = new QRadioButton(centralwidget);
        radioButton_grad->setObjectName(QString::fromUtf8("radioButton_grad"));
        radioButton_grad->setGeometry(QRect(400, 90, 84, 19));
        radioButton_rad = new QRadioButton(centralwidget);
        radioButton_rad->setObjectName(QString::fromUtf8("radioButton_rad"));
        radioButton_rad->setGeometry(QRect(500, 90, 84, 19));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(400, 120, 80, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 60, 61, 16));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(290, 180, 80, 21));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(490, 120, 80, 21));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(400, 150, 80, 21));
        pushButton_cot = new QPushButton(centralwidget);
        pushButton_cot->setObjectName(QString::fromUtf8("pushButton_cot"));
        pushButton_cot->setGeometry(QRect(490, 150, 80, 21));
        pushButton_arcsin = new QPushButton(centralwidget);
        pushButton_arcsin->setObjectName(QString::fromUtf8("pushButton_arcsin"));
        pushButton_arcsin->setGeometry(QRect(400, 180, 80, 21));
        pushButton_arccos = new QPushButton(centralwidget);
        pushButton_arccos->setObjectName(QString::fromUtf8("pushButton_arccos"));
        pushButton_arccos->setGeometry(QRect(490, 180, 80, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 702, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\2761:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 2:", nullptr));
        sumButton->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        label_result_text->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        label_result_value->setText(QString());
        radioButton_grad->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\320\264\321\203\321\201\321\213", nullptr));
        radioButton_rad->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\320\260\320\275\321\213", nullptr));
        pushButton_sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \320\262:", nullptr));
        pushButton_mul->setText(QApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton_cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        pushButton_cot->setText(QApplication::translate("MainWindow", "cot", nullptr));
        pushButton_arcsin->setText(QApplication::translate("MainWindow", "arcsin", nullptr));
        pushButton_arccos->setText(QApplication::translate("MainWindow", "arccos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
