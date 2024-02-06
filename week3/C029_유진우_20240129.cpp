#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    int result = a;
    int price = c - b;
    if (price <= 0)
    {
        cout << -1 << endl;
        return 0;
    }
    count = result / price;
    count++;
    cout << count << endl;
    return 0;
}