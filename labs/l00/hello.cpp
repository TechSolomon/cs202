// hello.cpp
// Solomon Himelbloom
// 12 January 2021
// Hello world example program for CS 202.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Hello, world." << endl;

    cout << "Press ENTER to quit... ";
    while (cin.get() != '\n') ;

    return 0;
}