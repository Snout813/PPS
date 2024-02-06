#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int count;
    int money;
    int result = 0;
    cin >> count >> money;
    vector<int> coin;
    for (int i = 0; i < count; i++)
    {
        int num;
        cin >> num;
        coin.push_back(num);
    }
    sort(coin.begin(), coin.end(), greater<int>());

    for (int i = 0; i < count; i++)
    {
        if (money < coin[i])
        {
            continue;
        }
        else if (money == 0)
        {
            break;
        }
        else
        {
            int mid;
            mid = money / coin[i];
            money -= mid * coin[i];
            result += mid;
        }
    }
    cout << result << endl;

    return 0;
}