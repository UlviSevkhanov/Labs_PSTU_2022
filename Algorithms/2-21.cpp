#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	bool flag1 = false;// отвечает за окончание ввода(т.е вводится 0)
	bool flag2 = true;// отвечает за упорядоченность чисел по возрастанию
	bool flag_first = false; // проверяет если ввели первым число 0

	cout << "Введите первое число" << endl;
	cin >> num1;

	if (num1 == 0)
		flag_first = true;

	while (!flag1 && !flag_first)
	{
		cout << "Введите следующее число" << endl;
		cin >> num2;
		if (num2 == 0)
		{
			flag1 = true;
		}
		if (num2 < num1 && num2 != 0)
		{
			flag2 = false;
		}
		num1 = num2;
	}
	if (flag_first)
	{
		cout << "Отсутствие ввода(первым числом ввели 0)" << endl;
	}
	if (flag2)
	{
		cout << "Числа упорядочены по возрастанию";
	}
	else
	{
		cout << "Числа упорядочены не по возрастанию";
	}

	return 0;
}