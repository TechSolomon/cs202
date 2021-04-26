// box.cpp
// Solomon Himelbloom
// 1 April 2021
// Box source file example for CS 202.

#include "box.hpp"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
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

int Box::getHeight() const {
    return _height;
}

int Box::getWidth() const {
    return  _width;
}

Box::Box() {
    cout << "Box base constructor!" << endl;
}

Box::Box(int h, int w) {
    cout << "Box default constructor!" << endl;
}

void Box::setHeight(int h) const {
    cout << "Setting the current height." << endl;
    h = _height;
}

void Box::setWidth(int w) const {
    cout << "Setting the current width." << endl;
    w = _width;
}

ostream operator<<(ostream &os, const Box &b) {
    return std::ostream(nullptr);
}

//FilledBox::FilledBox() = default;
//
//HollowBox::HollowBox() = default;
//
//CheckeredBox::CheckeredBox() = default;

FilledBox::FilledBox(): Box(4,3) {

}

FilledBox::FilledBox(const int &h, const int &w) {

}

HollowBox::HollowBox(): Box(5,10) {

}

HollowBox::HollowBox(const int &h, const int &w) {

}

CheckeredBox::CheckeredBox(): Box(4,4) {

}

CheckeredBox::CheckeredBox(const int &h, const int &w) {

}

int main() {
    cout << "Hello, boxes!" << endl;
    return 0;
}
