#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char a;
	string b;
	string str;
	string c = "";
	bool flag = true;
	cout << "Введите строку: ";
	getline(cin, str);

	for (int i = 0; i <= str.length(); i++)
	{
		if ((str[i] != ' ' && str[i] != '.' && str[i] != ',' 
			&& str[i] != '!' && str[i] != '?') && i < str.length())
		{
			a = str[i];
			if (a >=-32 && a <= -1)
			{
				c += str[i];
			}
			else
			{
				b = a + 32;
				c += b;
			}
		}
	}
	cout << c << endl;
	for (int i = 0; i < c.length(); i++)
	{
		if (c[i] != c[c.length() - 1 - i])
		{
			flag = false;
		}
	}
	if (flag)
	{
		cout << "Это палиндром" << endl;
	}
	else
	{
		cout << "Это не палиндром" << endl;
	}
	return 0;
}