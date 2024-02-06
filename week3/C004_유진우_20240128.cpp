#include <iostream>

using namespace std;

int getSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findSmall(int N)
{
    for (int i = 1; i < N; i++)
    {
        int sum = getSum(i);
        if (i + sum == N)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int N;
    cin >> N;

    int small = findSmall(N);

    cout << small << endl;

    return 0;
}
