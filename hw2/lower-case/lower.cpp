// lower.cpp
// Solomon Himelbloom
// 9 February 2021
// Lowercase letters example for CS 202.

#include <iostream>

// Replaces all uppercase characters in the 
// C-style string 's' with their lowercase equivalents.
void to_lower(char* s) {
    for (;*s;s++) {
        if ('A' <= *s && 'Z' >= *s) {
            *s -= ('A'-'a');
        }
    } if (s==0) {
        return;
    }
}

// Compare above to_lower function input to desired output.
void analysis(const std::string& t) {
    std::string testing = t;
    std::cout << testing << std::endl;
    char* s = &testing[0];
    to_lower(s);
    std::cout << s << std::endl;
}

int main() {
    analysis("Hello, World!");
    analysis("Solomon was here.");
    analysis("UAF-CS");
}
