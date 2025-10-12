#include <iostream>
#include <string>

const double PI = 3.14159;



int main() {

    double radius = 0;
    std::cout << "I can help you compute a circle's perimeter. Just write the radius : ";
    std::cin >> radius;
    std::cin.ignore();
    std::cout << "Here is the perimeter " <<  (2 * PI * radius) << "." << std::endl;

    std::string name;
    std::cout << "What is your name ? " << std::endl;
    std::cout << "Your name : ";
    std::getline(std::cin, name);
    std::cout << "So you are " << name << ". Nice to meet you!"<< std::endl;

    return 0;
}
