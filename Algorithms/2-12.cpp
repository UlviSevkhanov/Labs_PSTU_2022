#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
    int n, num, max, min;

    cout << "¬ведите количество чисел последовательности" << endl;
    cin >> n;

    cout << "¬ведите первое число:" << endl;
    cin >> num;
    max = num;
    min = num;

    for (int i = 2; i <= n; i++)
    {
        cout << "¬ведите следующее число" << endl;
        cin >> num;
        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }
    cout << "—умма максимального и минимального элементов: " << (max + min) << endl;

    return 0;

}