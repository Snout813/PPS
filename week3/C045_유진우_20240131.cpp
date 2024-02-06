#include <iostream>
using namespace std;

int main()
{
    int number;

    cin >> number;

    int count = number / 14;
    int word = number % 14;
    if (word == 0)
    {
        word = 14;
    }
    // 0 이면 sukhwan;

    string song[] = {"baby", "sukhwan", "tururu", "turu", "very", "cute", "tururu", "turu", "in", "bed", "tururu", "turu", "baby", "sukhwan"};
    if (word == 3 || word == 7 || word == 11)
    {
        if (count > 2)
        {
            cout << "tu+ru*" << count + 2 << endl;
            return 0;
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                song[word - 1] += "ru";
            }
        }
        cout << song[word - 1] << endl;
    }
    else if (word == 4 || word == 8 || word == 12)
    {
        if (count > 3)
        {
            cout << "tu+ru*" << count + 1 << endl;
            return 0;
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                song[word - 1] += "ru";
            }
        }
        cout << song[word - 1] << endl;
    }
    else
    {
        cout << song[word - 1] << endl;
    }
    return 0;
}
