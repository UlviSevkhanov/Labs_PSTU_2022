#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	int i = 0;
	string str;
	cout << "Введите количество строк файла: ";
	cin >> n;
	ofstream fout("F1.txt");

	if (!fout.is_open())
	{
		return 1;
	}

	cin.get();
	for (int i = 0; i < n; i++)
	{
		getline(cin, str);
		fout << str << endl;;
	}
	fout.close();

	ifstream f("F1.txt");
	ofstream fin("F2.txt");

	char a;
	char b;

	if (!f.is_open() && !fin.is_open())
	{
		return 1;
	}

	while (getline(f, str))
	{
		a = str[0];
		b = str[str.length() - 1];

		if (a < -32 || a > -1)
		{
			a += 32;
		}

		if (b < -32 || b > -1)
		{
			b += 32;
		}

		if (a==b)
		{
			fin << str << endl;
		}
	}
	f.close();
	fin.close();

	ifstream f2("F2.txt");
	int count = 0;

	if (!f2.is_open())
	{
		return 1;
	}

	cout << "Строки,которые находятся в файле F2" << endl;
	while (f2.peek() != EOF)
	{
		getline(f2, str);
		cout << str << '\n';
		count += str.length();
	}
	cout << "Количество символов в файле F2 равно: " << count << " символа(ов)" << endl;

	f2.close();

	return 0;
}
