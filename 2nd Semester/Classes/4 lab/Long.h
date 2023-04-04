#pragma once
#include <iostream>
#include "Pair.h"

class Long : public Pair
{
public:
	Long();
	Long(int, int);
	Long(Long&);
	~Long();
	Long operator+(const Long&);
	Long operator-(const Long&);
	Long operator*(const Long&);
};
