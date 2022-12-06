#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1;
	int num2;

	std::cout << "¬ведите первое число " << std::endl;
	std::cin >> num1;

	std::cout << "¬ведите второе число " << std::endl;
	std::cin >> num2;

	int* pnum1 = &num1;
	int* pnum2 = &num2;

	int r_num1 = *pnum1;
	int r_num2 = *pnum2;

	std::cout << "—умма двух чисел равна " << r_num1 + r_num2 << std::endl;

	return 0;
}