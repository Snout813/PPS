#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int count;
    cin >> count;
    vector<int> height;
    vector<int> width;
    vector<int> number;
    vector<string> result;

    for (int i = 0; i < count; i++)
    {
        int h, w, n;
        cin >> h >> w >> n;
        height.push_back(h);
        width.push_back(w);
        number.push_back(n);
    }
    for (int i = 0; i < count; i++)
    {
        int floor = number[i] % height[i];
        string r;
        if (floor == 0)
        {
            floor = height[i];
        }
        int room;
        if (number[i] % height[i] == 0)
        {
            room = number[i] / height[i];
        }
        else
        {
            room = number[i] / height[i] + 1;
        }
        if (room < 10)
        {
            r = '0' + to_string(room);
        }
        else
        {
            r = to_string(room);
        }
        result.push_back(to_string(floor) + r);
    }
    for (string i : result)
    {
        cout << i << endl;
    }

    return 0;
}
