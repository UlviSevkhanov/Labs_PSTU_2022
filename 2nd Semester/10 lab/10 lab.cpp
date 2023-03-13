#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, k;
	cout << "¬ведите длину массива: ";
	cin >> n;
	string* arr = new string[n];

	cout << "¬ведите элементы массива" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "¬ведите позицию новой строки: ";
	cin >> k;

	string* arr1 = new string[n + 1];

	for (int i = 0; i < n + 1; i++)
	{
		if (i < k - 1)
		{
			arr1[i] = arr[i];
		}
		else if (i == k - 1)
		{
			cout << "¬ведите строку, которую хотите добавить" << endl;
			cin >> arr1[i];
		}
		if (i > k - 1)
		{
			arr1[i] = arr[i - 1];
		}
	}

	for (int i = 0; i < n + 1; i++)
	{
		cout << arr1[i] << ' ';
	}

	delete[] arr;
	delete[] arr1;
	return 0;
}