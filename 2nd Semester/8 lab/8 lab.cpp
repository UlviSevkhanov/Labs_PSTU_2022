#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <iomanip>
#include <fstream>
using namespace std;

struct student
{
	char fio[256];
	char address[256];
	int group;
	float rating;
	void input();
};

void tabl()
{
    int z;
    for (z = 0; z < 40; z++)
        cout << ' ';
}

void print(student* s, int n)
{
    int i;
    cout << '|' << ' ' << setw(30) << "���";
    cout << '|' << ' ' << setw(40) << "�������� �����";
    cout << '|' << ' ' << setw(40) << "������";
    cout << '|' << ' ' << setw(48) << "�������";
    cout << '|';
    tabl();
    for (i = 0; i < n; i++)
    {
        cout << '|' << ' ' << setw(30) << s[i].fio << '|';
        cout << ' ' << setw(40) << s[i].address << '|';
        cout << ' ' << setw(40) << s[i].group << '|';
        cout << ' ' << setw(48) << s[i].rating;
        cout << '|';
        tabl();
    }
}

void student::input()
{
	cout << "������� ��� ��������: ";
    cin.get();
	cin.getline(fio, 79);
    cout << "������� �������� ����� ��������: ";
    cin.getline(address, 79);
    cout << "������� ������ ��������: ";
    cin >> group;
    cout << "������� ������� ��������: ";
    cin >> rating;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    student* s;
    int n,o;
    cout << "������� ���������� ���������: ";
    cin >> n;
    s = new student[n];
    cout << "1.���� � ���������� � ���������� ������" << endl;
    cout << "2.����� �� ����� � ���������� ������" << endl;
    cout << "3.������� ���� � �������� � ���� ����������������� ������" << endl;
    cout << "4.������� ��������� ���� �� �����" << endl;
    cout << "5.������� ��� ��������, � ������� ������� ������ ���������" << endl;
    cout << "6.�������� ������� � ����� �����" << endl;
    cout << "7.�����" << endl;
    cout << "�������� ������ ��� �����: ";
    while (true)
    {
        cout << endl;
        cin >> o;
        if (o == 1)
        {
            for (int i = 0; i < n; i++)
            {
                s[i].input();
            }
        }
        if (o == 2)
        {
            print(s, n);
        }
        if (o == 3)
        {
            ofstream fp("test.txt");
            if (!fp.is_open())
            {
                cout << "������!" << endl;
                return 1;
            }
            for (int i = 0; i < n; i++)
            {
                fp << s[i].fio << ' ';
                fp << s[i].address << ' ';
                fp << s[i].group << ' ';
                fp << s[i].rating << ' ';
                cout << endl;
            }
            fp.close();
        }
        if (o == 4)
        {
            ifstream fp("test.txt");

            if (!fp.is_open())
            {
                cout << "������!" << endl;
                return 1;
            }

            while (fp.peek() != EOF)
            {
                string str;
                getline(fp, str);
                cout << str << endl;
            }
            fp.close();  
        }
        if (o == 5)
        {
            ofstream fp("test.txt");
            ofstream fp2("temp.txt");
            float x;

            if (!fp.is_open())
            {
                cout << "������!" << endl;
                return 1;
            }

            cout << "������� �� ����� �������� ������� ������� ������: ";
            cin >> x;

            for (int i = 0; i < n; i++)
            {
                if (x < s[i].rating)
                {
                    fp2 << s[i].fio << ' ';
                    fp2 << s[i].address << ' ';
                    fp2 << s[i].group << ' ';
                    fp2 << s[i].rating << ' ';
                    cout << endl;
                }
            }
            fp.close();
            fp2.close();

            remove("test.txt");
            rename("temp.txt", "test.txt");
        }
        if (o == 6)
        {
            ofstream fp;
            fp.open("test.txt", ios::app);

            if (!fp.is_open())
            {
                cout << "������!" << endl;
                return 1;
            }

            student r;

            cout << "������� ��� ��������: ";
            cin.get();
            cin.getline(r.fio, 79);
            cout << "������� �������� ����� ��������: ";
            cin.getline(r.address, 79);
            cout << "������� ������ ��������: ";
            cin >> r.group;
            cout << "������� ������� ��������: ";
            cin >> r.rating;

            fp << r.fio << ' ';
            fp << r.address << ' ';
            fp << r.group << ' ';
            fp << r.rating << ' ';
            cout << endl;

            fp.close();
        }
        if (o == 7)
        {
            return 2;
        }
    }
    delete[] s;
    return 0;
}