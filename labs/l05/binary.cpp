// binary.cpp
// Solomon Himelbloom
// 4 February 2021
// Binary files example for CS 202.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
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

int main() {
    int i = 0;
    int number = 0;
    int sum = 0;
    double average = 0.0;

    ifstream fin("data.dat", std::ios::binary | std::ios::in);

    while (fin) {
        fin.read(reinterpret_cast<char *>(&i), sizeof(i));

        if (!fin) {
            break;
        }

        number++;
        sum += i;
    }

    average = double(sum) / double(number);

    cout << "Number of Integers: " << number << endl;
    cout << "Sum of Integers: " << sum << endl;
    cout << "Average of Integers: " << average << endl;
}
