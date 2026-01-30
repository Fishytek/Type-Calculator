#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <functional>
#include <optional>
#include <string>

#include "ui_mainwindow.h"
#include "enums.h"  // Предполагается, что здесь определены Operation, ControlKey, ControllerType

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

    // Методы для изменения текста
    void SetInputText(const std::string& text);           // Устанавливает текст для результата
    void SetErrorText(const std::string& text);           // Устанавливает текст ошибки (красный цвет)
    void SetFormulaText(const std::string& text);         // Устанавливает текст формулы
    void SetMemText(const std::string& text);             // Устанавливает текст индикатора памяти
    void SetExtraKey(const std::optional<std::string>& key); // Устанавливает текст для экстра-кнопки

    // Установка колбэк-функций
    void SetDigitKeyCallback(std::function<void(int key)> cb);             // Колбэк для цифровых кнопок
    void SetProcessOperationKeyCallback(std::function<void(Operation key)> cb); // Колбэк для кнопок операций
    void SetProcessControlKeyCallback(std::function<void(ControlKey key)> cb); // Колбэк для кнопок управления
    void SetControllerCallback(std::function<void(ControllerType controller)> cb); // Колбэк для изменения типа чисел

private slots:
    void on_cmb_controller_currentIndexChanged();


    void on_btn_7_clicked();

    void on_btn_clear_clicked();

    void on_btn_mc_clicked();

    void on_btn_mr_clicked();

    void on_btn_ms_clicked();

    void on_btn_8_clicked();

    void on_btn_5_clicked();

    void on_btn_2_clicked();

    void on_btn_0_clicked();

    void on_btn_9_clicked();

    void on_btn_6_clicked();

    void on_btn_3_clicked();

    void on_btn_delete_clicked();

    void on_btn_pow_clicked();

    void on_btn_div_clicked();

    void on_btn_mul_clicked();

    void on_btn_sub_clicked();

    void on_btn_sum_clicked();

    void on_btn_eq_clicked();

    void on_btn_1_clicked();

    void on_btn_4_clicked();

    void on_tb_extra_clicked();

    void on_btn_plsmns_clicked();

private:
    Ui::MainWindow* ui;

    // Колбэк-функции
    std::function<void(int key)> digit_cb_;                  // Колбэк для цифры
    std::function<void(Operation key)> operation_cb_;          // Колбэк для операции
    std::function<void(ControlKey key)> control_cb_;           // Колбэк для кнопок управления
    std::function<void(ControllerType controller)> controller_cb_;  // Колбэк для изменения типа чисел
};
#endif // MAINWINDOW_H
