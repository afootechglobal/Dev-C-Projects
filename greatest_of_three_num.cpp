#include <iostream>

int main() {
    // Declare variables to store three numbers
    int num1, num2, num3;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;

    // Prompt the user to enter the third number
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> num3;

    // Use conditional statements to find the greatest number
    if (num1 >= num2 && num1 >= num3) {
        std::cout << "The greatest number is: " << num1 << std::endl;
    } else if (num2 >= num1 && num2 >= num3) {
        std::cout << "The greatest number is: " << num2 << std::endl;
    } else {
        std::cout << "The greatest number is: " << num3 << std::endl;
    }

    return 0;
}
