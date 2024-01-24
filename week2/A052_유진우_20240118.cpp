#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int count;
    int score;
    vector<int> total;
    vector<string> answer;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        string a;
        cin >> a;
        answer.push_back(a);
    }
    for (int i = 0; i < count; i++)
    {
        score = 1;
        total.push_back(0);
        for (int j = 0; j < answer[i].length(); j++)
        {
            if (answer[i][j] == 'O')
            {
                total[i] += score;
                score++;
            }
            else
            {
                score = 1;
            }
        }
    }
    for (int i : total)
    {
        cout << i << endl;
    }

    return 0;
}