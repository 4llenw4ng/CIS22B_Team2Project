#include "Money.h"

Money::Money()
{
	dollars = 0;
	cents = 0;
}

Money::Money(int d, int c)
{
	dollars = d;
	cents = c;
}

int Money::getDollars()
{
	return dollars;
}

int Money::getCents()
{
	return cents;
}

void Money::setDollars(int i)
{
	dollars = i;
}

void Money::setCents(int i)
{
	cents = i;
}

void Money::addMoney(Money m)
{

}