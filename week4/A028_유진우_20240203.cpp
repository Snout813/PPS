#include <iostream>
#include <string>

using namespace std;

string add(const string &a, const string &b)
{
    int carry = 0;
    int lenA = a.length();
    int lenB = b.length();
    int maxLength = max(lenA, lenB);
    string result;

    for (int i = 0; i < maxLength || carry; i++)
    {
        int digitA = (i < lenA) ? (a[lenA - 1 - i] - '0') : 0;
        int digitB = (i < lenB) ? (b[lenB - 1 - i] - '0') : 0;
        int sum = digitA + digitB + carry;
        carry = sum / 10;
        result.insert(result.begin(), '0' + (sum % 10));
    }

    return result;
}

int main()
{
    string a, b;

    cin >> a >> b;

    string result = add(a, b);

    cout << result << endl;

    return 0;
}