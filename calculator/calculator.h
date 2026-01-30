#pragma once

#include <optional>
#include <string>
#include <type_traits>
#include <cmath>
#include "rational.h"
#include "pow.h"

using Error = std::string; // Определяем тип ошибки как строку

// Шаблонный класс калькулятора
template<typename Number>
class Calculator {
public:
    Calculator() = default; // Конструктор по умолчанию

    // Устанавливает текущее значение числа
    void Set(Number number) {
        number_ = number;
    }

    // Возвращает текущее значение числа
    Number GetNumber() const {
        return number_;
    }

    // Операция сложения
    std::optional<Error> Add(Number num) {
        number_ += num; // Сложение
        return std::nullopt; // Нет ошибок
    }

    // Операция вычитания
    std::optional<Error> Sub(Number num) {
        number_ -= num; // Вычитание
        return std::nullopt; // Нет ошибок
    }

    // Операция умножения
    std::optional<Error> Mul(Number num) {
        number_ *= num; // Умножение
        return std::nullopt; // Нет ошибок
    }

    // Операция деления
    std::optional<Error> Div(Number num) {
        if constexpr (std::is_floating_point_v<Number>) {
            number_ /= num; // Деление для чисел с плавающей точкой
            return std::nullopt; // Нет ошибок
        } else {
            if (num == Number{0}) {
                return Error{"Division by zero"}; // Ошибка деления на ноль
            }
            number_ /= num; // Деление
            return std::nullopt; // Нет ошибок
        }
    }

    // Операция возведения в степень
    std::optional<Error> Pow(Number num) {
        if constexpr (std::is_floating_point_v<Number>) {
            number_ = std::pow(number_, num); // Возведение в степень
            return std::nullopt; // Нет ошибок
        } else {
            if (number_ == Number{0} && num == Number{0}) {
                return Error{"Zero power to zero"}; // Ошибка: 0 в 0
            }

            if constexpr (std::is_integral_v<Number>) {
                if (num < Number{0}) {
                    return Error{"Integer negative power"}; // Ошибка: отрицательная степень для целых чисел
                }
                number_ = static_cast<Number>(std::pow(number_, num)); // Возведение в степень
            }

            if constexpr (std::is_same_v<Number, Rational>) {
                if (num.GetDenominator() != 1) {
                    return Error{"Fractional power is not supported"}; // Ошибка: дробная степень не поддерживается
                }
                number_ = ::Pow(number_, num); // Использует функцию для рациональных чисел
            }

            return std::nullopt; // Нет ошибок
        }
    }

    // Сохранение текущего значения в память
    void Save() {
        mem_ = number_; // Сохраняет текущее значение
    }

    // Загрузка сохраненного значения из памяти
    void Load() {
        if (mem_.has_value()) {
            number_ = *mem_; // Загружает значение, если оно сохранено
        }
    }

    // Очистка памяти
    void ClearMem() {
        mem_ = std::nullopt; // Устанавливает память в пустое значение
    }

    // Проверка наличия сохраненного значения в памяти
    bool GetHasMem() const {
        return mem_.has_value(); // Возвращает true, если память не пустая
    }

private:
    Number number_{}; // Текущее значение числа
    std::optional<Number> mem_{}; // Память для хранения значения
};

