#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int count = -1;

    int max = number / 5;
    for (int i = max; i >= 0; i--)
    {
        int mad = (number - 5 * i) % 3;
        if (mad % 3 == 0)
        {
            count += 1;
            count += i;
            count += (number - 5 * i) / 3;
            break;
        }
    }
    cout << count << endl;
    return 0;
}