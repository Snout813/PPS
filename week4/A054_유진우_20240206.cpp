#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<pair<int, int>> input;
    int count;
    cin >> count;

    int a, b;
    for (int i = 0; i < count; i++)
    {
        cin >> a >> b;
        input.push_back(make_pair(a, b));
    }
    sort(input.begin(), input.end());

    for (int i = 0; i < count; i++)
    {
        cout << input[i].first << " " << input[i].second << "\n";
    }

    return 0;
}