#include<iostream>
using namespace std;

int main()
{
	int a, b, c, min , max;

	cin >> a >> b;
	min = a;
	max = b;
	if (a > b) 
	{
		max = a;
		min = b;
	}
	
	for ( min; min <= max; min++)
	{
		c = min % 2;
		if (c == 0) 
		{
			cout << min << ", ";
		}
	}

	return 0;
}
