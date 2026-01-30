/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QComboBox *cmb_controller;
    QLabel *l_formula;
    QLabel *l_memory;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_8;
    QPushButton *btn_5;
    QPushButton *btn_2;
    QPushButton *btn_0;
    QPushButton *btn_pow;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_div;
    QPushButton *btn_mul;
    QPushButton *btn_sub;
    QPushButton *btn_sum;
    QPushButton *btn_eq;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btn_7;
    QPushButton *btn_4;
    QPushButton *btn_1;
    QPushButton *tb_extra;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_plsmns;
    QPushButton *btn_9;
    QPushButton *btn_6;
    QPushButton *btn_3;
    QPushButton *btn_delete;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_mc;
    QPushButton *btn_mr;
    QPushButton *btn_clear;
    QPushButton *btn_ms;
    QLabel *l_result;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(603, 554);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        cmb_controller = new QComboBox(centralwidget);
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->setObjectName("cmb_controller");

        gridLayout_2->addWidget(cmb_controller, 0, 0, 1, 1);

        l_formula = new QLabel(centralwidget);
        l_formula->setObjectName("l_formula");
        l_formula->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_formula, 1, 1, 1, 1);

        l_memory = new QLabel(centralwidget);
        l_memory->setObjectName("l_memory");

        gridLayout_2->addWidget(l_memory, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName("btn_8");

        verticalLayout_3->addWidget(btn_8);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName("btn_5");

        verticalLayout_3->addWidget(btn_5);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName("btn_2");

        verticalLayout_3->addWidget(btn_2);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName("btn_0");

        verticalLayout_3->addWidget(btn_0);


        gridLayout->addLayout(verticalLayout_3, 2, 1, 1, 1);

        btn_pow = new QPushButton(centralwidget);
        btn_pow->setObjectName("btn_pow");

        gridLayout->addWidget(btn_pow, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName("btn_div");

        verticalLayout->addWidget(btn_div);

        btn_mul = new QPushButton(centralwidget);
        btn_mul->setObjectName("btn_mul");

        verticalLayout->addWidget(btn_mul);

        btn_sub = new QPushButton(centralwidget);
        btn_sub->setObjectName("btn_sub");

        verticalLayout->addWidget(btn_sub);

        btn_sum = new QPushButton(centralwidget);
        btn_sum->setObjectName("btn_sum");

        verticalLayout->addWidget(btn_sum);

        btn_eq = new QPushButton(centralwidget);
        btn_eq->setObjectName("btn_eq");

        verticalLayout->addWidget(btn_eq);


        gridLayout->addLayout(verticalLayout, 1, 3, 2, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName("btn_7");

        verticalLayout_4->addWidget(btn_7);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName("btn_4");

        verticalLayout_4->addWidget(btn_4);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName("btn_1");

        verticalLayout_4->addWidget(btn_1);

        tb_extra = new QPushButton(centralwidget);
        tb_extra->setObjectName("tb_extra");

        verticalLayout_4->addWidget(tb_extra);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_plsmns = new QPushButton(centralwidget);
        btn_plsmns->setObjectName("btn_plsmns");

        verticalLayout_2->addWidget(btn_plsmns);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName("btn_9");

        verticalLayout_2->addWidget(btn_9);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName("btn_6");

        verticalLayout_2->addWidget(btn_6);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName("btn_3");

        verticalLayout_2->addWidget(btn_3);

        btn_delete = new QPushButton(centralwidget);
        btn_delete->setObjectName("btn_delete");

        verticalLayout_2->addWidget(btn_delete);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_mc = new QPushButton(centralwidget);
        btn_mc->setObjectName("btn_mc");

        horizontalLayout->addWidget(btn_mc);

        btn_mr = new QPushButton(centralwidget);
        btn_mr->setObjectName("btn_mr");

        horizontalLayout->addWidget(btn_mr);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName("btn_clear");

        gridLayout->addWidget(btn_clear, 1, 0, 1, 2);

        btn_ms = new QPushButton(centralwidget);
        btn_ms->setObjectName("btn_ms");

        gridLayout->addWidget(btn_ms, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 0, 1, 2);

        l_result = new QLabel(centralwidget);
        l_result->setObjectName("l_result");
        l_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_result, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        cmb_controller->setItemText(0, QCoreApplication::translate("MainWindow", "double", nullptr));
        cmb_controller->setItemText(1, QCoreApplication::translate("MainWindow", "float", nullptr));
        cmb_controller->setItemText(2, QCoreApplication::translate("MainWindow", "uint8_t", nullptr));
        cmb_controller->setItemText(3, QCoreApplication::translate("MainWindow", "int", nullptr));
        cmb_controller->setItemText(4, QCoreApplication::translate("MainWindow", "int64_t", nullptr));
        cmb_controller->setItemText(5, QCoreApplication::translate("MainWindow", "size_t", nullptr));
        cmb_controller->setItemText(6, QCoreApplication::translate("MainWindow", "Rational", nullptr));

        l_formula->setText(QCoreApplication::translate("MainWindow", "Formula", nullptr));
        l_memory->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        btn_8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        btn_5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        btn_2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        btn_0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_pow->setText(QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        btn_mul->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btn_sub->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
        btn_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        btn_7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        btn_4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        btn_1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_extra->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_plsmns->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        btn_9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        btn_6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        btn_3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_delete->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btn_mc->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        btn_mr->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_ms->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        l_result->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
