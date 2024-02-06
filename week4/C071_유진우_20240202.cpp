#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    vector<int> num;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        num.push_back(n);
    }
    int max = 0;
    int cal = 0;
    bool start = false;
    for (int i = 0; i < count - 1; i++)
    {
        if (num[i] < num[i + 1])
        {
            if (start == false)
            {
                start = true;
                cal += num[i + 1] - num[i];
            }
            else
            {
                cal += num[i + 1] - num[i];
            }
            if (i == count - 2)
            {
                max = std::max(max, cal);
            }
        }
        else
        {
            start = false;
            max = std::max(max, cal);
            cal = 0;
        }
    }
    cout << max << endl;
    return 0;
}
