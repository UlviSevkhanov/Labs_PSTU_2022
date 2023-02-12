#include <iostream>
using namespace std;

void showArr(int a[][100], int H, int W)
{
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void restoreArr(int H, int W, int n[],int a[][100])
{
	int b;

	for (int i = 0; i < H * W; i += W)
	{
		for (int j = H * W; j < H * W * 2; j++)
		{
			if (n[i] == n[j])
			{
				b = (j - H * W) % H;
				for (int k = 0; k < W; k++)
				{
					a[b][k] = n[k + i];
				}
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int n[100];
	int a[100][100];
	int H,W; // H-строки,W-столбцы
	
	cout << "¬ведите количество строк" << endl;
	cin >> H;

	cout << "¬ведите количество столбцов" << endl;
	cin >> W;

	cout << "¬ведите элементы массива" << endl;
	
	for (int i = 0; i < H * W * 2; i++)
	{
		cin >> n[i];
	}

	restoreArr(H, W, n, a);
	showArr(a, H, W);

	return 0;
}