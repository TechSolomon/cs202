// Foo.cpp
// Solomon Himelbloom
// Created: 28 January 2021
// Updated: 11 February 2021
// Source file example for CS 202.

#include "Foo.hpp"
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::ostream;

Foo::Foo():_name("default") {
    cout << "Constructed a Foo named _default_ via default constructor." << endl;
}

Foo::~Foo() {
    cout << "Destroyed a Foo named _" << _name << "_ via destructor." << endl; 
}

Foo::Foo(const Foo& origin):_name("copyOf"+origin._name) {
    cout << "Constructed a Foo named _" << _name << "_ via copy constructor." << endl;
}

Foo::Foo(const string &name):_name(name) {
    cout << "Constructed a Foo named _" << _name << "_ via (const std::string &) constructor." << endl;
}

ostream & operator<<(ostream &os, const Foo &f) {
    return os << "Here is a Foo: " << f._overload;
}

std::string Foo::getName() const {
    return _name;
}

void Foo::setName(const std::string &name) {
    _name = name;
}
