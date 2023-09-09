SRC = src/main.cpp src/json_parsing.cpp

all: compile

compile:
	g++ -std=c++11 -o app $(SRC) -ljsoncpp