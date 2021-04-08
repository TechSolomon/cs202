// main.cpp
// Solomon Himelbloom
// 8 April 2021
// Intermediate STL example for CS 202.

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::adjacent_difference;
using std::all_of;
using std::none_of;
using std::any_of;

int main() {
    cout << "----- Adjacent Difference -----" << endl;

    vector<int> fibonacci = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};
    adjacent_difference(fibonacci.begin(), fibonacci.end(), fibonacci.begin());

    cout << "Fibonacci Sequence: " << endl;

    for (auto n : fibonacci) {
        cout << n << ' ';
    }

    cout << "\n\n----- All / Any / None of -----";

    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
                         31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
                         73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
                         127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
                         179, 181, 191, 193, 197, 199, 211, 223, 227, 229,
                         233, 239, 241, 251, 257, 263, 269, 271, 277, 281,
                         283, 293, 307, 311, 313, 317, 331, 337, 347, 349,
                         353, 359, 367, 373, 379, 383, 389, 397, 401, 409,
                         419, 421, 431, 433, 439, 443, 449, 457, 461, 463,
                         467, 479, 487, 491, 499, 503, 509, 521, 523, 541,
                         547, 557, 563, 569, 571, 577, 587, 593, 599, 601,
                         607, 613, 617, 619, 631, 641, 643, 647, 653, 659,
                         661, 673, 677, 683, 691, 701, 709, 719, 727, 733,
                         739, 743, 751, 757, 761, 769, 773, 787, 797, 809,
                         811, 821, 823, 827, 829, 839, 853, 857, 859, 863,
                         877, 881, 883, 887, 907, 911, 919, 929, 937, 941,
                         947, 953, 967, 971, 977, 983, 991, 997};

    cout << "\nPrime Numbers (1-1000): " << endl;

    for (auto n : prime) {
        cout << n << ' ';
    }

    if (any_of(prime.cbegin(), prime.cend(), [](int i){return i % 2 == 0; })) {
        cout << "\n>> At least one number is divisible by 2.\n" << endl;
    }

    // Remove the first item in the vector.

    prime.erase(prime.begin());

    cout << "Prime Numbers (1-1000) with 2 removed: " << endl;

    for (auto n : prime) {
        cout << n << ' ';
    }

    if (none_of(prime.cbegin(), prime.cend(), [](int i){return i % 2 == 0; })) {
        cout << "\n>> None of them are even." << endl;
    }

    if (all_of(prime.cbegin(), prime.cend(), [](int j){return j % 2 != 0; })) {
        cout << ">> All numbers are odd." << endl;
    }

}
