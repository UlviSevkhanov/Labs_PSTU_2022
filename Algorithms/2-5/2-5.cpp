#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int numofspaces;
	cout << "¬ведите число N(натуральное и число должно быть больше 2)" << endl;
	cin >> n;

	if (n <= 2)
	{
		cout << "¬ведите корректное значение N" << endl;
	}

	numofspaces = n;

	for (int i = 1; i <= n; i++)
	{
		numofspaces--;

		for (int j = 1; j <= numofspaces; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;

	}
	
	return 0;
}
