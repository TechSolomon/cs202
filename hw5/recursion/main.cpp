// main.cpp
// Solomon Himelbloom
// 23 April 2021
// Recursion & Ackerman's Function Analysis example for CS 202.

#include "recursion.hpp"
#include <iostream>

int main() {
    std::cout << "Hello, recursion! (program #3)." << std::endl;

    std::cout << ">> fib(n): " << std::endl;

    // 0
    std::cout << fib(0) << std::endl;

    // 1
    std::cout << fib(1) << std::endl;

    // 2
    std::cout << fib(2) << std::endl;

    // 10
    std::cout << fib(10) << std::endl;

    // 25
    std::cout << fib(25) << std::endl;

    std::cout << ">> fib_loop(n): " << std::endl;

    std::cout << ">> ack(n): " << std::endl;
    return 0;
}
