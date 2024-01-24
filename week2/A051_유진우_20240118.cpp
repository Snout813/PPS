#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int sum = 0;
    for (int i = 0; i < word.length(); i++)
    {
        int number = (word[i] - 'A') / 3;
        if (number > 4)
        {
            if (word[i] >= 'P' && word[i] <= 'S')
            {
                sum += 8;
            }
            else if (word[i] >= 'T' && word[i] <= 'V')
            {
                sum += 9;
            }
            else
            {
                sum += 10;
            }
        }
        else
        {
            sum += 2 + (number + 1);
        }
    }
    cout << sum << endl;
    return 0;
}