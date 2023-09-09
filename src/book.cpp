#include <iostream>
#include "book.hpp"

Book::Book(std::string title, std::string author, int year, std::string genre, bool is_read){
    this->title = title;
    this->author = author;
    this->year = year;
    this->genre = genre;
    this->is_read = is_read;
}

std::string Book::get_title(){
    return this->title;
}

std::string Book::get_author(){
    return this->author;
}

int Book::get_year(){
    return this->year;
}   

std::string Book::get_genre(){
    return this->genre;
}

bool Book::get_is_read(){
    return this->is_read;
}

void Book::set_title(std::string title){
    this->title = title;
}

void Book::set_author(std::string author){
    this->author = author;
}

void Book::set_year(int year){
    this->year = year;
}

void Book::set_genre(std::string genre){
    this->genre = genre;
}

void Book::set_is_read(bool is_read){
    this->is_read = is_read;
}

void Book::print(){
    std::cout << "Title: " << this->title << "\n";
    std::cout << "Author: " << this->author << "\n";
    std::cout << "Year: " << this->year << "\n";
    std::cout << "Under Shelf: " << this->genre << "\n";
    std::cout << "Is Read: " << this->is_read << "\n\n";
}