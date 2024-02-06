#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int num[3];
    cin >> a >> b;
    int number = b;
    for (int i = 0; i < 3; i++)
    {
        num[i] = number % 10;
        number = number / 10;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << num[i] * a << endl;
    }
    cout << a * b << endl;

    return 0;
}