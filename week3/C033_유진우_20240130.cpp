#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    double price;
    int gram;
    int cost;

    cin >> cost >> gram;
    double mux = 1000.0 / gram;
    price = cost * mux;

    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> cost >> gram;
        mux = 1000.0 / gram;
        price = min(price, cost * mux);
    }
    printf("%.2f\n", price);

    return 0;
}