#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> > input;
    int count;
    int dir = 0;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        vector<int> sub;
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        sub.push_back(num1);
        sub.push_back(num2);
        sub.push_back(num3);

        input.push_back(sub);
    }
    int rec;
    int mux;
    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            rec = input[0][1];
        }
        else
        {
            mux = rec / input[i][0];
            rec = input[i][1] * mux;
        }
        if (input[i][2] == 1)
        {
            if (dir == 1)
            {
                dir = 0;
            }
            else
            {
                dir = 1;
            }
        }
    }
    cout << dir << " " << rec << "\n";
    return 0;
}