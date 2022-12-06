#include<iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	float num1;
	float num2;

	std::cout << "¬ведите первое число " << std::endl;
	std::cin >> num1;

	std::cout << "¬ведите второе число " << std::endl;
	std::cin >> num2;

	float* pnum1 = &num1;
	float* pnum2 = &num2;

	float r_num1 = *pnum1;
	float r_num2 = *pnum2;

	std::cout << "—умма двух чисел равна " << r_num1 + r_num2 << std::endl;

	return 0;
}