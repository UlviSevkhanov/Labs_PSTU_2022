#include <iostream>
using namespace std;

class linear_equation
{
public:
	float first;
	float second;
	void Read()
	{
		cout << "first?: ";
		cin >> first;
		cout << "second?: ";
		cin >> second;
	}
	void Show()
	{
		cout << "first = " << first << endl;
		cout << "second = " << second << endl;
	}
	void Init(float A, float B)
	{
		first = A;
		second = B;
	}
	float root()
	{
		float x;
		if (first != 0)
		{
			x = -(second / first);
		}
		else
		{
			cout << "A равно нулю" << endl;
		}
		return x;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	linear_equation Equation;
	Equation.Read();
	Equation.Show();
	cout << Equation.root() << endl;
	return 0;
}