#include <iostream>
#include "Pair.h"
#include "Long.h"

Long::Long() : Pair() {}
Long::Long(int first, int second) : Pair(first, second) {}
Long::Long(Long& l) : Pair(l) {}
Long::~Long() {};
Long Long::operator+(const Long& l)
{
	Long tmp;
	tmp.first = l.first + first;
	tmp.second = l.second + second;
	return tmp;
}
Long Long::operator-(const Long& l)
{
	Long tmp;
	tmp.first = first - l.first;
	tmp.second = second - l.second;
	return tmp;
}
Long Long::operator*(const Long& l)
{
	Long tmp;
	tmp.first = first * l.first;
	tmp.second = second * l.second;
	return tmp;
}