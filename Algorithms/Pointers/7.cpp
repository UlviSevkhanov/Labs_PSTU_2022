#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int b;

	std::cout << "������� ����� " << std::endl;
	std::cin >> a;

	int* ptr = &a;

	std::cout << "������� ����� " << std::endl;
	std::cin >> b;

	*ptr = b;

	std::cout << "�������� ����� " << *ptr << std::endl;

	return 0;
}