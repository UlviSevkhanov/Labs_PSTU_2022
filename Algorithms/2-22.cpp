#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, a, pos=0, max = -1;

	cout << "������� ���������� ��������� n" << endl;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		a = sin(n + (i / n));
		if (a > max)
		{
			max = a;
			pos = i;
		}

	}
	cout << "������������ ������� ������������������ �����:" << max << endl;
	cout << "������� ������������� �������� ������������������:" << pos << endl;

	return 0;
}
