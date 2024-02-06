#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    int length;
    vector<int> apple;
    cin >> count >> length;

    for (int i = 0; i < count; i++)
    {
        int num;
        cin >> num;
        apple.push_back(num);
    }
    sort(apple.begin(), apple.end());
    for (int i : apple)
    {
        if (i <= length)
        {
            length++;
        }
        else
        {
            break;
        }
    }
    cout << length << endl;

    return 0;
}