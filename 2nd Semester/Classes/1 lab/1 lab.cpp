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
			cout << "������ �����: " << x << endl;
		}
		else
		{
			cout << "A ����� ����" << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	float A;
	float B;
	cout << "������� ������������ ����� A � B ��� ���������� ����� ��������� ��������� ���� y = Ax + B" << endl;
	cin >> A >> B;
	linear_equation Equation;
	Equation.root(A,B);
	return 0;
}