#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int corrent;
    int want;
    vector<int> mark;
    int count;
    cin >> corrent >> want;
    cin >> count;
    int min = 1000;
    for (int i = 0; i < count; i++)
    {
        int num;
        cin >> num;
        mark.push_back(num);
    }
    min = abs(corrent - want);
    for (int i = 0; i < count; i++)
    {
        if (min > abs(want - mark[i]) + 1)
        {
            min = abs(want - mark[i]) + 1;
        }
    }

    cout << min << endl;
    return 0;
}