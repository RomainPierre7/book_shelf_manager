# book_shelf_manager
Console book shelf manager using json storage with [jsoncpp](https://github.com/open-source-parsers/jsoncpp) library.

## Features
With this app you will be able to :

* Show all your books
* Add a book
* Remove a book
* Edit a book

The attributes of a book are :
* Title
* Author
* Year
* Genre
* Is read (true/false)

**data persistence is ensured by json serialization (jsoncpp)**

## Json file example
```
{
	"books" : 
	[
		{
			"author" : "George Orwell",
			"genre" : "Science fiction",
			"is_read" : "true",
			"title" : "1984",
			"year" : "1949"
		},
		{
			"author" : "Joseph Kessel",
			"genre" : "Biography",
			"is_read" : "true",
			"title" : "Mermoz",
			"year" : "1950"
		}
	]
}
```

**This file is the default one to be use as a demo. You can easily remove these books with the app or by replacing the data/books.json file with the following command :**

```
echo '{
	"books" : 
	[
	]
}' > data/books.json
```



## To install
* On Ubuntu type the following command :
```
sudo apt-get install libjsoncpp-dev
```

## To compile
Type :
```
make
```

## To execute
Type :
```
./app
```