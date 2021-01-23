// mileskm.cpp
// Solomon Himelbloom
// Created: 11 September 2020
// Modified: 22 January 2021
// Miles to kilometers conversion for CS 202.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void instructions() {
    cout << "Welcome to unit conversions!" << endl;
    cout << "Press 1 for miles --> kilometers." << endl;
    cout << "Press 2 for kilometers --> miles.\n" << endl;
}

int main() {
    float miles, kilometers;

    instructions();

    cout << "Enter the number of miles: ";
    cin >> miles;

    kilometers = miles * 1.609;

    if (miles == 1) {
        cout << miles << " mile is equal to " << kilometers << " kilometers." << endl; 
    }

    else if (miles < 0) {
        cout << "Please enter a positive value for miles and try again." << endl;
    }

    else {
        cout << miles << " miles is equal to " << kilometers << " kilometers." << endl; 
    }
}