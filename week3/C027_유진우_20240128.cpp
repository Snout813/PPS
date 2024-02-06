#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int count = 0;
    int E, S, M;
    E = S = M = 1;
    while (true)
    {
        count++;
        if (num1 == E && num2 == S && num3 == M)
        {
            break;
        }
        E++;
        S++;
        M++;

        if (E > 15)
        {
            E = 1;
        }
        if (S > 28)
        {
            S = 1;
        }
        if (M > 19)
        {
            M = 1;
        }
    }
    cout << count << endl;

    return 0;
}