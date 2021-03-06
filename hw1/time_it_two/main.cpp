// main.cpp
// Solomon Himelbloom
// 28 January 2021
// Time It II example for CS 202.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <ctime>
#include <fstream>
#include <sstream>
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
using std::ifstream;
using std::ofstream;
using std::istringstream;

// Read a local file and print contents to the console.
bool readFile(const string &filename) {
    ifstream file(filename);

    while (true) {
        string new_line;
        getline(file, new_line);

        if (!file) {
            if (file.eof()) {
                std::cout << "Finished reading the requested file." << std::endl;
                return true;
            }
            else {
                std::cout << "Error during transit. Please try again." << std::endl;
                return false;
            }
            break;
        }
        std::cout << new_line << std::endl;
    }

    if (!file) {
        std::cout << "Cannot open the requested file." << std::endl;
        return false;
    }

    cout << filename;
    return true;
}

int main() {
    cout << "Hello, Time It (#2)." << endl;
    
    const string fname = "input.txt";  // Example input file.
    const string book = "books/wonderland.txt";  // Designated file to read and write.

    bool readsuccess = readFile(fname);

    cout << "Press ENTER to quit... ";
    while (cin.get() != '\n') ;

    return 0;
}
