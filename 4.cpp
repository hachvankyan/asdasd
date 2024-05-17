#include <iostream>

int climbStairs(int n) {
    if (n == 1) // базовий випадок: один крок
        return 1;
    if (n == 2) // базовий випадок: два кроки
        return 2;
    return climbStairs(n - 1) + climbStairs(n - 2); // рекурсивно обчислюємо кількість комбінацій
}

int main() {
    // Example usage
    int n = 5;
    std::cout << "Number of unique ways to climb " << n << " stairs: " << climbStairs(n) << std::endl;
    return 0;
}
