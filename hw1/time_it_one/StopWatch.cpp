// StopWatch.cpp
// Solomon Himelbloom
// 4 February 2021
// StopWatch source file for CS 202.

#include "StopWatch.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::sort;
using std::reverse;
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;

StopWatch::StopWatch():_name("default") {
    cout << "Constructed a StopWatch named _default_ via default constructor." << endl;
}

