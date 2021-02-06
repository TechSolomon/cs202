// main.cpp
// Solomon Himelbloom
// 28 January 2021
// Time It I example for CS 202.
// C++ Docs: https://en.cppreference.com/w/cpp/chrono

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

int main(int argc, const char ** argv) {
    std::cout << argc << " total argument(s), program name is " << argv[0] << "\n";

    StopWatch exampleInterval;
    exampleInterval.timeCalculation();

    StopWatch algorithmTime;
    algorithmTime.randomDistribution();

    cout << "Press ENTER to quit... ";
    while (cin.get() != '\n') ;

    return 0;
}
