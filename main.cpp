// SumCalculator.cpp
#include <iostream>

int main() {
    double num1, num2;
    std::cout << "THIS SOFTWARE SUM TWO NUMBER TOGETHER: "  << std::endl;
    std::cout << "----------------------------------- "  << std::endl;
    std::cout << "Enter the first number: "  << std::endl;
    std::cin >> num1;

    std::cout << "Enter the second number: "  << std::endl;
    std::cin >> num2;

    double sum = num1 + num2;
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
