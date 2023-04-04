#pragma once
#include <iostream>
#include "Object.h"
class Vector
{
public:
	Vector(void);
	Vector(int);
	~Vector(void);
	void Add(Object*);
	friend std::ostream& operator<<(std::ostream& out, const Vector&);
private:
	Object** beg;
	int size;
	int cur;
};

