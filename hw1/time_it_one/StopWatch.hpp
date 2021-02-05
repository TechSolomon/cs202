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
    void timeCalculation() {
        auto start = std::chrono::system_clock::now();
        auto end = std::chrono::system_clock::now();

        std::chrono::duration<double> elapsed_seconds = (end - start);
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);

        std::cout << "Finished computation at " << std::ctime(&end_time)
            << "Elapsed time: " << elapsed_seconds.count() << "s\n";
    }

    double getTimeInSeconds();
    double getTimeInMilliseconds();
};

#endif // TIME_IT_STOPWATCH_HPP
