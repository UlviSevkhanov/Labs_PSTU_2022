#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, S, a;
	int i = 1;
	bool flag = false;

	cout << "¬ведите количество элементов n" << endl;
	cin >> n;

	cout << "¬ведите искомый элемент S" << endl;
	cin >> S;

	while (i <= n && !flag)
	{
		a = sin(n + i / n);
		// дл€ удобства проверки, не часть алгоритма
		a = round(a * 10) / 10;
		cout << n + i / n << "|" << a << endl;
		//конец удобства
		if (a == S)
		{
			flag = true;
		}
		else
		{
			i++;
		}
	}

	if (flag)
	{
		cout << "Ёлемент S есть среди других элементов последовательности" << endl;
	}
	else
	{
		cout << "Ёлемента S нет среди других элементов последовательности" << endl;
	}

	return 0;
}
