#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pascal;
        vector<int> v;
        for (int i = 0; i < numRows; i++)
        {
            v.clear();
            v.resize(0);
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                {
                    v.push_back(1);
                }
                else if (j == i)
                {
                    v.push_back(1);
                }
                else
                {
                    int num = pascal[i - 1][j - 1] + pascal[i - 1][j];
                    v.push_back(num);
                }
            }
            pascal.push_back(v);
        }
        return pascal;
    }
};
int main()
{
    int number;
    cin >> number;

    Solution s;
    vector<vector<int>> result = s.generate(number);
    cout << "[";
    for (int i = 0; i < number; i++)
    {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
            if (i != 0 && j != result[i].size() - 1)
            {
                cout << ",";
            }
        }
        cout << "]";
    }
    cout << "]";

    return 0;
}