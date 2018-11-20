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
	void addMoney(Money m);
	void subtractMoney(Money m);
};