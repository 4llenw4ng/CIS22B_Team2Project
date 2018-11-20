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
	this->dollars += m.getDollars();
	this->cents += m.getCents();
	this->trim();
}

void Money::trim()
{
	while (cents >= 100)
	{
		dollars++;
		cents -= 100;
	}
}

Money operator+(const Money &m1, const Money &m2)
{
	Money m;
	m.setDollars(m1.dollars + m2.dollars);
	m.setCents(m1.cents + m2.cents);
	m.trim();
	return m;
}
