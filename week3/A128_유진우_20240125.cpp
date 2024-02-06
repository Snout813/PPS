#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> input;
    vector<char> check;
    int count = 0;
    while (true)
    {
        string str;
        getline(cin, str);
        if (str == ".")
        {
            break;
        }
        input.push_back(str);
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        bool flag = true;
        for (int j = 0; j < input[i].size(); j++)
        {
            if (input[i].at(j) == '(' || input[i].at(j) == '[')
            {
                check.push_back(input[i].at(j));
            }
            else if (input[i].at(j) == ')')
            {
                if (check.back() == '(')
                {
                    check.pop_back();
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (input[i].at(j) == ']')
            {
                if (check.back() == '[')
                {
                    check.pop_back();
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == false || !check.empty())
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
        check.clear();
    }
    return 0;
}
