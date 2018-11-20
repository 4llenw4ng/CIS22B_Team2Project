#pragma once
#include"Book.h"

class BookList {
private:
	Book* bookList;
	int size;
	int searchBookByISBN(std::string isbn);

public:
	BookList();
	BookList(int size);
	Book operator[](const int index) {
		return bookList[index];
	}
	
	void add(Book book);

	void remove(Book book);

	void reallocate(int sizeMod);

	~BookList();
};