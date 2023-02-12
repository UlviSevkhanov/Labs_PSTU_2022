#include <iostream>
using namespace std;

int sizeArr = 0;

void arrDisplay(int arr[], int size, int k)
{
	if (k > size)
	{
		k %= size;
	}
	//c k-�� �� 0-��
	for (int i = k - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	//������ �� ����� �� k+1
	for (int i = size - 1; i >= k; i--)
	{
		cout << arr[i] << " ";
	}
}

void bubblesort(int arr[], int size)
{
	for (int i = size - 1; i > 0; i--)
	{
		for (int j = size - 1; j >= size - i; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}

void deleteoddlyelement(int arr[], int size)
{
	int newSize = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[newSize++] = arr[i];
		}
	}
	sizeArr = newSize;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int k;
	int arr[100];

	cout << "������� ����� �������" << endl;
	cin >> sizeArr;

	for (int i = 0; i < sizeArr; i++)
	{
		arr[i] = rand() % 25;
	}

	for (int i = 0; i < sizeArr; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "������� ������� k" << endl;
	cin >> k;

	cout << "����� �������,������� � �������� k �� k+1" << endl;
	arrDisplay(arr, sizeArr, k);
	cout << endl;

	//���������� ������� ��������
	bubblesort(arr, sizeArr);
	cout << "����� ����������" << endl;

	for (int i = 0; i < sizeArr; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	cout << "����� �������,������� � �������� k �� k+1(����� ����������)" << endl;
	arrDisplay(arr, sizeArr, k);
	cout << endl;

	//�������� �������� ���������
	deleteoddlyelement(arr, sizeArr);
	cout << "����� �������� �������� ���������" << endl;

	for (int i = 0; i < sizeArr; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "����� �������,������� � �������� k �� k+1(����� �������� �������� ���������)" << endl;
	arrDisplay(arr, sizeArr, k);
	cout << endl;

	cout << "����� �������������� �� �������� ������� ������ ����� c k-�� �������� ������ ������" << endl;
	arrDisplay(arr, sizeArr, k);

	return 0;
}