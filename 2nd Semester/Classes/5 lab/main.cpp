#include <iostream>
#include "Pair.h"
#include "Long.h"
#include "Object.h"
#include "Vector.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	Vector v(5);
	Pair a;
	std::cin >> a;
	Long b(a.getFirst(a), a.getSecond(a));
	Object* p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	std::cout << v;
	return 0;
}
