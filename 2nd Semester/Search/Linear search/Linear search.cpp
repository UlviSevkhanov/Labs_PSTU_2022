#include <iostream>
#include <ctime>
using namespace std;

int linearSearch(int arr[], int key, int size)
{
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] == key) 
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int size, key;
	cout << "������� ������ �������: "; 
	cin >> size;
	int* arr = new int[size];
	cout << "������: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 101;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "������� �������, ������� ���� �����: ";
	cin >> key;
	cout << endl;
	if (linearSearch(arr, key, size) == -1)
	{
		cout << "������� �� ������" << endl;
	}
	else
	{
		cout << "������� ������ ��� �������: " << linearSearch(arr, key, size) + 1 << endl;
	}

	delete[] arr;
	return 0;
}