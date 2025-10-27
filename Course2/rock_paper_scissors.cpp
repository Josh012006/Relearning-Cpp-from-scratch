#include <iostream>
#include <ctime>
#include <cstdlib>





int main() {

    // Choosing the computer's answer
    std::srand(time(nullptr));
    int computer = rand() % 3;

    // User's choice
    char userChoice;
    int userInt;

    std::cout << "Rock (R) - Paper (P) - Scissors(S)" << std::endl;
    std::cout << "What is your choice (R, P or S): ";
    std::cin >> userChoice;
    std::cin.ignore();

    switch(userChoice) {
        case 'R':
            userInt = 0;
            break;
        case 'P':
            userInt = 1;
            break;
        case 'S':
            userInt = 2;
            break;
        default:
            std::cout << "Wrong input!" << std::endl;
            return 0;
    }

    // The result
    std::string result;
    std::string draw = "It's a draw.";
    std::string win = "You win !";
    std::string loss = "You lose !";

    if(userInt == computer) {
        result = draw;
    } else if(userInt == ((computer + 1) % 3)) {
        result = win;
    } else {
        result = loss;
    }

    // For debugging purposes std::cout << computer << std::endl;
    std::cout << result << std::endl;

    return 0;
}