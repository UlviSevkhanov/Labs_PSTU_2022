#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int SIZE,min,max;
	int arr[100];

	cout << "¬ведите размер массива" << endl;
	cin >> SIZE;

	cout << "¬ведите границы случайных чисел [min;max]" << endl;
	cin >> min >> max;
	cout << endl;

	for (int i = 1; i <= SIZE; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
		cout << arr[i] << " ";
	}
}