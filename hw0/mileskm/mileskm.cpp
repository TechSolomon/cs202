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
    cout << "––––––––––––––––––––––––––––" << endl;
    cout << ">> [Press 1] For miles --> kilometers." << endl;
    cout << ">> [Press 2] For kilometers --> miles." << endl;
    cout << "––––––––––––––––––––––––––––––––––––––" << endl;
}

int main() {
    float mile = 0.0;
    float km = 0.0;
    int units = 0;

    instructions();

    cout << "Unit conversion selection: ";
    cin >> units;

    switch (units) {
    case 0:
        cout << "The program has ended." << endl;
        break;

    case 1:
        cout << "Enter the number of miles: ";
        cin >> mile;

        km = mile * 1.609;

        if (mile == 1) {
            cout << mile << " mile is equal to " << km << " kilometers." << endl; 
        }

        else if (mile < 0) {
            cout << "Please enter a positive value of miles and try again." << endl;
        }

        else {
            cout << mile << " miles is equal to " << km << " kilometers." << endl; 
        }

        break;

    case 2:
        cout << "Enter the number of kilometers: ";
        cin >> km;

        mile = km / 1.609;

        if (km == 1) {
            cout << km << " kilometer is equal to " << mile << " miles." << endl; 
        }

        else if (km < 0) {
            cout << "Please enter a positive value of kilometers and try again." << endl;
        }

        else {
            cout << km << " kilometers is equal to " << mile << " miles." << endl; 
        }

        break;
    
    default:
        cout << "ERROR: Please try another selection." << endl;
        break;
    }
}