#include "json_parsing.hpp"

using namespace std;

Json::Value open_data(){
    ifstream ifs("data/books.json");
    if (!ifs.is_open()) {
        std::cerr << "Error while opening JSON file." << std::endl;
    }
    Json::Reader reader;
    Json::Value obj;
    reader.parse(ifs, obj);
    ifs.close();
    return obj;
}

void print_books(){
    Json::Value obj = open_data();
    int size = obj["books"].size();
    if (size == 0) {
        cout << "No books to show." << endl;
        return;
    }
    for (int i = 0; i < size; i++){
        cout << "----- Book " << i+1 << "-----" << endl;
        cout << "Book: " << obj["books"][i]["title"].asString() << endl;
        cout << "Author: " << obj["books"][i]["author"].asString() << endl;
        cout << "Year: " << obj["books"][i]["year"].asString() << endl;
        cout << "Genre: " << obj["books"][i]["genre"].asString() << endl;
        cout << "Is read: " << obj["books"][i]["is_read"].asString() << endl;
        cout << endl;
    }
}

void add_book(){
    Json::Value obj = open_data();
    int size = obj["books"].size();
    string title, author, year, genre, is_read;
    cin.ignore();
    cout << "Enter the title of the book: ";
    getline(cin, title);
    cout << "Enter the author of the book: ";
    getline(cin, author);
    cout << "Enter the year of the book: ";
    getline(cin, year);
    cout << "Enter the genre of the book: ";
    getline(cin, genre);
    cout << "Enter if the book is read or not (true or false): ";
    getline(cin, is_read);
    obj["books"][size]["title"] = title;
    obj["books"][size]["author"] = author;
    obj["books"][size]["year"] = year;
    obj["books"][size]["genre"] = genre;
    obj["books"][size]["is_read"] = is_read;
    ofstream ofs("data/books.json");
    ofs << obj;
    ofs.close();
}

void remove_book() {
    Json::Value obj = open_data();
    Json::Value& books = obj["books"];
    int size = books.size();
    if (size == 0) {
        cout << "No books to remove." << endl;
        return;
    }
    print_books();
    int book_to_remove;
    cout << "Enter the number of the book you want to remove: ";
    cin >> book_to_remove;
    if (book_to_remove < 1 || book_to_remove > size) {
        cout << "Invalid book number" << endl;
        return;
    }
    books.removeIndex(book_to_remove - 1, &books[size - 1]);
    obj["books"].resize(size - 1);
    ofstream ofs("data/books.json");
    ofs << obj;
    ofs.close();
    cout << "Book removed successfully." << endl;
}

void edit_book(){
    Json::Value obj = open_data();
    int size = obj["books"].size();
    if (size == 0) {
        cout << "No books to edit." << endl;
        return;
    }
    int book_to_edit;
    print_books();
    cout << "Enter the number of the book you want to edit: ";
    cin >> book_to_edit;
    if (book_to_edit > size){
        cout << "Invalid book number" << endl;
        return;
    }
    string title, author, year, genre, is_read;
    cin.ignore();
    cout << "Enter the title of the book: ";
    getline(cin, title);
    cout << "Enter the author of the book: ";
    getline(cin, author);
    cout << "Enter the year of the book: ";
    getline(cin, year);
    cout << "Enter the genre of the book: ";
    getline(cin, genre);
    cout << "Enter if the book is read or not (true or false): ";
    getline(cin, is_read);
    obj["books"][book_to_edit-1]["title"] = title;
    obj["books"][book_to_edit-1]["author"] = author;
    obj["books"][book_to_edit-1]["year"] = year;
    obj["books"][book_to_edit-1]["genre"] = genre;
    obj["books"][book_to_edit-1]["is_read"] = is_read;
    ofstream ofs("data/books.json");
    ofs << obj;
    ofs.close();
}