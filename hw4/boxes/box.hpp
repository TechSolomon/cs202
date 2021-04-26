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
using std::ostream;
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
    friend ostream &operator<<(ostream &os, const Box & Dimensions);
public:
    Box();
    Box(const int &h, const int &w);

    [[nodiscard]] int getHeight() const;
    [[nodiscard]] int getWidth() const;

    void setHeight(int h) const;
    void setWidth(int w) const;

    virtual void print(ostream &os) const = 0;
    [[nodiscard]] virtual string type() const = 0;

    virtual ~Box() = default;
private:
    int _height{};
    int _width{};
};

class FilledBox : public Box {
public:
    FilledBox();
    FilledBox(const int &h, const int &w);
    virtual void print(ostream &os) const override;
    virtual string type() const override;
private:
};

class HollowBox : public Box {
public:
    HollowBox();
    HollowBox(const int &h, const int &w);
    virtual void print(ostream &os) const override;
    virtual string type() const override;
private:
};

class CheckeredBox : public Box {
public:
    CheckeredBox();
    CheckeredBox(const int &h, const int &w);
    virtual void print(ostream &os) const override;
    virtual string type() const override;
private:
};

unique_ptr<Box> boxFactory(char c, int w, int h);

#endif //BOXES_BOX_HPP
