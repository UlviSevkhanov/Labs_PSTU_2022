#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1;
	int num2;
	int* pnum1;
	int* pnum2;
	int sum = 0;

	std::cout << "������� ������ ����� " << std::endl;
	std::cin >> num1;

	std::cout << "������� ������ ����� " << std::endl;
	std::cin >> num2;

	pnum1 = &num1;
	pnum2 = &num2;

	sum = *pnum1 + *pnum2;

	std::cout << "����� ����� " << sum << std::endl;

	return 0;
}