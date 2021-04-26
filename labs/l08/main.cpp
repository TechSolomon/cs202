// main.cpp
// Solomon Himelbloom
// Created: 28 January 2021
// Updated: 16 February 2021
// Uses of static example for CS 202.

#include "Foo.hpp"
#include <iostream>
#include <vector>
#include <memory>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::unique_ptr;
using std::shared_ptr;
using std::make_unique;
using std::make_shared;
using std::move;
using std::ostream;

void incrementFoo() {
    static int increment = 0;
    cout << "Current value (start) = " << increment << endl;
    increment++;
}

void increasing() {
    static int counter = 8;
    cout << counter << endl;
    counter++;
}

int main(int argc, const char ** argv) {
    std::cout << argc << " total arguments, program name is " << argv[0] << "\n";

    cout << "\n>> Foo Stats:" << endl;

    for (int i = 0; i < 8; i++) {
        incrementFoo();
    }

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
    const shared_ptr<Foo>& descendingOrder(ascendingOrder);

    // Define and use overloaded operators.
    cout << "\n>> Show an example and definition of an overloaded operator." << endl;
    Foo f(42);
    cout << f << endl;

    cout << "\n>> Prior to the last reload, the value of Foo::_g was: " << endl;
    Foo g(8);
    cout << g << endl;

    cout << "\n>> Continue Count: " << endl;
    Foo test(1);
    Foo another(2);

    increasing();
    increasing();
    increasing();
    cout << "------------" << endl;

    return 0;
}
