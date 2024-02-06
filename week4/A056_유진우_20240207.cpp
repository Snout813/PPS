#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int count;
    int num;
    cin >> count;
    string input;
    queue<int> number;
    for (int i = 0; i < count; i++)
    {
        cin >> input;
        if (input == "push")
        {
            cin >> num;
            number.push(num);
        }
        else if (input == "pop")
        {
            if (number.empty() == true)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << number.front() << "\n";
                number.pop();
            }
        }
        else if (input == "size")
        {
            if (number.empty() == true)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << number.size() << "\n";
            }
        }
        else if (input == "empty")
        {
            if (number.empty() == true)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if (input == "front")
        {
            if (number.empty() == true)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << number.front() << "\n";
            }
        }
        else if (input == "back")
        {
            if (number.empty() == true)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << number.back() << "\n";
            }
        }
    }

    return 0;
}