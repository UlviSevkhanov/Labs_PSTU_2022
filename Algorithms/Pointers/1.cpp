#include <iostream>

void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1;
	int num2;

	std::cout << "������� �������� ������ ����������" << std::endl;
	std::cin >> num1;

	std::cout << "������� �������� ������ ����������" << std::endl;
	std::cin >> num2;

	Swap(&num1, &num2);

	std::cout << "����� ������ �������� ������ ���������� ��������� " << num1 << std::endl;
	std::cout << "����� ������ �������� ������ ���������� ��������� " << num2 << std::endl;
	
	return 0;
}
