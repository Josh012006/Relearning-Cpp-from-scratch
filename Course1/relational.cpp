#include <iostream>


int main() {
    int a = 15;
    int b = 20;

    std::cout << std::boolalpha;

    std::cout << (a > b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (a <= b) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;

    return 0;
}
