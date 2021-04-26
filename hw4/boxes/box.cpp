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

ostream &operator<<(ostream &os, const Box &b) {
    b.print(os);
    return os;
}

Box::Box() {
    cout << "Box base constructor!" << endl;
    _height = 0;
    _width = 0;
}

Box::Box(const int &h, const int &w) {
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

FilledBox::FilledBox(): Box() {

}

FilledBox::FilledBox(const int &h, const int &w) {

}

void FilledBox::print(ostream &os) const {
    for (int f = 0; f < getWidth(); f++) {
        for (int g = 0; getHeight(); g++) {
            os << "";
        }
        os << "\n";
    }
}

string FilledBox::type() const {
    return "Test";
}

HollowBox::HollowBox(): Box() {

}

HollowBox::HollowBox(const int &h, const int &w) {

}

void HollowBox::print(ostream &os) const {

}

string HollowBox::type() const {
    return "Test";
}

CheckeredBox::CheckeredBox(): Box() {

}

CheckeredBox::CheckeredBox(const int &h, const int &w) {

}

void CheckeredBox::print(ostream &os) const {

}

string CheckeredBox::type() const {
    return "Test";
}

unique_ptr<Box> boxFactory(char c, int w, int h) {
    return nullptr;
}
