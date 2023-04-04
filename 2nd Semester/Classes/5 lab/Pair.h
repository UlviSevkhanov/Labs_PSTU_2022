#pragma once
#include <iostream>
#include "Object.h"

class Pair : public Object
{
protected:
	int first;
	int second;
public:
	void Show();
	virtual ~Pair(void);
	Pair(void);
	Pair(int, int);
	Pair(const Pair&);
	void set(int, int);
	int getFirst(const Pair&);
	int getSecond(const Pair&);
	friend std::istream& operator>>(std::istream& in, Pair& p);
	friend std::ostream& operator<<(std::ostream& out, const Pair& p);
	Pair& operator=(const Pair&);
	Pair operator+(const Pair&);
};
