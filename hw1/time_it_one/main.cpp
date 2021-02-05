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

void timeCalculation() {
    auto start = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = (end - start);
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "Finished computation at " << std::ctime(&end_time)
        << "Elapsed time: " << elapsed_seconds.count() << "s\n";
}

int main(int argc, const char ** argv) {
    std::cout << argc << " total argument(s), program name is " << argv[0] << "\n";

    timeCalculation();

    cout << "Press ENTER to quit... ";
    while (cin.get() != '\n') ;

    return 0;
}
