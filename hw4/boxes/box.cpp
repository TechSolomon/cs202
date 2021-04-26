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

Box::Box() {
    _width = 1;
    _height = 1;
}

Box::Box(const int &x, const int &y) : _width(x), _height(y) {
    cout << "Box default constructor!" << endl;
    _width = x;
    _height = y;
}

int Box::getHeight() const {
    return _height;
}

int Box::getWidth() const {
    return  _width;
}

ostream &operator<<(ostream &os, const Box &b) {
    b.print(os);
    return os;
}

void Box::setHeight(const int &y) {
    _height = y;
}

void Box::setWidth(const int &x) {
    _width = x;
}

// START: FilledBox
FilledBox::FilledBox(): Box() {

}

FilledBox::FilledBox(const int &x, const int &y): Box(x, y) {

}

void FilledBox::print(ostream &os) const {
    for (int f = 0; f < getHeight(); f++) {
        for (int g = 0; getWidth(); g++) {
            os << "x";
        }
        os << "\n";
    }
}

// END: FilledBox
string FilledBox::type() const {
    return "Filled";
}

// START: HollowBox
HollowBox::HollowBox(): Box() {

}

HollowBox::HollowBox(const int &x, const int &y) : Box (x, y) {

}

void HollowBox::print(ostream &os) const {
    for (int h = 0; h < getWidth(); h++) {
        for (int i = 0; getHeight(); i++) {
            if (h == -1 + getHeight() || i == -1 + getWidth() || h == 0 || i == 0) {
                os << "x";
            } else {
                os << " ";
            }
            os << "\n";
        }
    }
}

// END: HollowBox
string HollowBox::type() const {
    return "Hollow";
}

// START: CheckeredBox
CheckeredBox::CheckeredBox(): Box() {

}

CheckeredBox::CheckeredBox(const int &x, const int &y): Box(x, y) {

}

void CheckeredBox::print(ostream &os) const {
    for (int c = 0; c < getWidth(); c++) {
        for (int d = 0; getHeight(); d++) {
            if (d % 2 == c % 2) {
                os << "x";
            } else {
                os << " ";
            }
            os << "\n";
        }
    }
}

// END: CheckeredBox
string CheckeredBox::type() const {
    return "Checkered";
}

unique_ptr<Box> boxFactory(char c, int w, int h) {
    unique_ptr<Box> drawing;
    switch (c) {
        case 'f':
            drawing = make_unique<FilledBox>(w, h);
            return drawing;
        case 'h':
            drawing = make_unique<HollowBox>(w, h);
            return drawing;
        case 'c':
            drawing = make_unique<CheckeredBox>(w, h);
            return drawing;
        default:
            throw runtime_error(">> ERROR: Invalid parameters. Please try again.");
    }
}
