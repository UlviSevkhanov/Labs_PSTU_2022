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
	cout << "������� ���������� ����� �����: ";
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
		fout << str << endl;
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
		if (++i >= 4)
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
		if (ch == ' ' || ch == '\n' || ch == '\0')
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

	f2.clear();
	f2.seekg(0);

	cout << "������,������� ��������� � ����� F2" << endl;
	while (!f2.eof())
	{
		getline(f2, str);
		cout << str << '\n';
	}

	f2.close();

	cout << endl;
	cout << "��������� ����� � ����� F2 �������� " << last_word << " ������a(��)" << endl;
	return 0;
}