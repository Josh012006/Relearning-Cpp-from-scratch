#include <iostream>
#include <array>



int main() {

    std::array<int, 5> myArray{}; // Initialized a size-five array with 0 for every value

    std::cout << "The array's size is " << myArray.size() << std::endl;
    std::cout << "The array is empty " << myArray.empty() << std::endl;

    return 0;
}