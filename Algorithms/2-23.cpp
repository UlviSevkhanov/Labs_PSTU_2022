#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, a, max,k=0,i=1;
	
	cout << "������� ���������� ��������� n" << endl;
	cin >> n;
	
	max = sin(n + (i / n));

	for (int i = 2; i <= n; i++)
	{
		a = sin(n + (i / n));
		if (a > max)
		{
			max = a;
		}
		else if (a == max)
		{
			k++;
		}
	}

	cout << "���������� ���������, ����������� � ������������:" << k << endl;

	return 0;
}