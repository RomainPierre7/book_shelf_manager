#include <iostream>
#include <fstream>
#include "json_parsing.hpp"

using namespace std;

void print_menu(){
    cout << "========== BOOK SHELF MANAGER ==========\n\n";
    cout << "Enter an option from the following list:\n";
    cout << "\t1: See my books\n";
    cout << "\t2: Add a book\n";
    cout << "\t3: Remove a book\n";
    cout << "\t4: Edit a book\n";
    cout << "\t5: Quit\n\n";
}

int main(int argc, char* argv[]){
    print_menu();

    int option;
    cin >> option;
    while (true){
        switch (option)
        {
        case 1:
            cout << "You selected 1 to see all your books \n\n";
            print_books();
            break;
        case 2:
            cout << "You selected 2 to add a book \n\n";
            add_book();
            break;
        case 3:
            cout << "You selected 3 to remove a book \n\n";
            remove_book();
            break;
        case 4:
            cout << "You selected 4 to edit a book \n\n";
            edit_book();
            break;
        case 5:
            cout << "You selected 5 to quit \n\n";
            return 0;
            break;
        default:
            cout << "Invalid option \n\n";
            break;
        }

        cout << "Press enter to continue..." << endl;
        cin.ignore();
        cin.get();
        print_menu();
        cin >> option;
    }
}