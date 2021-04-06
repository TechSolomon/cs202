// main.cpp
// Solomon Himelbloom
// 6 April 2021
// Class templates (source file) example for CS 202.

#include "wrapper.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::move;
using std::string;
using std::ostream;
using std::reverse;

int main() {
    Wrapper<int> w{2};
    Wrapper<string> s{"Hello world!"};

    cout << w << " " << s << endl;

    return 0;
}
