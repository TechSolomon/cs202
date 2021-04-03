// box.hpp
// Solomon Himelbloom
// 1 April 2021
// Box header file example for CS 202.

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

#ifndef BOXES_BOX_HPP
#define BOXES_BOX_HPP

class Box {
public:
    Box();
    Box(const Box &);
    Box(const std::string &name);
    ~Box();
private:
    std::string _name;
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

#endif //BOXES_BOX_HPP
