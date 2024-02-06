#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    vector<int> rope;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int num;
        cin >> num;
        rope.push_back(num);
    }
    sort(rope.begin(), rope.end(), greater<int>());
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        if (result < rope[i] * (i + 1))
        {
            result = rope[i] * (i + 1);
        }
    }
    cout << result << endl;

    return 0;
}