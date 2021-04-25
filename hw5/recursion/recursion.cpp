// recursion.cpp
// Solomon Himelbloom
// 24 April 2021
// Recursion & Ackerman's Function Analysis example (source file) for CS 202.

#include "recursion.hpp"

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
    if (n == 0) {
        return 0;
    }

    else if (n == 1) {
        return 1;
    }

    else if (n > 1) {

        int initial = 0;
        int next = 1;
        int sum = initial + next;

        for (int iterator = 1; iterator < n; iterator++) {
            sum = next + initial;
            initial = next;
            next = sum;
        }

        return sum;
    }

    return 0;
}

int ack(int m, int n) {
    if (m == 0) {
        return (n + 1);
    }

    else if (m > 0 && n == 0) {
        return ack(m - 1, 1);
    }

    else if (m > 0 & n > 0) {
        return ack(m - 1, ack(m, n - 1));
    }

    return 0;
}
