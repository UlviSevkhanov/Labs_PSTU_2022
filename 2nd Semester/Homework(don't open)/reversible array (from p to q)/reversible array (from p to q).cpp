#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[100];
	int n, p, q, tmp;

	cout << "������� ������ �������" << endl;
	cin >> n;
	cout << endl;

	cout << "������� �������� �������" << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "������� p � q" << endl;
	cin >> p >> q;

	for (int i = 0; i < (q - p + 1)/ 2; i++)
	{
		tmp = arr[p+i];
		arr[p+i] = arr[q-i];
		arr[q-i] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

}