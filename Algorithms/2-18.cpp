#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	int r = 0; // reversed
	
	cout << "¬ведите натуральное число N" << endl;
	cin >> N;

	while (N > 0)
	{
		r = r * 10 + N % 10;
		N /= 10;
	}
	cout <<"¬веденное число в обратном пор€дке будет выгл€деть так: " << r << endl;

	return 0;
}