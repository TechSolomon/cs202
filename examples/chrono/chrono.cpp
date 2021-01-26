// Docs: https://en.cppreference.com/w/cpp/chrono

#include <iostream>
#include <chrono>
#include <ctime>

long fibonacci(unsigned n) {
    if (n < 2) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n-2);
}

int main() {
    auto start = std::chrono::system_clock::now();
    std::cout << "f(42) = " << fibonacci(42) << '\n';
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = (end - start);
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "Finished computation at " << std::ctime(&end_time)
        << "Elapsed time: " << elapsed_seconds.count() << "s\n";
}