#include <iostream>
using namespace std;
int cal(int);
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    // 12233344445555
    cout << cal(num2) - cal(num1 - 1) << "\n";
    return 0;
}
int cal(int num)
{
    int result = 0;
    int count = 0;
    int number = 1;
    for (int i = 0; i < num; i++)
    {

        if (number == count)
        {
            count = 1;
            number++;
            result += number;
        }
        else
        {
            count++;
            result += number;
        }
    }

    return result;
}