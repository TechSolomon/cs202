// gutenberg.cpp
// Solomon Himelbloom
// 21 January 2021
// Project Gutenberg excerpt or interesting program for CS 202.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Hello, Project Gutenberg." << endl;

    cout << "Press ENTER to quit... ";
    while (cin.get() != '\n') ;

    return 0;
}