#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> number;
    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
        {
            number.pop_back();
        }
        else
        {
            number.push_back(num);
        }
    }
    int sum = 0;

    for (int i : number)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}