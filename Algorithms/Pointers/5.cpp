#include<iostream>

void fact(int* a, int* b)
{
	for (int i = 1; i <= *a; i++)
	{
		*b *= i;
	}

}

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	int result=1;

	std::cout << "������� �����" << std::endl;
	std::cin >> num;

	fact(&num, &result);

	std::cout << "��������� ����� " << num << " ����� " << result << std::endl;

	return 0;
}
