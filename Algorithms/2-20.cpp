#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double n, S;
	bool flag = false;

	cout << "������� ���������� ��������� n" << endl;
	cin >> n;

	cout << "������� ������� ������� S" << endl;
	cin >> S;

	for (int i = 1; i <= n; i++)
	{
		if (S == sin(n + (i / n)))
		{
			flag = true;
		}

	}

	if (flag)
	{
		cout << "������� S ���� ����� ������ ��������� ������������������" << endl;
	}
	else if (!flag)
	{
		cout << "�������� S ��� ����� ������ ��������� ������������������" << endl;
	}
	
	return 0;
}
