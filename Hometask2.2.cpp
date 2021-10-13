#include<iostream>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b;
	for (b; a <= b; b--)
	{
		c = b % 2;
		if (c != 0)
		{
			cout << b << ", ";
		}
	}

	return 0;
}