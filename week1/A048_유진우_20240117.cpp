#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count = 0;
    vector<string> word;
    for (int i = 0; i < num; i++)
    {
        bool alpha[26] = {
            false,
        };
        string w;
        char c;
        bool flag = true;
        cin >> w;
        for (int j = 0; j < w.length(); j++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (w[j] == 'a' + k)
                {
                    if (j == 0)
                    {
                        c = w[j];
                    }
                    else
                    {
                        if (c != w[j])
                        {
                            alpha['z' - c] = true;
                            if (alpha['z' - w[j]] == true)
                            {
                                flag = false;
                                break;
                            }
                            else
                            {
                                c = w[j];
                            }
                        }
                    }
                }
            }
            if (flag == false)
            {
                break;
            }
        }
        if (flag == true)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}