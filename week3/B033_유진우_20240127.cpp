#include <iostream>
using namespace std;

int main()
{
    int time;
    cin >> time;
    int min5 = 0;
    int min1 = 0;
    int sec10 = 0;
    min5 += time / 300;
    time -= (time / 300) * 300;
    min1 += time / 60;
    time -= (time / 60) * 60;
    if (time % 10 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        sec10 += time / 10;
        cout << min5 << " " << min1 << " " << sec10 << endl;
    }

    return 0;
}