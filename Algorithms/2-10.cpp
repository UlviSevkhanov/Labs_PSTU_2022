#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, max, num;
	cout << "Введите количество чисел последовательности" << endl;
	cin >> n;
	cout << "Введите первое число" << endl;
	cin >> max;

	for (int i = 2; i <= n; i++)
	{
		cout << "Введите следующее число" << endl;
		cin >> num;

		if (num > max)
		{
			max = num;
		}
	}

	cout << "Максимальный элемент: " << max << endl;

	return 0;

}
