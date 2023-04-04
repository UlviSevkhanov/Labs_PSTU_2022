#include <iostream>
#include "Pair.h"
#include "Long.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	Pair A;
	Pair B;
	std::cin >> A >> B;
	std::cout << "Pair A = " << A << std::endl;
	std::cout << "Pair B = " << B << std::endl;
	std::cout << "A + B = " << A + B << std::endl;
	Long a(A.getFirst(A), A.getSecond(A)), b(B.getFirst(B), B.getSecond(B));
	std::cout << "Long a = " << a << std::endl;
	std::cout << "Long b = " << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	return 0;
}
