#ifndef JSON_PARSING_HPP
#define JSON_PARSING_HPP

#include <jsoncpp/json/json.h>
#include <fstream>
#include <iostream>

Json::Value open_data();
void print_books(Json::Value obj);

#endif // JSON_PARSING_HPP