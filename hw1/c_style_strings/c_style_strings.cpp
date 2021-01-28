// c_style_strings.cpp
// Solomon Himelbloom
// 28 January 2021
// C-style strings example for CS 202.

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::stod;
using std::strtod;
using std::string;

int main() {
    cout << "Hello, C-style strings." << endl;

    cout << "Press ENTER to quit... ";
    while (cin.get() != '\n') ;

    return 0;
}
