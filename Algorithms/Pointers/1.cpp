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

	std::cout << "¬ведите значение первой переменной" << std::endl;
	std::cin >> num1;

	std::cout << "¬ведите значение второй переменной" << std::endl;
	std::cin >> num2;

	Swap(&num1, &num2);

	std::cout << "ѕосле замены значение первой переменной равн€етс€ " << num1 << std::endl;
	std::cout << "ѕосле замены значение второй переменной равн€етс€ " << num2 << std::endl;
	
	return 0;
}
