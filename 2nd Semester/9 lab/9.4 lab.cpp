#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
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
	for (int i = 0; i < n;i++)
	{
		getline(cin, str);
		fout << str << endl;;
	}
	fout.close();

	ifstream f("F1.txt");
	ofstream fin("F2.txt");

	if (!f.is_open() && !fin.is_open())
	{
		return 1;
	}

	while (getline(f, str))
	{
		if (++i>=4)
		{
			fin << str << endl;
		}
	}
	f.close();
	fin.close();

	ifstream f2("F2.txt");
	char ch;
	int count = 0;
	int last_word = 0;

	if (!f2.is_open())
	{
		return 1;
	}

	while (!f2.eof())
	{
		f2.get(ch);
		if (ch == ' ' || ch == '\n' || ch =='\0')
		{
			if (count > 0)
			{
				last_word = count;
			}
			count = 0;
		}
		else
		{
			count++;
		}
	}

	f2.close();

	ifstream f3("F2.txt");

	if (!f3.is_open())
	{
		return 1;
	}

	cout << "Строки,которые находятся в файле F2" << endl;
	while (f3.peek() != EOF)
	{
		getline(f3, str);
		cout << str << '\n';
	}
	f3.close();
	cout << endl;
	cout << "Последнее слово в файле F2 содержит " << last_word << " символa(ов)" << endl;
	return 0;
}