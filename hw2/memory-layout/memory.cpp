// memory.cpp
// Solomon Himelbloom
// 9 February 2021
// Memory layout example for CS 202.

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

void printPointer(int i) {
    int* iptr = &i;
    // the unary * operator dereferences the pointer
    std::cout << "i = " << *iptr << "\n";
    std::cout << "&i = " << iptr << "\n";
}

int main() {
    printPointer(0);
    printPointer(42);
    printPointer(-1337);
}
