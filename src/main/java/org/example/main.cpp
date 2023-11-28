//
// Created by FAST on 11/27/2023.
//

#include "main.h"
#include <iostream>
#include <ostream>

// Poorly implemented Fibonacci function with intentional errors
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Intentional runtime error: Accessing an invalid index in the Fibonacci sequence
    std::cout << "Fibonacci number at position " << num << ": " << fibonacci(num) << std::endl;

    // Intentional runtime error: Division by zero
    int result = 5 / 0;

    // Unreachable code due to intentional runtime error above
    std::cout << "This line will never be executed." << std::endl;

    return 0;
}