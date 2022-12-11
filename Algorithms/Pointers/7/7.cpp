#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int* ptr = &n;

	std::cout << "Введите число " << std::endl;
	std::cin >> *ptr;

	std::cout << "Изменное значение переменной равно " << n << std::endl;

	return 0;
}