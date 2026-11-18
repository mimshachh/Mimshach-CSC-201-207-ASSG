#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";

    if (!(std::cin >> number)) {
        std::cout << "Invalid input. Please enter a whole number.\n";
        return 1;
    }

    if (number % 2 == 0) {
        std::cout << number << " is even.\n";
    } else {
        std::cout << number << " is odd.\n";
    }

    return 0;
}
