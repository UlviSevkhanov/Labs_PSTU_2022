#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int b;

	std::cout << "Введите число " << std::endl;
	std::cin >> a;

	int* ptr = &a;

	std::cout << "Введите число " << std::endl;
	std::cin >> b;

	*ptr = b;

	std::cout << "Изменное число " << *ptr << std::endl;

	return 0;
}