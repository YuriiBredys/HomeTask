#include<iostream>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b;
	for ( a; a <= b; a++)
	{
		c = a % 2;
		if (c == 0) 
		{
			cout << a << ", ";
		}
	}

	return 0;
}