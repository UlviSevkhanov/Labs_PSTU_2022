#include<iostream>
#include<string>

int main()
{
    setlocale(LC_ALL, "RUS");
    int countC, countV;
    countC = countV = 0;

    std::string s;
    std::cout << "������� ������:" << std::endl;
    std::cin >> s;

    const char* sptr = s.c_str();
    for (int i = 0; i < s.length(); i++)
    {
        switch (*sptr)
        {
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
        case '�':
            countV++;
            break;
        default:
            countC++;
            break;
        }

        *sptr++;

    }

    std::cout << "���������� ������� = " << countV << std::endl;
    std::cout << "���������� ��������� = " << countC << std::endl;

    return 0;
}