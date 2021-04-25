// rational.hpp
// Solomon Himelbloom
// 23 April 2021
// Template rational class (header file) example for CS 202.

//
// Created by Chris Hartman on 2/18/21.
//

#ifndef CS202CLASSEXAMPLE_RATIONAL_HPP
#define CS202CLASSEXAMPLE_RATIONAL_HPP

#include <iostream>
#include <numeric>

// class invariant:
// _denominator is always > 0
template <typename A>
class Rational {
    template <typename B>
    friend std::ostream& operator<<(std::ostream &, const Rational<B> &rhs);
    template <typename B>
    friend Rational<B> operator+(const Rational<B> &lhs, const Rational<B> &rhs);
    template <typename B>
    friend Rational<B> operator-(const Rational<B> &lhs);
    template <typename B>
    friend bool operator==(const Rational<B> &lhs, const Rational<B> &rhs);
    template <typename B>
    friend bool operator<(const Rational<B> &lhs, const Rational<B> &rhs);

    template <typename B>
    friend Rational<B> operator-(const Rational<B> &lhs, const Rational<B> &rhs);
    template <typename B>
    friend Rational<B> operator*(Rational<B> lhs, const Rational<B> &rhs);
    template <typename B>
    friend Rational<B> operator/(Rational<B> lhs, const Rational<B> &rhs);

    template <typename B>
    friend bool operator!=(const Rational<B> &lhs, const Rational<B> &rhs);
    template <typename B>
    friend bool operator>(const Rational<B> &lhs, const Rational<B> &rhs);
    template <typename B>
    friend bool operator<=(const Rational<B> &lhs, const Rational<B> &rhs);
    template <typename B>
    friend bool operator>=(const Rational<B> &lhs, const Rational<B> &rhs);

public:
    Rational(A,A=1); //NOLINT(google-explicit-constructor): Allow implicit conversion from int
    Rational();
    ~Rational();
    Rational & operator+=(const Rational& rhs);
    Rational & operator-=(const Rational& rhs);
    Rational & operator*=(const Rational& rhs);
    Rational & operator/=(const Rational& rhs);
    Rational & operator++();        //prefix ++
    Rational operator++(int); //postfix ++
    Rational & operator--();        //prefix --
    Rational operator--(int); //postfix --

private:
    void reduce();

    A _numerator;
    A _denominator;
};

template<typename A>
Rational<A>::Rational():_numerator(0), _denominator(1) {

}

template<typename A>
Rational<A>::~Rational()= default;

template <typename A>
std::ostream &operator<<(std::ostream &os, const Rational<A> &rhs) {
    os << rhs._numerator;
    if (rhs._denominator != 1)
        os << "/" << rhs._denominator;
    return os;
}

template <typename A>
Rational<A> operator+(const Rational<A> &lhs, const Rational<A> &rhs) { //canonical
    auto temp{lhs};
    temp += rhs;
    return temp;
}

template <typename A>
bool operator==(const Rational<A> &lhs, const Rational<A> &rhs) {
    return lhs._numerator==rhs._numerator && lhs._denominator==rhs._denominator;
}

template <typename A>
bool operator<(const Rational<A> &lhs, const Rational<A> &rhs) {
    return lhs._numerator*rhs._denominator < rhs._numerator*lhs._denominator;
}

template <typename A>
Rational<A> operator-(const Rational<A> &lhs) {
    return { -lhs._numerator, lhs._denominator };
}

template <typename A>
Rational<A>::Rational(A num, A den) : _numerator(num), _denominator(den) {
    reduce();
}

template <typename A>
Rational<A> & Rational<A>::operator+=(const Rational<A> &rhs) {
    // a/b + c/d = (ad+bc)/ad
    _numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
    _denominator *= rhs._denominator;
    reduce();
    return *this;
}

template <typename A>
void Rational<A>::reduce() {
    auto gcd = std::gcd(_numerator,_denominator);
    _numerator /= gcd;
    _denominator /= gcd;
    if (_denominator < 0) {
        _numerator *= -1;
        _denominator *= -1;
    }
}

template <typename A>
Rational<A> &Rational<A>::operator-=(const Rational<A> &rhs) { //Canonical
    *this = *this - rhs; //uses Rational::operator- to define operator-=
    return *this;
}

template <typename A>
Rational<A> &Rational<A>::operator*=(const Rational<A> &rhs) {
    _numerator *= rhs._numerator;
    _denominator *= rhs._denominator;
    reduce();
    return *this;
}

template <typename A>
Rational<A> &Rational<A>::operator/=(const Rational<A> &rhs) {
    return *this *= {rhs._denominator,rhs._numerator};
}

template <typename A>
Rational<A> operator-(const Rational<A> &lhs, const Rational<A> &rhs) {
    return Rational<A>(lhs + -rhs);
}

template <typename A>
// pass lhs by value because we were going to copy it anyway
Rational<A> operator*(Rational<A> lhs, const Rational<A> &rhs) { //Canonical
    return Rational<A>(lhs *= rhs);
}

template <typename A>
// pass lhs by value because we were going to copy it anyway
Rational<A> operator/(Rational<A> lhs, const Rational<A> &rhs) { //Canonical
    return Rational<A>(lhs /= rhs);
}

template <typename A>
Rational<A> & Rational<A>::operator++() {//prefix ++
    return *this += 1;
}

template <typename A>
Rational<A> Rational<A>::operator++(int) {//postfix ++
    auto copy{*this};
    ++(*this);
    return copy;
}

template <typename A>
Rational<A> & Rational<A>::operator--() {//prefix --
    return *this -= 1;
}

template <typename A>
Rational<A> Rational<A>::operator--(int) {//postfix --
    auto copy{*this};
    --(*this);
    return copy;
}

template <typename A>
bool operator!=(const Rational<A> &lhs, const Rational<A> &rhs) {//canonical
    return !(rhs==lhs);
}

template <typename A>
bool operator>(const Rational<A> &lhs, const Rational<A> &rhs) {//canonical
    return rhs<lhs;
}

template <typename A>
bool operator<=(const Rational<A> &lhs, const Rational<A> &rhs) {//canonical
    return ! (rhs>lhs);
}

template <typename A>
bool operator>=(const Rational<A> &lhs, const Rational<A> &rhs) {//canonical
    return ! (rhs<lhs);
}

#endif//CS202CLASSEXAMPLE_RATIONAL_HPP
