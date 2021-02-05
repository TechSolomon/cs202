// c_style_strings.cpp
// Solomon Himelbloom
// 28 January 2021
// C-style strings example for CS 202.

#include <iostream>

int main() {
    std::cout << "Hello, C-style strings." << std::endl;

    // Copies a C-style string into memory dynamically (using new).
    char* strdup(const char*);

    // Finds the first occurrence of the C-style string x in s.
    char* findx(const char* s, const char* x);

    return 0;
}
