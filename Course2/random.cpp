#include <iostream>
#include <cstdlib>
#include <ctime>



int main() {

    std::srand(time(nullptr));

    std::cout << rand() % 20 << std::endl;

    return 0;
}