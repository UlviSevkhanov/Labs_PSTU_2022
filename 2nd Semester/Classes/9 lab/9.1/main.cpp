#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "������������ ������ ��������� ����� 5" << endl;
	try
	{
		Set a(2);
		a[0] = 1;
		a[1] = 2;
		cout << "��������� a = ";
		cout << a << endl;
		int idx;
		cout << "������� ������ ��������� b:";
		cin >> idx;
		Set b(idx);
		cin >> b;
		cout << "������ ��������� a: " << a() << endl;
		cout << "������ ��������� b: " << b() << endl;
		cout << "��������� b = ";
		cout << b << endl;
		cout << "b++: ";
		cout << b++ << endl;
		cout << "a + b = " << a + b << endl;
	}
	catch (int num)
	{
		cout << "������ � �����: " << num << endl;
		cout << "1 - ������ ��������� ����������, ��������� ������ ��������� ���� ������ ����������� �����������, ���� ������ 0" << endl << "2 - ��������� ������ ����������" << endl << "3 - ���������� �������� ����������, ������ ��������� ������ ����������� ����������� �������" << endl << "4 - � ���������� ����������� �������� ������ �������� ����������� ���������� ������ ���������";
	}
	return 0;
}