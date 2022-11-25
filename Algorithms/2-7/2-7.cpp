#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int s;
	cout << "¬ведите число N(квадрат числа)" << endl;
	cin >> n;
	s = sqrt(n);
	if (s * s != n)
	{
		cout << "¬ведите корректное значение N" << endl;
	}
	else
	{
		//заполненный квадрат из N звЄздочек
		for (int i = 1; i <= s; i++) // по строкам
		{
			for (int j = 1; j <= s; j++) // по столбцам
			{
				cout << "* ";
			}
			cout << endl; // переход на новую строку
		}
	}
	cin >> n;
	    //заполненный квадрат со сторой N
	for (int i = 1; i <= n; i++) // по строкам
	{
		for (int j = 1; j <= n; j++) // по столбцам
		{
			cout << "* ";
		}
		cout << endl; // переход на новую строку
	}
	cout << endl;
	cin >> n;
	int numofspaces=n-2;

	for (int i = 1; i <= n; i++) // незаполненный квадрат
	{
		if ((i == n) || (i == 1))
		{
			for (int j = 1; j <= n; j++)
			{
				cout << "* ";
			}

			cout << endl;

		}
		else
		{
			cout << "* ";
			for (int j = 1; j <= numofspaces; j++)
			{
				cout << "  ";

			}
			cout << "* " << endl;

		}
	}

	return 0;
}

