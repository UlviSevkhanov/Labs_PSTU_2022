#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int n_new;
	int* ptr = &n;

	std::cout << "������� �������� ���������� n" << std::endl;
	std::cin >> *ptr;

	std::cout << "������� ����� �������� ����������" << std::endl;
	std::cin >> n_new;

	*ptr = n_new;
	
	std::cout << "��������� �������� ���������� ����� " << n << std::endl;

	return 0;
}