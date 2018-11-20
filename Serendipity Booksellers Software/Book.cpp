#include "Book.h"
#include "Date.h"
#include "Date.cpp"
#include "Money.h"
#include "Money.cpp"
#include <string>

using namespace std;

Book::Book(string isbn, string title, string author, string publisher, 
	Date dateAdded, int quantityOnHand, Money wholesale, Money retail) {
}

Book::Book(Book book) {

}

void Book::setIsbn(string str) {
	isbn = str;
}
void Book::setTitle(string str) {
	title = str;
}
void Book::setAuthor(string str) {
	author = str;
}
void Book::setPublisher(string str) {
	publisher = str;
}
void Book::setDateAdded(Date date) {
	//Waiting on Date attributes
}
void Book::setQuantityOnHand(int q) {
	quantityOnHand = q;
}
void Book::setWholeSale(Money wSale) {
	//Waiting on Money attributes
}
void Book::getRetail(Money retail) {
	//Waiting on Money attributes
}

string Book::getIsbn() {
	return isbn;
}
string Book::getTitle() {
	return title;
}
string Book::getAuthor() {
	return author;
}
string Book::getPublisher() {
	return publisher;
}
Date Book::getDateAdded() {
	return date;
}
int Book::getQuantityOnHand() {
	return quantityOnHand;
}
Money Book::getWholeSale() {
	return Money;
}
Money Book::getRetail() {
	return Money;
}
string Book::toString() {
	//setting a total of 25 chars from beginning of line
	string line1, line2, line3, line4, line5, line6, line7, line8;
	line1 = "ISBN:                     " + isbn + "\n";
	line2 = "Title:                    " + title + "\n";
	line3 = "Author:                   " + author + "\n";
	line4 = "Publisher:                " + publisher + "\n";
	//line5
	line6 = "Quantity-On-Hand:         (" + quantityOnHand;
	line6 += ")\n";
	//line7
	//line8
	return line1 + line2 + line3 + line4 + line5 + line6 + line7 + line8;
}