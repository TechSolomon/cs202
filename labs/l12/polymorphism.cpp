// polymorphism.cpp
// Solomon Himelbloom
// 25 March 2021
// Polymorphism and virtual functions example for CS 202.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::fstream;
using std::ifstream;
using std::make_shared;
using std::make_unique;
using std::map;
using std::move;
using std::ofstream;
using std::reverse;
using std::runtime_error;
using std::shared_ptr;
using std::sort;
using std::string;
using std::unique_ptr;
using std::vector;

class Base {
public:
    virtual void fooVirtual() const { cout << "Base class virtual function\n"; }
    void fooNotVirtual() const { cout << "Base class non-virtual function\n"; }
};

class Derived : public Base {
public:
    void fooVirtual() const override { cout << "Derived class virtual function\n"; }
    void fooNotVirtual() const { cout << "Derived class non-virtual function\n"; }
};

int main() {
    Base b;
    Derived d;

    // 1. A base class pointer to the base class object.
    Base *bPb = &b;

    // 2. A base class pointer to the derived class object.
    Base *bPd = &d;

    // 3. A derived class pointer to the derived class object.
    Derived *dPd = &d;

    // 4. A base class reference to the base class object.
    Base& bRb = b;

    // 5. A base class reference to the derived class object.
    Base& bRd = d;

    // 6. A derived class reference to the derived class object.
    Derived& dRd = d;

    // #1
    cout << "Calling non-virtual function from Base class pointer to base: ";
    bPb->fooNotVirtual();

    cout << "Calling virtual function from Base class pointer to base: ";
    bPb->fooVirtual();

    // #2
    cout << "Calling non-virtual function from Base class pointer to derived: ";
    bPd->fooNotVirtual();

    cout << "Calling virtual function from Base class pointer to derived: ";
    bPd->fooVirtual();

    // #3
    cout << "Calling non-virtual function from Derived class pointer to derived: ";
    dPd->fooNotVirtual();

    cout << "Calling virtual function from Derived class pointer to derived: ";
    dPd->fooVirtual();

    // #4
    cout << "Calling non-virtual function from Base class reference to base: ";
    bRb.fooNotVirtual();

    cout << "Calling virtual function from Base class reference to base: ";
    bRb.fooVirtual();

    // #5
    cout << "Calling non-virtual function from Base class reference to derived: ";
    bRd.fooNotVirtual();

    cout << "Calling virtual function from Base class reference to derived: ";
    bRd.fooVirtual();

    // #6
    cout << "Calling non-virtual function from Derived class reference to derived: ";
    dRd.fooNotVirtual();

    cout << "Calling virtual function from Derived class reference to derived: ";
    dRd.fooVirtual();

    return 0;
}
