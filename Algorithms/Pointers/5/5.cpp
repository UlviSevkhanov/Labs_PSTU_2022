#include<iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int fact = 1;
	int* f = &fact;

	std::cout << "������� �����" << std::endl;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		*f *= i;
	}

	std::cout << "��������� ����� " << n << " ����� " << fact << std::endl;

	return 0;
}
