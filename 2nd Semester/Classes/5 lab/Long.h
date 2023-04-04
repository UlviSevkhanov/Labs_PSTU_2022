#pragma once
#include <iostream>
#include "Pair.h"

class Long : public Pair
{
public:
	void Show();
	Long(void);
	Long(int, int);
	Long(Long&);
	~Long(void);
	Long operator+(const Long&);
	Long operator-(const Long&);
	Long operator*(const Long&);
};

