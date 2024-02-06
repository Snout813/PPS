#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int change;
    int count;
    vector<int> ball;
    cin >> count >> change;
    for (int i = 0; i < count; i++)
    {
        ball.push_back(i + 1);
    }

    for (int i = 0; i < change; i++)
    {
        int a, b;
        cin >> a >> b;
        swap(ball[a -1], ball[b -1]);
    }
    for (int i : ball)
    {
        cout << i << " ";
    }

    return 0;
}