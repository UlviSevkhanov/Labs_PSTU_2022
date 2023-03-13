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
	cout << "¬ведите размер массива: "; 
	cin >> size;
	int* arr = new int[size];
	cout << "ћассив: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 101;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "¬ведите элемент, который надо найти: ";
	cin >> key;
	cout << endl;
	if (linearSearch(arr, key, size) == -1)
	{
		cout << "Ёлемент не найден" << endl;
	}
	else
	{
		cout << "Ёлемент найден под номером: " << linearSearch(arr, key, size) + 1 << endl;
	}

	delete[] arr;
	return 0;
}