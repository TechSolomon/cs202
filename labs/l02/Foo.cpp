// Foo.cpp
// Solomon Himelbloom
// 19 January 2021
// Source file example for l02 CS 202.

#include "Foo.hpp"
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

Foo::Foo() {
    cout << "Called Foo default constructor." << endl;
}

Foo::Foo(Foo& origin) : _values(origin._values) {
    cout << "Called Foo copy constructor." << endl;
}

Foo::Foo(int x) : _values(x) {
    cout << "Called Foo other constructor." << endl;
}

Foo::~Foo() {
    cout << "Called Foo destructor." << endl; 
}

void objectByValue(Foo Foo) {
    cout << "Passed an object by value." << endl;
}

void objectByReference(Foo &Foo) {
    cout << "Passed an object by reference." << endl;
}

void objectByReferenceToConst(const Foo & Foo) {
    cout << "Passed an object by reference to const." << endl;
}

Foo returnObjectByValue() {
    Foo foo;
    cout << "Returned an object by value" << endl;
    return foo;
}