// main.cpp
// Solomon Himelbloom
// 14 January 2021
// Flow of control example for CS 202.

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

// Write a C++ program that uses each of the following flow of control structures.

void foo() {
    cout << "Function call inside foo()." << endl;
}

int main() {
    // if/else
    int zipCode = 99775;

    if (zipCode == 99775) {
        cout << "Fairbanks, AK" << endl;
    }

    cout << endl;

    // switch
    int value = 1;

    switch (value) {
    case 1:
        cout << "Code path for value of 1." << endl;
        break;

    case 2:
        cout << "Code path for value of 2." << endl;
        break;

    case 3:
        cout << "Code path for value of 3." << endl;
        break;

    default:
        cout << "Code path for the default path." << endl;
        break;
    }

    cout << endl;

    // a function call
    foo();

    cout << endl;

    // a while loop
    int x = 0;
    while(x < 5) {
        cout << ++x << endl;
    }

    cout << endl;

    // a do/while loop
    do {
        cout << "Cycle #" << x-- << endl;
    } while (x > 0);

    cout << endl;

    // a (normal) for loop
    int i = 1;

    for (i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }

        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }

        else {
            cout << i << endl;
        }
    }

    cout << endl;

    // a range based for loop
    vector<int> fibonacci{0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    for (auto i:fibonacci) {
        cout << i << " ";
    } cout << endl;

    return 0;
}