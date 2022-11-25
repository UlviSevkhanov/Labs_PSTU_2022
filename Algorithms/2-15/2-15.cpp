#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int N, S, k;
    bool flag = false;

    cout << "¬ведите число N и число S" << endl;
    cin >> N >> S;

    while (N > 0 && !flag)
    {
        k = N % 10;
        if (k == S)
        {
            flag = true;
            cout << "„исло S входит в запись числа N" << endl;
        }
        else
        {
            N /= 10;
        }
    }

    if (!flag)
    {
        cout << "„исло S не входит в запись числа N" << endl;
    }

    return 0;
}

