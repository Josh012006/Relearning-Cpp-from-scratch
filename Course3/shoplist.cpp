#include <iostream>
#include <vector>




int main() {

    std::vector<std::string> items;

    std::cout << "Enter items to include in your shopping list. Enter 'done' when you're finished." << std::endl;

    std::string item;
    getline(std::cin, item);

    while(item != "done") {
        items.push_back(item);
        getline(std::cin, item);
    }

    std::cout << "\n --- Here is your list ---\n" << std::endl;

    for(std::string item : items) {
        std::cout << item << std::endl;
    }


    return 0;
}