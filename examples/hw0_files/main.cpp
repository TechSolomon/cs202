// main.cpp
// Dylan Palmieri
// 2021-01-24
// Example solution to CS202 HW0 Temperature problem

#include <iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;
using std::stod;

double fahrenheit_to_celsius( const double & num ){
    return (num - 32) / 1.8;
}

double celsius_to_fahrenheit( const double & num ){
    return num * 1.8 + 32;
}

int main( int argc, char ** argv ) {
    if ( argc != 3 ){
        cout << "Incorrect number of arguments" << endl;
        return 0;
    }

    string conversion(argv[1]);
    double num = stod(argv[2]);
    double converted = 0.0;

    if ( conversion == "--ftoc" ) {
        converted = fahrenheit_to_celsius(num);
    } else if ( conversion == "--ctof" ){
        converted = celsius_to_fahrenheit(num);
    } else {
        cout << "Bad conversion flag: " << conversion << endl;
        cout << ". Must be either \"--ftoc\" or \"--ctof\"" << endl;
    }

    cout << "Your flag was: " << conversion << " and your temperature to convert was: " << num << endl;
    cout << "Your converted temperature is: " << converted << endl;

    return 0;
}
