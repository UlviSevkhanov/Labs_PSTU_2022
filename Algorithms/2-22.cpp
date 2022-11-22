#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, a, pos=0, max,i=1;

	cout << "Введите количество элементов n" << endl;
	cin >> n;

	max = sin(n + (i / n));

	for (int i = 2; i <= n; i++)
	{
		a = sin(n + (i / n));
		if (a > max)
		{
			max = a;
			pos = i;
		}

	}
	cout << "Максимальный элемент последовательности равен:" << max << endl;
	cout << "Позиция максимального элемента последовательности:" << pos << endl;

	return 0;
}
