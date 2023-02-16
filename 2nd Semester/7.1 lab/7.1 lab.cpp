#include <iostream>
using namespace std;

int  NOD(int a, int b)
{
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return (a + b);
}

void substraction(int aN, int aD, int bN, int bD)
{
	int sumN, sumD;
	cout << aN << "/" << aD << " - " << bN << "/" << bD << endl;
	sumN = (aN * bD) - (bN * aD);
	sumD = (bD * aD);
	cout << sumN << "/" << sumD << endl;
	int x = NOD(sumN, sumD);
	sumN /= x;
	sumD /= x;
	cout << sumN << "/" << sumD << endl;
}

void substraction(float a, float b)
{
	cout << (a - b) << endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int aN, aD, bN, bD;
	float a, b;
	cout << "Введите четыре числа для вычитания обыкновенных дробей" << endl;
	cin >> aN >> aD >> bN >> bD;
	cout << "Введите два вещественных числа для вычитания десятичных дробей" << endl;
	cin >> a >> b;
	substraction(a, b);
	substraction(aN, aD, bN, bD);
}

