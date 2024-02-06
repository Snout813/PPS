#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    vector<int> time;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        time.push_back(n);
    }
    sort(time.begin(), time.end());
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += time[i] * (count - i);
    }
    cout << total << endl;

    return 0;
}