#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int n_new;
	int* ptr = &n;

	std::cout << "Введите значение переменной n" << std::endl;
	std::cin >> *ptr;

	std::cout << "Введите новое значение перменной" << std::endl;
	std::cin >> n_new;

	*ptr = n_new;
	
	std::cout << "Изменное значение переменной равно " << n << std::endl;

	return 0;
}