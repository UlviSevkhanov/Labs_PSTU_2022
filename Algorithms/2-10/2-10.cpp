#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, max, num;
	cout << "������� ���������� ����� ������������������" << endl;
	cin >> n;
	cout << "������� ������ �����" << endl;
	cin >> max;

	for (int i = 2; i <= n; i++)
	{
		cout << "������� ��������� �����" << endl;
		cin >> num;

		if (num > max)
		{
			max = num;
		}
	}

	cout << "������������ �������: " << max << endl;

	return 0;
}
