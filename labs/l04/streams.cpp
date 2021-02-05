// streams.cpp
// Solomon Himelbloom
// 2 February 2021
// Stream example for CS 202.

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
using std::string;
using std::map;
using std::vector;
using std::sort;
using std::reverse;
using std::ofstream;
using std::ifstream;
using std::fstream;

// Check for errors on file open and print desired text.
void printTextToFile() {
    std::ofstream out("output.txt",std::ios::app);
    out << "Hello, text file.\n";

    if (!out) {
        cout << "Error while opening file." << endl;
    }
}

void lineByLineOutput() {
    cout << ">> Please enter an int and a word: ";
    string intWordCombination;
    getline(cin, intWordCombination);
    
    // int i;
    // string word;
    // sin >> i >> word;

    // if (!sin) {
    //     cout << "Please try again!" << endl;

    //     if (sin.eof()) {

    //     }
    // }
}

int main() {
    cout << ">> Welcome to line-by-line output..." << endl;
    printTextToFile();
}
    