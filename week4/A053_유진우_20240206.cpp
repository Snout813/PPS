#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> number;
    int count;
    string input;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        string word;
        int num;
        cin >> word;
        if (word == "push")
        {
            cin >> num;
            number.push_back(num);
        }
        else if (word == "top")
        {
            if (number.empty() == true)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << number.back() << endl;
            }
        }
        else if (word == "size")
        {
            if (number.empty() == true)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << number.size() << endl;
            }
        }
        else if (word == "empty")
        {
            if (number.empty() == true)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (word == "pop")
        {
            if (number.empty() == true)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << number.back() << endl;
                number.pop_back();
            }
        }
    }

    return 0;
}