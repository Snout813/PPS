#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> words;
    set<string> unique;

    for (int i = 0; i < N; ++i)
    {
        string w;
        cin >> w;
        words.push_back(w);
        unique.insert(w);
    }

    sort(words.begin(), words.end(), [](const string &a, const string &b)
         {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b; });

    for (const string &i : words)
    {
        if (unique.find(i) != unique.end())
        {
            cout << i << endl;
            unique.erase(i);
        }
    }

    return 0;
}
