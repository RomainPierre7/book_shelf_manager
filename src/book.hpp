#include <string>

class Book{
    private:
        std::string title;
        std::string author;
        int year;
        std::string under_shelf;
        bool is_read;
    
    public:
        Book(std::string title, std::string author, int year, std::string under_shelf, bool is_read);

        std::string get_title();
        std::string get_author();
        int get_year();
        std::string get_under_shelf();
        bool get_is_read();

        void set_title(std::string title);
        void set_author(std::string author);
        void set_year(int year);
        void set_under_shelf(std::string under_shelf);
        void set_is_read(bool is_read);
        
        void print();
};