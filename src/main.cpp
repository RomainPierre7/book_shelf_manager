#include <iostream>
#include <fstream>
#include "book.hpp"
#include "json_parsing.hpp"

#include <jsoncpp/json/json.h>

using namespace std;

int main(int argc, char* argv[]){
    std::cout << "========== BOOK SHELF MANAGER ==========\n\n";
    std::cout << "Select an option from the following list:\n";
    std::cout << "\t1: See my books\n";
    std::cout << "\t2: Add a book\n";
    std::cout << "\t3: Remove a book\n";
    std::cout << "\t4: Edit a book\n";
    std::cout << "\t5: Quit\n\n";

    int option;
    std::cin >> option;

    switch (option)
    {
    case 1:
        std::cout << "You selected 1\n";
        print_books(open_data());
        break;
    case 2:
        std::cout << "You selected 2\n";
        break;
    case 3:
        std::cout << "You selected 3\n";
        break;
    case 4:
        std::cout << "You selected 4\n";
        break;
    case 5:
        std::cout << "You selected 5\n";
        return 0;
        break;
    default:
        std::cout << "Invalid option\n";
        break;
    }
}