// complex.hpp
// Solomon Himelbloom
// 18 February 2021
// Header file (complex numbers) example for CS 202.

#ifndef COMPLEX_NUMBERS_HPP
#define COMPLEX_NUMBERS_HPP

#include <iostream>

class Complex {
    friend std::ostream& operator<<(std::ostream &, const Complex &rhs);
    friend Complex operator+(const Complex &lhs, const Complex &rhs);
private:
    double _real;
    double _imaginary;
public:
    Complex();
    Complex(double real, double imaginary = 0);

    Complex operator+(const Complex& rhs);
    Complex & operator+=(const Complex rhs);

    double real() const {
        return _real;
    }

    double complex() const {
        return _imaginary;
    }
};

#endif // COMPLEX_NUMBERS_HPP
