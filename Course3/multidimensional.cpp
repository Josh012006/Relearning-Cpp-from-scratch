#include <iostream>




int main() {

    int myNums[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
    };

    // std::cout << myNums[1][1] << std::endl;

    for(auto& row : myNums) {
        for(auto num : row) {
            std::cout << num << std::endl;
        }
    }

    std::cout << std::endl;

    for(int row = 1; row >= 0; row--) {
        for(int col = 2; col >= 0; col--) {
            std::cout << myNums[row][col] << std::endl;
        }
    }

    return 0;
}