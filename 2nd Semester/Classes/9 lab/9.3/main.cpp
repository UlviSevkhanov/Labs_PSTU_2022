#include <iostream>
#include "Set.h"
#include "Error.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Максимальный размер множества равен 5" << endl;
	try
	{
		Set a(2);
		a[0] = 1;
		a[1] = 2;
		cout << "Множество a = ";
		cout << a << endl;
		int idx;
		cout << "Введите размер множества b:";
		cin >> idx;
		Set b(idx);
		cin >> b;
		cout << "Размер множества a: " << a() << endl;
		cout << "Размер множества b: " << b() << endl;
		cout << "Множество b = ";
		cout << b << endl;
		cout << "b++: ";
		cout << b++ << endl;
		cout << "a + b = " << a + b << endl;
		
	}
	catch (Error& e)
	{
		e.what();
	}
	return 0;
}