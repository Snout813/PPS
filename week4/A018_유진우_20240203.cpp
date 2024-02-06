#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    cin >> count;
    vector<int> A;
    vector<int> B;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        A.push_back(n);
    }
    for (int i = 0; i < count; i++)
    {
        int n;
        cin >> n;
        B.push_back(n);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += A[i] * B[i];
    }
    cout << total << endl;
    return 0;
}