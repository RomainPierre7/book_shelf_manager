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

void print_books(Json::Value obj){
    int size = obj["books"].size();
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