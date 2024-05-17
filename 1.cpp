#include <iostream>
#include <string>

void reversePrint(const std::string& str, int index) {
    if (index < 0) // базовий випадок: кінець строки
        return;
    std::cout << str[index]; // друкуємо символ зі строки
    reversePrint(str, index - 1); // викликаємо рекурсію для попереднього індексу
}

void reversePrint(const std::string& str) {
    reversePrint(str, str.length() - 1); // починаємо з останнього символу
}

int main() {
    std::string str = "tiger";
    reversePrint(str);
    return 0;
}
