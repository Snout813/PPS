#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int max = 0;
    vector<int> number;
    bool max_count = false;
    for (int i = 0; i < num; i++)
    {
        int input;
        cin >> input;
        number.push_back(input);
        if (max < input)
            max = input;
        else if (max == input)
        {
            max_count = true;
        }
    }
    int result = 0;
    if (max_count == true)
    {
        result -= max;
    }
    for (int i : number)
    {
        if (max_count == true)
        {
            result += i;
        }
        else
        {
            if (i != max)
            {
                result += i;
            }
        }
    }

    cout << result;

    return 0;
}