// Foo.cpp
// Solomon Himelbloom
// 16 February 2021
// Source file example for CS 202.

#include "Foo.hpp"
#include <iostream>
#include <utility>
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
    cout << "Destroyed a Foo via destructor." << endl;
}

Foo::Foo(const Foo& origin):_name("copyOf"+origin._name) {
    cout << "Constructed a Foo via copy constructor." << endl;
}

Foo::Foo(string name):_name(std::move(name)) {
    cout << "Constructed a Foo via (const std::string &) constructor." << endl;
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

[[maybe_unused]] static double getIncrement() {
    double _g;
    return _g; 
}

int Foo::count() {
    return 0;
}