#include <iostream>
using namespace std;

int main()
{
    int number[9];
    int num1;
    int num2;
    int total = 0;
    bool flag = false;
    for (int i = 0; i < 9; i++)
    {
        cin >> number[i];
        total += number[i];
    }
    total -= 100;
    for (num1 = 0; num1 < 9; num1++)
    {
        for (num2 = 1 + num1; num2 < 9; num2++)
        {
            if (number[num1] + number[num2] == total)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            break;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        if (i == num1 || i == num2)
        {
            continue;
        }
        cout << number[i] << endl;
    }

    return 0;
}