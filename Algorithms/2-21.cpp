#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	bool flag1 = true; //�������� �� ��������, ���� ������������������ ����������
	bool flag2 = true; //�������� �� ��������� ������������������

	cout << "������� ������ �����" << endl;
	cin >> num1;
	cout << "������� ��������� �����" << endl;
	cin >> num2;

	if (num2 == 0)
	{
		flag2 = false;
	}

	while ((flag1 && num2 != 0) && flag2)
	{
		if (num2 == 0)
		{
			flag2 = false;
		}
		if (num1 != 0)
		{
			if (num1 > num2)
			{
				flag1 = false;
			}
		}
		num1 = num2;
		cout << "������� ��������� �����" << endl;
		cin >> num2;
	}
	if (flag2)
	{
		if (flag1)
		{
			cout << "����� ����������� �� �����������" << endl;
		}
		else if (!flag1)
		{
			cout << "����� ����������� �� ��������" << endl;
		}
	}
	else
	{
		cout << "������" << endl;
	}

	return 0;
}
