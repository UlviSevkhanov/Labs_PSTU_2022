#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int s;
	cout << "Vvedite chislo N(kvadrat chisla)" << endl;
	cin >> n;
	s = sqrt(n);
	if (s * s != n)
	{
		cout << "Vvedite korrektnoe znachenie N" << endl;
	}
	else
	{
		//zapolnenniy kvadrat iz N zvezdochek
		for (int i = 1; i <= s; i++) // po strokam
		{
			for (int j = 1; j <= s; j++) // po stolbcam
			{
				cout << "* ";
			}
			cout << endl; // perexod na novuyu stroku
		}
	}
	cin >> n;
	    //zapolnenniy kvadrat so storonoi N
	for (int i = 1; i <= n; i++) // po strokam
	{
		for (int j = 1; j <= n; j++) // po stolbcam
		{
			cout << "* ";
		}
		cout << endl; // perexod na novuyu stroku
	}
	cout << endl;
	cin >> n;
	int numofspaces=n-2;

	for (int i = 1; i <= n; i++) // nezapolnenniy kvadrat 
	{
		if ((i == n) || (i == 1))
		{
			for (int j = 1; j <= n; j++)
			{
				cout << "* ";
			}

			cout << endl;

		}
		else
		{
			cout << "* ";
			for (int j = 1; j <= numofspaces; j++)
			{
				cout << "  ";

			}
			cout << "* " << endl;

		}
	}


}

