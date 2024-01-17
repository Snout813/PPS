#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> name;
    int count;
    cin >> count;
    int family[26] = {
        0,
    };
    for (int i = 0; i < count; i++)
    {
        string n;
        cin >> n;

        name.push_back(n);
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (name[i][0] == 'a' + j)
            {
                family[j]++;
            }
        }
    }
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (family[i] >= 5)
        {
            flag = true;
            cout << (char)('a' + i);
        }
    }
    if (flag == false)
    {
        cout << "PREDAJA" << endl;
    }

    return 0;
}