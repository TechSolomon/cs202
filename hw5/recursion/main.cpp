// main.cpp
// Solomon Himelbloom
// 23 April 2021
// Recursion & Ackerman's Function Analysis example for CS 202.

#include "recursion.hpp"
#include <iostream>

int main() {
    std::cout << "Hello, recursion! (program #3)." << std::endl;

    std::cout << ">> fib(0, 1, 2, 10, 25): " << std::endl;

    std::cout << fib(0) << std::endl;
    std::cout << fib(1) << std::endl;
    std::cout << fib(2) << std::endl;
    std::cout << fib(10) << std::endl;
    std::cout << fib(25) << std::endl;

    std::cout << ">> fib_loop(0, 1, 2, 10, 25): " << std::endl;

    std::cout << fib_loop(0) << std::endl;
    std::cout << fib_loop(1) << std::endl;
    std::cout << fib_loop(2) << std::endl;
    std::cout << fib_loop(10) << std::endl;
    std::cout << fib_loop(25) << std::endl;

    //  How large an n can you calculate the Fibonacci sequence for?
    int term = 0;
    for (term = 0; term < 50; term++) {
        // #45 = 1134903170
        // #46 = 1836311903 (largest value)
        // #47 = -1323752223 (overflow)
        // #48 = 512559680
        // #49 = -811192543
        std::cout << "#" << term << " = ";
        std::cout << fib_loop(term) << std::endl;
    }

    std::cout << ">> ack(m, n) where m = [0,3]; n = [1,4]: " << std::endl;

    std::cout << ack(0, 1) << std::endl;
    std::cout << ack(1, 2) << std::endl;
    std::cout << ack(2, 3) << std::endl;
    std::cout << ack(3, 4) << std::endl;

    return 0;
}
