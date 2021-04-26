// Foo.cpp
// Solomon Himelbloom
// 16 February 2021
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
    int _overload{};
    static double _g;
    static int _counter;
public:
    Foo();
    Foo(const Foo &);
    explicit Foo(string name);
    ~Foo();
    std::string getName() const;
    void setName(const string &name);
    explicit Foo(int overload) : _overload(overload) { }
    static double getIncrement() { return _g; }
    static void setIncrement(double up) { _g=up; }
    static int count();
};

#endif // EXAMPLE_FOO_HPP
