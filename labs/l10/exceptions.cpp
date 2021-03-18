// main.cpp
// Solomon Himelbloom
// 18 March 2021
// Throwing exceptions & try catch blocks example for CS 202.

#include "Foo.hpp"
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
using std::map;
using std::ofstream;
using std::reverse;
using std::sort;
using std::string;
using std::vector;
using std::unique_ptr;
using std::shared_ptr;
using std::make_unique;
using std::make_shared;
using std::move;
using std::runtime_error;

void functionC() {
    throw runtime_error("FunctionC() threw a std::runtime_error.");
}

void functionB() {
    // Create a raw pointer to a dynamically allocated object of your class.
    cout << "\n>> Creating raw pointer." << endl;
    Foo *pointer = new Foo("RawPointer");
    delete pointer;

    // Create a unique_ptr to an object of your class. 
    cout << "\n>> Creating unique_ptr." << endl;
    unique_ptr<Foo> forwardAlphabet = make_unique<Foo>("abcdefghijklmnopqrstuvwxyz");

    // Transfer ownership of that object to a different unique_ptr. 
    cout << "\n>> Transferring ownership to new unique_ptr." << endl;
    unique_ptr<Foo> reverseAlphabet = std::move(forwardAlphabet);

    // Demonstrate the calling of a member function of your object through the unique_ptr.
    cout << "\n>> Calling a member function." << endl;
    reverseAlphabet->getName();

    // Make a shared_ptr to a dynamically allocated object of your class.
    cout << "\n>> Creating shared_ptr." << endl;
    shared_ptr<Foo> ascendingOrder = make_shared<Foo>("0123456789");

    // Make another shared_ptr that points at the same object. 
    cout << "\n>> Creating another shared_ptr to the same object." << endl;
    shared_ptr<Foo> descendingOrder(ascendingOrder);

    // Define and use overloaded operators.
    cout << "\n>> Show an example and definition of an overloaded operator." << endl;
    Foo f(42);
    cout << f << endl;

    cout << endl;
    cout << "Starting functionB()" << endl;
    functionC();
    cout << "Ending functionB()" << endl;
}

void functionA() {
    try {
        functionB(); // may throw (an exception)
    }
    catch (const std::exception &e) {
        cout << "Caught an exception: " << e.what() << endl;
        // your code here --> handle the error
    }
}

int main(int argc, const char ** argv) {
    std::cout << argc << " total arguments, program name is " << argv[0] << "\n";

    cout << "Starting main()" << endl;
    functionA();
    cout << "Ended normally." << endl;
    return 0;
}
