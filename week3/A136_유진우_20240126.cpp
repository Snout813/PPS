#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    string input;
    string want;

    getline(cin, input);
    getline(cin, want);
    int count = 0;
    int index = 0;
    while (true)
    {
        index = input.find(want, index);
        if (index == string::npos)
        {
            break;
        }
        else
        {
            count++;
            index += want.length();
            if (index >= input.length())
            {
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}