#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    if (m - 45 < 0)
    {
        m = 60 + m - 45;
        if (h - 1 < 0)
        {
            h = 23;
        }
        else
        {
            h = h - 1;
        }
    }
    else
    {
        m = m - 45;
    }
    cout << h << " " << m << endl;

    return 0;
}