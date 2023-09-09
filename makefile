SRC = src/main.cpp src/book.cpp src/json_parsing.cpp

all: compile

compile:
	g++ -std=c++11 -o prog $(SRC) -ljsoncpp