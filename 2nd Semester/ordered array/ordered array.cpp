#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[100];
	int SIZE;
	bool ordered = true;

	cout << "������� ������ �������" << endl;
	cin >> SIZE;
	cout << endl;

	cout << "������� �������� �������" << endl;

	for (int i = 1; i <= SIZE; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= SIZE - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			cout << "������ �� ���������� �� ����������� ��������" << endl;
			ordered = false;
			return 0;
		}
	}
	if (ordered)
	{
		cout << "������ ���������� �� ����������� ��������" << endl;
	}

}