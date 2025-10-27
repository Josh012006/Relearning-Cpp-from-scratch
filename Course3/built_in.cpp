#include <iostream>



int main() {

    int array[5] = {2, 56, 84, 5, 9};

    std::cout << "The second element is : " << array[1] << std::endl;

    // for-each loop
    for(int num : array) {
        std::cout << 2 * num << std::endl;
    }

    int myArray[10];
    for(int i = 0; i < 10; i++) {
        myArray[i] = i + 1;
    }


    return 0;
}