// box.cpp
// Solomon Himelbloom
// 1 April 2021
// Box source file example for CS 202.

#include "box.hpp"
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
using std::make_shared;
using std::make_unique;
using std::map;
using std::move;
using std::ofstream;
using std::reverse;
using std::runtime_error;
using std::shared_ptr;
using std::sort;
using std::string;
using std::unique_ptr;
using std::vector;

int main() {
    cout << "Hello, boxes!" << endl;
    return 0;
}

int Box::getHeight() const {
    cout << "Height = " << _height << endl;
    return 0;
}

int Box::getWidth() const {
    cout << "Width = " << _width << endl;
    return 0;
}

Box::Box() {
    cout << "Box base constructor!" << endl;
}

Box::Box(int h, int w) {
    cout << "Box default constructor!" << endl;
}

void Box::setHeight(int h) {
    cout << "Setting the current height." << endl;
}

void Box::setWidth(int w) {
    cout << "Setting the current width." << endl;
}
