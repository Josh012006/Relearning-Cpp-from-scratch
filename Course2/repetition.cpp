#include <iostream>



int main() {

    int count1 = 0;
    while (count1 <= 20) {
        std::cout << count1 << std::endl;
        count1++;
    }
    std::cout << "Your time is up ! I'm coming for you sweetheart !" << std::endl;

    int count2 = 0;
    do {
        std::cout << "Slicing sound ..." << std::endl;
        count2++;
    } while (count2 < 42);
    std::cout << "I think that's enough. It's not breathing anymore." << std::endl;

    for(int i = 0; i < 16; i++) {
        std::cout << "Shovel sound ..." << std::endl;
    }
    std::cout << "Ouf ! Do you think I need to dig deeper ?" << std::endl;

    return 0;
}