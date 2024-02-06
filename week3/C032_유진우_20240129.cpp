#include <iostream>
using namespace std;

int main()
{

	int n;
	int line = 0;
	int check = 1;

	cin >> n;

	while (check < n)
	{
		check += 6 * line;
		line++;
	}

	if (n != 1)
		cout << line << endl;
	else
		cout << 1 << endl;
}