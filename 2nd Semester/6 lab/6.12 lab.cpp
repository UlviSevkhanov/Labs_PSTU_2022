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
	cout << "¬ведите строку: ";
	getline(cin, str);

	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] != ' ' && i < str.length())
		{
			c += str[i];
		}
		else
		{
			for (int j = c.length()-1;j>=0;j--)
			{
				cout << c[j];
			}
			cout << ' ';
			c = "";
		}
	}
	return 0;
}