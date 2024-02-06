#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count;
    int start;
    vector<double> good;
    vector<double> bad;
    double pro[4];
    cin >> count >> start;
    cin >> pro[0] >> pro[1] >> pro[2] >> pro[3];
    if (start == 1)
    {
        good.push_back(pro[2]);
        bad.push_back(pro[3]);
    }
    else
    {
        good.push_back(pro[0]);
        bad.push_back(pro[1]);
    }
    for (int i = 1; i < count; i++)
    {
        good.push_back(good[i - 1] * pro[0] + bad[i - 1] * pro[2]);
        bad.push_back(bad[i - 1] * pro[3] + good[i - 1] * pro[1]);
    }
    int result1 = good[count - 1] * 10000;
    if (result1 % 10 < 5)
    {
        result1 /= 10;
    }
    else
    {
        result1 = result1 / 10 + 1;
    }
    int result2 = bad[count - 1] * 10000;
    if (result2 % 10 < 5)
    {
        result2 /= 10;
    }
    else
    {
        result2 = result2 / 10 + 1;
    }
    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}
