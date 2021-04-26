// box.hpp
// Solomon Himelbloom
// 1 April 2021
// Box header file example for CS 202.

#include <iostream>
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

#ifndef BOXES_BOX_HPP
#define BOXES_BOX_HPP

class Box {
public:
    Box();
    Box(int h, int w);

    int getHeight() const;
    int getWidth() const;

    void setHeight(int h);
    void setWidth(int w);
private:
    int _height;
    int _width;
};

class FilledBox : public Box {
public:
private:
};

class HollowBox : public Box {
public:
private:
};

class CheckeredBox : public Box {
public:
private:
};

unique_ptr<Box> boxFactory(char c, int w, int h);

#endif //BOXES_BOX_HPP
