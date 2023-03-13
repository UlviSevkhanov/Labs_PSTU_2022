#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[100];
	int SIZE;
	bool ordered = true;

	cout << "Введите размер массива" << endl;
	cin >> SIZE;
	cout << endl;

	cout << "Введите элементы массива" << endl;

	for (int i = 1; i <= SIZE; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= SIZE - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			cout << "Массив не упорядочен по возрастанию элемента" << endl;
			ordered = false;
			return 0;
		}
	}
	if (ordered)
	{
		cout << "Массив упорядочен по возрастанию элемента" << endl;
	}

}