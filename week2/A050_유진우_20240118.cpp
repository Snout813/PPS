#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'C')
        {
            cout << (char)(word[i] - 'A' + 'X');
        }
        else
        {
            cout << (char)(word[i] - 3);
        }
    }

    return 0;
}