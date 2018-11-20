#include"BookList.h"

BookList::BookList() {
	BookList::size = 0;
	bookList = new Book[size];
}

BookList::BookList(int size) {
	BookList::size = size;
	bookList = new Book[size];
}

void BookList::add(Book book) {
	reallocate(1);
	if (searchBookByISBN(book.getIsbn()) == -1) {
		BookList::bookList[size - 1] = book;
	}
	else {
		//BookList::bookList[searchForBook(book)]
	}
	
}

void BookList::remove(Book book) {
	int index = searchBookByISBN(book.getIsbn());
	if (index != -1) {
		for (int i = index; i < size - 1; i++) {
			bookList[i] = bookList[i + 1];
		}
	}
	reallocate(-1);
}

void BookList::reallocate(int sizeMod) {
	Book* newList = new Book[size + sizeMod];
	for (int i = 0; i < size + sizeMod; i++) {
		newList[i] = Book(bookList[i]);
	}
	delete bookList;
	bookList = newList;
	size += sizeMod;
}

int BookList::searchBookByISBN(std::string isbn) {
	for (int i = 0; i < BookList::size; i++) {
		if (bookList[i].getIsbn() == isbn) {
			return i;
		}
	}
	return -1;
}

BookList::~BookList() {
	delete bookList;
}