#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;

    cin >> count;
    int number[count][10];
    vector<int> max;
    vector<int> min;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int num;
            cin >> num;
            number[i][j] = num;
        }
        sort(number[i], number[i] + 10);
    }
    for (int i = 0; i < count; i++)
    {
        cout << number[i][7] << endl;
    }

    return 0;
}