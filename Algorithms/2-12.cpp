#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
    int n, num, max, min;

    cout << "������� ���������� ����� ������������������" << endl;
    cin >> n;

    cout << "������� ������ �����:" << endl;
    cin >> num;
    max = num;
    min = num;

    for (int i = 2; i <= n; i++)
    {
        cout << "������� ��������� �����" << endl;
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
    cout << "����� ������������� � ������������ ���������: " << (max + min) << endl;

    return 0;

}