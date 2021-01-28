// main.cpp
// Solomon Himelbloom
// 28 January 2021
// Smart pointers example for CS 202.

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

// Pass an object by value
void objectByValue(Foo bar) {
    cout << "Currently inside objectByValue." << endl;
    cout << "Name: " << bar.getName() << endl;
    cout << "Changing name to Solomon." << endl;
    bar.setName("Solomon");
    cout << "Still inside objectByValue, Foo's name is now " << bar.getName() << endl;
}

// Pass an object by reference
void objectByReference(Foo &bar) {
    cout << "Currently inside objectByReference." << endl;
    cout << "Foo's name is " << bar.getName() << endl;
    cout << "Changing name to Solomon." << endl;
    bar.setName("Solomon");
}

// Pass an object by reference to const
void objectByReferenceToConst(Foo const &bar) {
    cout << "Currently inside objectByReferenceToConst." << endl;
    cout << "Foo's name is " << bar.getName() << endl;
}

// Return an object by value
Foo returnObjectByValue() {
    cout << "Currently inside returnObjectByValue." << endl;
    Foo bar("Bar");
    return bar;
}

int main(int argc, const char ** argv) {
    std::cout << argc << " total arguments, program name is " << argv[0] << "\n";

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

    return 0;
}

