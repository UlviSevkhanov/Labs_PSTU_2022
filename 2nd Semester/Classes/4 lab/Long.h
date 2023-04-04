#pragma once
#include <iostream>
#include "Pair.h"

class Long : public Pair
{
public:
	Long();
	Long(int first, int second);
	Long(Long& l);
	~Long();
	Long operator+(const Long& l);
	Long operator-(const Long& l);
	Long operator*(const Long& l);
};
