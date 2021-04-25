// main.cpp
// Solomon Himelbloom
// 23 April 2021
// Recursion & Ackerman's Function Analysis example for CS 202.

#include "recursion.hpp"
#include <iostream>

int main() {
    std::cout << "Hello, recursion! (program #3)." << std::endl;

    std::cout << ">> fib(0, 1, 2, 10, 25): " << std::endl;

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

    std::cout << ">> fib_loop(0, 1, 2, 10, 25): " << std::endl;

    // 0
    std::cout << fib_loop(0) << std::endl;

    // 1
    std::cout << fib_loop(1) << std::endl;

    // 2
    std::cout << fib_loop(2) << std::endl;

    // 10
    std::cout << fib_loop(10) << std::endl;

    // 25
    std::cout << fib_loop(25) << std::endl;

    std::cout << ">> ack(n): " << std::endl;

    std::cout << ack(0, 1) << std::endl;
    std::cout << ack(1, 2) << std::endl;
    std::cout << ack(2, 3) << std::endl;
    std::cout << ack(3, 4) << std::endl;
    std::cout << ack(4, 5) << std::endl;
    std::cout << ack(6, 7) << std::endl;

    return 0;
}
