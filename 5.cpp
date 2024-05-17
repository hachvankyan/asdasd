#include <iostream>

double myPow(double x, int n) {
    if (n == 0) // базовий випадок: x^0 = 1
        return 1.0;
    if (n < 0) {
        x = 1 / x; // обернене число
        n = -n; // враховуємо від'ємний експонент
    }
    if (n % 2 == 0) {
        double half = myPow(x, n / 2); // рекурсивно обчислюємо піднесення до степені половини
        return half * half; // повертаємо квадрат
    } else {
        return x * myPow(x, n - 1); // рекурсивно обчислюємо піднесення до степені (n - 1)
    }
}

int main() {
    // Example usage
    double x = 2.0;
    int n = -3;
    std::cout << x << " raised to the power of " << n << " is: " << myPow(x, n) << std::endl;
    return 0;
}
