#include <iostream>
#include "Pair.h"

Pair::Pair()
{
	first = 0;
	second = 0;
}
Pair::Pair(int F, int S)
{
	first = F;
	second = S;
}
Pair::~Pair() {};
Pair::Pair(const Pair& p)
{
	first = p.first;
	second = p.second;
}
void Pair::set(int f, int s)
{
	first = f;
	second = s;
}
int Pair::getFirst(const Pair& p)
{
	return p.first;
}
int Pair::getSecond(const Pair& p)
{
	return p.second;
}
std::istream& operator>>(std::istream& in, Pair& p)
{
	int first;
	int second;
	std::cout << "¬ведите Pair" << std::endl;
	std::cout << "first?: "; in >> first;
	std::cout << "second?: "; in >> second;
	p.set(first, second);
	return in;
}
std::ostream& operator<<(std::ostream& out, const Pair& p)
{
	return (out << p.first << "," << p.second);
}
Pair& Pair::operator=(const Pair& p)
{
	if (&p == this)
	{
		return *this;
	}
	first = p.first;
	second = p.second;
	return *this;
}
Pair Pair::operator+(const Pair& p)
{
	Pair tmp;
	tmp.first = first + second;
	tmp.second = p.first + p.second;
	return tmp;
}