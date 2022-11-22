#include <iostream>

using namespace std;

int num1, num2;

int main()
{
	setlocale(LC_ALL, "RUS");

	bool flag1 = false;// отвечает за окончание ввода(т.е вводитс€ 0)
	bool flag2 = true;// отвечает за упор€доченность чисел по возрастанию
	bool flag_first = false;

	cout << "¬ведите первое число" << endl;
	cin >> num1;

	if (num1 == 0)
		flag_first = true;

	while (!flag1 && !flag_first)
	{
		cout << "¬ведите следующее число" << endl;
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
		cout << "¬вода (первым числом ввели 0)" << endl;
	}
	if (flag2)
	{
		cout << "„исла упор€дочены по возрастанию";
	}
	else
	{
		cout << "„исла упор€дочены не по возрастанию";
	}

	return 0;
}