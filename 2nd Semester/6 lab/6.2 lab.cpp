#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str;
	string c = "";
	string max;
	string min;
	bool flag = false;
	cout << "������� ������: ";
	getline(cin, str);

	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] != ' ' && i < str.length())
		{
			c += str[i];
		}
		else
		{
			if (!flag)
			{
				min = c;
				flag = true;
			}
			if (c.length() > max.length())
			{
				max = c;
			}
			else if (c.length() < min.length())
			{
				min = c;
			}
			c = "";
		}
	}
	cout << "����� �������� � ��������� �����: ";
	cout << max << " " << min;
	return 0;
}