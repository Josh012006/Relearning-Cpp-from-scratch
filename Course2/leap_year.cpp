#include <iostream>





int main() {

    int year;
    bool isLeapYear = false;

    std::cout << "What is the year you want to test : ";
    std::cin >> year;
    std::cin.ignore();

    if(year % 400 == 0) {
        isLeapYear = true;
    } else {
        if(year % 4 == 0) {
            if(year % 100 != 0) {
                isLeapYear = true;
            }
        }
    }

    std::string text = (isLeapYear) ? " is ": " isn't ";

    std::cout << year << text << "a leap year." << std::endl;

    return 0;
}
