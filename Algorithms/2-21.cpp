#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	bool flag1 = true; //отвечает за проверку, если последовательность возрастает
	bool flag2 = true; //отвечает за остановку последовательности

	cout << "Введите первое число" << endl;
	cin >> num1;
	cout << "Введите следующее число" << endl;
	cin >> num2;

	if (num2 == 0)
	{
		flag2 = false;
	}

	while ((flag1 && num2 != 0) && flag2)
	{
		if (num2 == 0)
		{
			flag2 = false;
		}
		if (num1 != 0)
		{
			if (num1 > num2)
			{
				flag1 = false;
			}
		}
		num1 = num2;
		cout << "Введите следующее число" << endl;
		cin >> num2;
	}
	if (flag2)
	{
		if (flag1)
		{
			cout << "Числа упорядочены по возрастанию" << endl;
		}
		else if (!flag1)
		{
			cout << "Числа упорядочены по убыванию" << endl;
		}
	}
	else
	{
		cout << "Ошибка" << endl;
	}

	return 0;
}
