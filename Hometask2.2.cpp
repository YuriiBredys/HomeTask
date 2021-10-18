#include<iostream>
using namespace std;

int main()
{
	int a, b, c, min, max;

	cin >> a >> b;
	min = a;
	max = b;
	
	if (a > b)
	{
		max = a;
		min = b;
	}
	
	for (max; min <= max; max--)
	{
		c = max % 2;
		if (c != 0)
		{
			cout << max << ", ";
		}
	}

	return 0;
}
