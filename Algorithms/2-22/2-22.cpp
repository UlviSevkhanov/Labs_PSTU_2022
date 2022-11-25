#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, a, max;
	int i = 2;
	int num = 1;

	cout << "Введите количество элементов n" << endl;
	cin >> n;

	max = sin(n + 1 / n);

	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			num = i;
		}
		i++;

	}
	cout << "Максимальный элемент последовательности:" << max << endl;
	cout << "Его номер:" << num << endl;

	return 0;
}