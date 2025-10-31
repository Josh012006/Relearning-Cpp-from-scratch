#include <iostream>
#include <array>




int main() {

    std::array<double, 7> temps;

    for(int i = 0; i < 7; i++) {
        std::cout << "Enter a temperature in fahrenheit for day " << (i+1) << ": ";
        std::cin >> temps[i];
    }

    for(double temp : temps) {
        double celsius = (temp - 32) * 5 /9;
        std::cout << temp << " F    " << celsius << " C" << std::endl;
    }

    return 0;
}
