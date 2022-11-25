#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, S, a;
	int i = 1;
	bool flag = false;

	cout << "������� ���������� ��������� n" << endl;
	cin >> n;

	cout << "������� ������� ������� S" << endl;
	cin >> S;

	while (i <= n && !flag)
	{
		a = sin(n + i / n);
		// ��� �������� ��������, �� ����� ���������
		a = round(a * 10) / 10;
		cout << n + i / n << "|" << a << endl;
		//����� ��������
		if (a == S)
		{
			flag = true;
		}
		else
		{
			i++;
		}
	}

	if (flag)
	{
		cout << "������� S ���� ����� ������ ��������� ������������������" << endl;
	}
	else
	{
		cout << "�������� S ��� ����� ������ ��������� ������������������" << endl;
	}

	return 0;
}