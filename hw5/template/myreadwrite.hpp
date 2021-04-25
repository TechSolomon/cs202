// myreadwrite.hpp
// Solomon Himelbloom
// 23 April 2021
// Template read() and write() for CS 202.

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <ostream>
#include <fstream>
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

#ifndef TEMPLATE_MYREADWRITE_HPP
#define TEMPLATE_MYREADWRITE_HPP

template<typename Test>
void myRead(ifstream& ifile, Test& reading) {
    ifile.read(reinterpret_cast<char *>(&reading), sizeof(Test));
}

template <typename Test>
void myWrite(ofstream& ofile, const Test &writing) {
    ofile.write(reinterpret_cast<const char*>(&writing), sizeof(Test));
}

#endif //TEMPLATE_MYREADWRITE_HPP
