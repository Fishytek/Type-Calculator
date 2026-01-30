#pragma once

#include <numeric>
#include <cstdlib>
#include <iostream>
#include <compare>

class Rational {
public:
    Rational() : numerator_(0), denominator_(1) {}
    Rational(const Rational& other) = default;
    Rational(int numerator) : numerator_(numerator), denominator_(1) {
        Reduction();
    }

    Rational(int numerator, int denominator)
        : numerator_{numerator}, denominator_{denominator} {
        if (denominator == 0) {
            std::abort();
        }
        Reduction();
    }

    Rational operator+() const {
        return *this;
    }

    Rational operator-() const {
        return Rational(-numerator_, denominator_);
    }

    Rational& operator=(const Rational& other) = default;

    Rational& operator+=(const Rational& other) {
        numerator_ = numerator_ * other.denominator_ + denominator_ * other.numerator_;
        denominator_ *= other.denominator_;
        Reduction();
        return *this;
    }

    Rational& operator-=(const Rational& other) {
        numerator_ = numerator_ * other.denominator_ - denominator_ * other.numerator_;
        denominator_ *= other.denominator_;
        Reduction();
        return *this;
    }

    Rational& operator*=(const Rational& other) {
        numerator_ *= other.numerator_;
        denominator_ *= other.denominator_;
        Reduction();
        return *this;
    }

    Rational& operator/=(const Rational& other) {
        numerator_ *= other.denominator_;
        denominator_ *= other.numerator_;
        Reduction();
        return *this;
    }

    Rational operator+(const Rational& r2) const {
        Rational other{*this};
        other += r2;
        return other;
    }

    Rational operator-(const Rational& r2) const {
        Rational other{*this};
        other -= r2;
        return other;
    }

    Rational operator*(const Rational& r2) const {
        Rational other{*this};
        other *= r2;
        return other;
    }

    Rational operator/(const Rational& r2) const {
        Rational other{*this};
        other /= r2;
        return other;
    }

    Rational Inv() const {
        return Rational(denominator_, numerator_);
    }

    int GetNumerator() const {
        return numerator_;
    }

    int GetDenominator() const {
        return denominator_;
    }

    auto operator<=>(const Rational& other) const = default;

    bool operator==(const Rational& other) const = default;

    friend std::istream& operator>>(std::istream& is, Rational& r) {
        int numerator = 0;
        int denominator = 1;
        char slash = '\0';

        if (!(is >> numerator)) {
            is.setstate(std::ios::failbit);
            return is;
        }

        if (is >> std::ws && is.peek() == '/') {
            is >> slash;
            if (!(is >> denominator)) {
                is.setstate(std::ios::failbit);
                return is;
            }
            if (denominator == 0) {
                is.setstate(std::ios::failbit);
                return is;
            }
        } else {
            denominator = 1;
        }

        r = Rational(numerator, denominator);
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const Rational& r) {
        if (r.denominator_ == 1) {
            os << r.numerator_;
        } else {
            os << r.numerator_ << " / " << r.denominator_;
        }
        return os;
    }

private:
    int numerator_;
    int denominator_;

    void Reduction() {
        if (denominator_ < 0) {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
        const int divisor = std::gcd(numerator_, denominator_);
        numerator_ /= divisor;
        denominator_ /= divisor;
    }
};
