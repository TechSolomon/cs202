// StopWatch.hpp
// Solomon Himelbloom
// 4 February 2021
// StopWatch header file for CS 202.

#ifndef TIME_IT_STOPWATCH_HPP
#define TIME_IT_STOPWATCH_HPP

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class StopWatch {
private:
    string _time;
public:
    StopWatch();
    std::string getTime() const;
    void setTime(const string &time);
    double getTimeInSeconds();
    double getTimeInMilliseconds();
};

#endif // TIME_IT_STOPWATCH_HPP
