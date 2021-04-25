// recursion.cpp
// Solomon Himelbloom
// 24 April 2021
// Recursion & Ackerman's Function Analysis example (source file) for CS 202.

#include "recursion.hpp"
#include <iostream>

int fib(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int fib_loop(int n) {
    return 0;
}

int ack(int n, int o) {
    return 0;
}
