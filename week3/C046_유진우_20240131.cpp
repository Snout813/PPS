#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> computerNames;

    for (int i = 0; i < n; i++)
    {
        string computerName;
        getline(cin, computerName);
        computerNames.push_back(computerName);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "String #" << i + 1 << endl;
        for (char c : computerNames[i])
        {
            if (c == 'Z')
            {
                cout << 'A';
            }
            else if (c >= 'A' && c < 'Z')
            {
                cout << static_cast<char>(c + 1);
            }
            else
            {
                cout << c;
            }
        }
        cout << endl;

        if (i < n - 1)
        {
            cout << endl;
        }
    }

    return 0;
}