#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[100];
	int n;

	cout << "������� ������ �������" << endl;
	cin >> n;
	cout << endl;

	cout << "������� �������� �������" << endl;

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