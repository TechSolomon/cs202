// main.cpp
// Solomon Himelbloom
// 19 January 2021
// Classes, constructors, and the destructor example for CS 202.

#include "Foo.hpp"
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

// Pass an object by value
void objectByValue(Foo Foo);

// Pass an object by reference
void objectByReference(Foo &Foo);

// Pass an object by reference to const
void objectByReferenceToConst(const Foo & Foo);

// Return an object by value
Foo returnObjectByValue();

int main(int argc, const char ** argv) {
    std::cout << argc << " total arguments, program name is " << argv[0] << "\n";

    // Create a local variable of an object of your class 
    // and that is a copy of another object of your class.
    
    Foo f;
    Foo g(f);
    Foo h = f;
    Foo i(5);

    Foo().printInformation();
    // Foo().objects();

    return 0;
}