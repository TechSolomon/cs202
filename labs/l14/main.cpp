// main.cpp
// Solomon Himelbloom
// 1 April 2021
// Function templates example for CS 202.

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

template<typename placeholder>
placeholder twice(const placeholder &x) {
    return x + x;
}

string twice(const char * str) {
    auto test = string(str);
    return test + str;
}

int main() {
    cout << twice(2) << endl;
    cout << twice(2.3) << endl;
    cout << twice(string("Hello")) << endl;
    cout << twice("Hello") << endl;

    return 0;
}
