#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1;
	int num2;

	std::cout << "������� ������ ����� " << std::endl;
	std::cin >> num1;

	std::cout << "������� ������ ����� " << std::endl;
	std::cin >> num2;

	int* pnum1 = &num1;
	int* pnum2 = &num2;

	int r_num1 = *pnum1;
	int r_num2 = *pnum2;

	std::cout << "����� ���� ����� ����� " << r_num1 + r_num2 << std::endl;

	return 0;
}