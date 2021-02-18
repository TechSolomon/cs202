// complex.cpp
// Solomon Himelbloom
// 18 February 2021
// Source file (complex numbers) example for CS 202.

#include "complex.hpp"
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::ostream;

Complex::Complex(double num, double imag) : _real(num), _imaginary(imag) {

}

// Canonical – see class example.
Complex operator+(const Complex &lhs, const Complex &rhs) {
   auto temp{lhs};
   temp += rhs;
   return temp;
}

Complex & Complex::operator+=(const Complex rhs) {
   _real += rhs._real;
   _imaginary += rhs._imaginary;
   return *this;
}

std::ostream &operator<<(std::ostream &os, const Complex &rhs) {
   return os << rhs._real << " + " << rhs._imaginary << "i";
}
