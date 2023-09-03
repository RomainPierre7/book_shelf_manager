#include <iostream>
#include "book.hpp"
#include "under_shelf.hpp"

int main(int argc, char* argv[]){
    std::cout << "========== BOOK SHELF MANAGER ==========\n\n";
    std::cout << "Select an option from the following list:\n";
    std::cout << "\t1: See my books\n";
    std::cout << "\t2: Add a book\n";
    std::cout << "\t3: Remove a book\n";
    std::cout << "\t4: Edit a book\n";
    std::cout << "\t5: Add an under shelf\n";
    std::cout << "\t6: Remove an under shelf\n";
    std::cout << "\t7: Edit an under shelf\n";
    std::cout << "\t8: Quit\n\n";

    int option;
    std::cin >> option;

    switch (option)
    {
    case 1:
        std::cout << "You selected 1\n";
        for (int i = 0; i < 10; i++){
            Book book("Title", "Author", 2020, "Under Shelf", true);
            book.print();
        }
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
        break;
    case 6:
        std::cout << "You selected 6\n";
        break;
    case 7:
        std::cout << "You selected 7\n";
        break;
    case 8:
        std::cout << "You selected 8\n";
        return 0;
        break;
    default:
        std::cout << "Invalid option\n";
        break;
    }
}