#include <iostream>

int fibonacci(int n) {
    if (n <= 1) // базовий випадок: F(0) = 0, F(1) = 1
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // рекурсивно обчислюємо F(n)
}

int main() {
    // Example usage
    int n = 6;
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;
    return 0;
}
