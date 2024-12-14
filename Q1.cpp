//Question 1:
#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    // Using switch-case for conditional statements
    switch (n) {
        case -1:
            std::cout << "negative one\n";
            break;
        case 0:
            std::cout << "zero\n";
            break;
        case 1:
            std::cout << "positive one\n";
            break;
        default:
            std::cout << "other value\n";
            break;
    }

    return 0;
}


