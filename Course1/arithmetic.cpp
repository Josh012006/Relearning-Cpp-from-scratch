#include <iostream>


int main() {

    int a = 10;
    int b = 3;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int reminder = a % b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Sum: " << difference << std::endl;
    std::cout << "Sum: " << product << std::endl;
    std::cout << "Sum: " << quotient << std::endl;
    std::cout << "Sum: " << reminder << std::endl;

    int result = 11;
    result += 5;
    result--;
    ++result;
    std::cout << "Compound assignment operator test: " << result << std::endl;

    return 0;

}