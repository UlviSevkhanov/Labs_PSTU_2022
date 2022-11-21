#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double n, S;
	bool flag = false;

	cout << "¬ведите количество элементов n" << endl;
	cin >> n;

	cout << "¬ведите искомый элемент S" << endl;
	cin >> S;

	for (int i = 1; i <= n; i++)
	{
		if (S == sin(n + (i / n)))
		{
			flag = true;
		}

	}

	if (flag)
	{
		cout << "Ёлемент S есть среди других элементов последовательности" << endl;
	}
	else if (!flag)
	{
		cout << "Ёлемента S нет среди других элементов последовательности" << endl;
	}
	
	return 0;
}
