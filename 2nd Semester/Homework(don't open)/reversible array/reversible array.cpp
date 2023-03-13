#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[100];
	int n;

	cout << "¬ведите размер массива" << endl;
	cin >> n;
	cout << endl;

	cout << "¬ведите элементы массива" << endl;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	int tmp;

	for (int i = 1; i <= n / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[n - i + 1];
		arr[n - i + 1] = tmp;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}

}