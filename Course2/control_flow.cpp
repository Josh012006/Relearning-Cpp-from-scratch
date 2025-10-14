#include <iostream>




int main() {
    int age = 19;

    std::cout << "Your age is: " << age << std::endl;

    if (age >= 18) {
        std::cout << "You can drive." << std::endl;
    } else {
        std::cout << "You can't drive yet." << std::endl;
    }

    return 0;
}
