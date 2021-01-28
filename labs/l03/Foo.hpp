// Foo.cpp
// Solomon Himelbloom
// 28 January 2021
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

class Foo {
private:
    string _name;
public:
    Foo();
    Foo(const Foo &);
    Foo(const string &name);
    ~Foo();
    std::string getName() const;
    void setName(const string &name);
};

#endif // EXAMPLE_FOO_HPP
