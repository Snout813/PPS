#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    int want;
    vector<int> number;
    cin >> count >> want;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        number.push_back(n);
    }
    int max = 0;
    for (int i = 0; i < count - 2; i++)
    {
        for (int j = i + 1; j < count - 1; j++)
        {
            for (int k = j + 1; k < count; k++)
            {
                int result = number[i] + number[j] + number[k];
                if (result <= want)
                {
                    max = std::max(max, result);
                }
            }
        }
    }
    cout << max << endl;
    return 0;
}
