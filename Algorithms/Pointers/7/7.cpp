#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int* ptr = &n;

	std::cout << "������� ����� " << std::endl;
	std::cin >> *ptr;

	std::cout << "�������� �������� ���������� ����� " << n << std::endl;

	return 0;
}