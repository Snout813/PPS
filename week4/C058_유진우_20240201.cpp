#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int count;
    int find;
    vector<int> number;
    cin >> count >> find;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        number.push_back(n);
    }
    sort(number.begin(), number.end());
    cout << number[find - 1];
    return 0;
}