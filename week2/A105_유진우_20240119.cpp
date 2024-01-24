#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int result = 1;
    int count = 2;
    int up, down;
    while (true)
    {
        if (result >= num)
        {
            break;
        }
        result += count;
        count++;
    }
    if (num == 1)
    {
        up = 1;
        down = 1;
    }
    else if ((count - 1) % 2 == 0)
    {
        up = count - 1;
        down = 1;
    }
    else
    {
        up = 1;
        down = count - 1;
    }
    while (result != num)
    {
        if ((count - 1) % 2 == 0)
        {
            up--;
            down++;
        }
        else
        {
            down--;
            up++;
        }
        result--;
    }
    cout << up << "/" << down << "\n";

    return 0;
}