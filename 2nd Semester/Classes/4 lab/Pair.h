#pragma once
#include <iostream>

class Pair
{
protected:
	int first;
	int second;
public:
	Pair();
	Pair(int, int);
	~Pair();
	Pair(const Pair&);
	void set(int, int);
	int getFirst(const Pair&);
	int getSecond(const Pair&);
	friend std::istream& operator>>(std::istream& in, Pair& p);
	friend std::ostream& operator<<(std::ostream& out, const Pair& p);
	Pair& operator=(const Pair&);
	Pair operator+(const Pair&);
};
