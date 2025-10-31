#include <iostream>
#include <array>




int main() {

    std::array<std::string, 5> movies;
    std::array<double, 5> ratings;

    for(int i = 0; i < 5; i++) {
        std::string movie;
        std::cout << "Enter a movie: ";
        getline(std::cin, movie);

        double rating;
        std::cout << "How much do you rate it out of ten: ";
        std::cin >> rating;
        std::cin.ignore();

        movies[i] = movie;
        ratings[i] = rating;
    }


    std::cout << "\n ---- Here are your movies and ratings ----\n" << std::endl;

    for(int i = 0; i < 5; i++) {
        std::cout << "You rated " << movies[i] << " a " << ratings[i] << "/10." << std::endl;
    }

    std::cout << std::endl;



    return 0;
}
