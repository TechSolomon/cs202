// list.cpp
// Solomon Himelbloom
// 9 February 2021
// Linked list (source file) example for CS 202.

#include "catch.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <list>
using std::cin;
using std::cout;
using std::endl;
using std::fstream;
using std::ifstream;
using std::map;
using std::ofstream;
using std::reverse;
using std::sort;
using std::string;
using std::vector;
using std::list;

unsigned int Cubed(unsigned int number) {
    return number < 1 ? 1 : number*number*number;
}

TEST_CASE("Third powers are checked", "[cubed]") {
    REQUIRE(Cubed(3) == 27);
    REQUIRE(Cubed(4) == 64);
    REQUIRE(Cubed(5) == 125);
}
