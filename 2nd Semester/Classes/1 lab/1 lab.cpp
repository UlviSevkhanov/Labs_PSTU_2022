#include <iostream>
using namespace std;

class linear_equation
{
public:
	float first;
	float second;
	void root(float A, float B)
	{
		first = A;
		second = B;
		float x;
		if (A != 0)
		{
			x = -(second / first);
			cout << " орень равен: " << x << endl;
		}
		else
		{
			cout << "A равно нулю" << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	float A;
	float B;
	cout << "¬ведите вещественные числа A и B дл€ нахождени€ корн€ линейного уравнени€ вида y = Ax + B" << endl;
	cin >> A >> B;
	linear_equation Equation;
	Equation.root(A,B);
	return 0;
}