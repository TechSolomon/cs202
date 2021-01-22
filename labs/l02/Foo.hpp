// Foo.cpp
// Solomon Himelbloom
// 19 January 2021
// Header file example for l02 CS 202.

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
    char *s;
    int x, y, z;
    int _values;
public:
    // Normal Constructor
    Foo();

    // Copy Constructor
    Foo(Foo& origin);

    // Another Constructor
    Foo(int x);
    
    // Destructor
    ~Foo();

    // Function to Print String
    void printInformation() {
        cout << "Hello, this is printed output." << endl;
        cout << "This is another constructor." << endl;
    }

    // Function to Change
    void change(const char *);

    // Create a vector of 5 objects
    // void objects() {
    //     cout << "Hello, vector." << endl;

    //     Foo a;
    //     Foo b;
    //     Foo c;
    //     Foo d;
    //     Foo e;

    //     vector<Foo> f{a, b, c, d, e};
    // }
};

#endif // EXAMPLE_FOO_HPP
