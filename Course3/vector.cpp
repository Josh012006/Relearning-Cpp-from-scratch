#include <iostream>
#include <vector>



int main() {

    std::vector<double> AB(3);

    AB[0] = 1.0;
    AB[1] = 5.0;
    AB[2] = 3.0;

    AB.push_back(2.0);

    for(double component : AB) {
        std::cout << component << " " ;
    }

    std::cout << std::endl;

    std::cout << "Front is " << AB.front() << std::endl;
    std::cout << "Back is " << AB.back() << std::endl;

    AB.pop_back();
    AB.insert(AB.begin() + 3, 4.0);

    for(double component : AB) {
        std::cout << component << " " ;
    }

    std::cout << std::endl;

    return 0;
}