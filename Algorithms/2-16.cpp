#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int N; 
	int S = 0;
	
	cout << "¬ведите количество слагаемых N" << endl;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 1)
		{
			S -= i;
		}
		else
		{
			S += i;
		}
	}

	cout << S;
}