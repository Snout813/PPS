#include <iostream>
#include <vector>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> result;

    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;
        result.push_back(num1 + num2);
    }
    for (int i : result)
    {
        cout << i << "\n";
    }

    return 0;
}