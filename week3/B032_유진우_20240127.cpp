#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    cin >> count;
    vector<int> tree;

    for (int i = 0; i < count; i++)
    {
        int number;
        cin >> number;
        tree.push_back(number);
    }
    sort(tree.begin(), tree.end(), greater<int>());
    int max = 0;

    for (int i = 0; i < count; i++)
    {
        int corrent = i + tree[i] + 2;
        max = std::max(corrent, max);
    }
    cout << max << endl;
    return 0;
}