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

	std::cout << "Введите число" << std::endl;
	std::cin >> num;

	fact(&num, &result);

	std::cout << "Факториал числа " << num << " равен " << result << std::endl;

	return 0;
}
