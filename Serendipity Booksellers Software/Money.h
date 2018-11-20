//To simulate an amount of money
#pragma once
#include <iostream>

class Money
{
private:
	int dollars;
	int cents;
public:
	Money();
	Money(int d, int c);
	int getDollars();
	int getCents();
	void setDollars(int i);
	void setCents(int i);
	void addMoney(Money m); //adds m to this, trimming accordingly
	void trim(); //trims the amount (adequately tweaks any value of >= 100 in cents to an appropriate value)
	//void subtractMoney(Money m);
	friend Money operator+(const Money &m1, const Money &m2);//OPERATOR OVERLOADING, returns the trimmed sum of m1 and m2 
};
