// temperature.cpp
// Solomon Himelbloom
// 21 January 2021
// Temperature conversion program for CS 202.

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::stod;
using std::strtod;
using std::string;

// Conversion using the C++ Standard Template Library (stod).
double cpp_ftoc(const char* new_str) {
    double temperature = 0;
    string str(new_str);
    temperature = stod(new_str);

    // Fahrenheit --> Celsius
    temperature = ((5/9) * ((temperature + 40) - 40));
    return temperature;
}

// Function using a C function (strod) for conversions.
double c_ctof(const char* old_str) {
    double temperature = 0;
    temperature = strtod(old_str, nullptr);

    // Celsius --> Fahrenheit
    temperature = ((9/5) * ((temperature + 40) - 40)); 
    return temperature;
}

int main(int argc, char ** argv) {
    cout << argc << " total arguments, program name is " << argv[0] << "\n";

    return 0;
}