#pragma once
#include <iostream>

class Pair
{
protected:
	int first;
	int second;
public:
	Pair();
	Pair(int F, int S);
	~Pair();
	Pair(const Pair& p);
	void set(int f, int s);
	int getFirst(const Pair& p);
	int getSecond(const Pair& p);
	friend std::istream& operator>>(std::istream& in, Pair& p);
	friend std::ostream& operator<<(std::ostream& out, const Pair& p);
	Pair& operator=(const Pair& p);
	Pair operator+(const Pair& p);
};
