#ifndef __Book_h__
#define __Book_h__
#include "Date.h"
#include "Date.cpp"
#include "Money.h"
#include "Money.cpp"

class Book {
private:
	string isbn, title, author, publisher;
	Date dateAdded;
	int quantityOnHand;
	Money wholeSale, retail;
public:
	Book(string, string, string, string, Date, int, Money, Money);

	void setIsbn(string);
	void setTitle(string);
	void setAuthor(string);
	void setPublisher(string);
	void setDateAdded(Date);
	void setQuantityOnHand(int);
	void setWholeSale(Money);
	void getRetail(Money);

	string getIsbn();
	string getTitle();
	string getAuthor();
	string getPublisher();
	Date getDateAdded();
	int getQuantityOnHand();
	Money getWholeSale();
	Money getRetail();
	string toString();
};
#endif