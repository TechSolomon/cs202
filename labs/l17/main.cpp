// main.cpp
// Solomon Himelbloom
// 15 April 2021
// Recursion example for CS 202.

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::fstream;
using std::ifstream;
using std::map;
using std::move;
using std::ofstream;
using std::reverse;
using std::sort;
using std::string;
using std::unique_ptr;
using std::vector;

template <typename Iterator>
void printReversed(Iterator theBegin, Iterator theEnd) {
    if (theBegin == theEnd) {
        return;
    } else {
        cout << *--theEnd << " ";
        printReversed(theBegin, theEnd);
    }
}

int main() {
    string s("Hello World!");
    printReversed(begin(s), end(s));
    cout << "\n";
    vector<int> primes{2,3,5,7,11,13,17};
    printReversed(begin(primes), end(primes));
    cout << "\n";
    return 0;
}
