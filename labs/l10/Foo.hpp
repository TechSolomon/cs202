// Foo.cpp
// Solomon Himelbloom
// Created: 28 January 2021
// Updated: 11 February 2021
// Revised: 18 March 2021
// Header file example for CS 202.

#ifndef EXAMPLE_FOO_HPP
#define EXAMPLE_FOO_HPP

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ostream;

class Foo {
    friend ostream & operator<<(ostream &os, const Foo &f);
private:
    string _name;
    int _overload;
public:
    Foo();
    Foo(const Foo &);
    Foo(const string &name);
    ~Foo();
    std::string getName() const;
    void setName(const string &name);
    Foo(int overload) : _overload(overload) { }
};

#endif // EXAMPLE_FOO_HPP
