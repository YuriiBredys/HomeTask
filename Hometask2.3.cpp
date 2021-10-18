#include<iostream>
using namespace std;

int main() 
{
	float sum, y;
	int n;
	cin >> n;
	sum = 0;
	for (int i = 1; i <= n; i++) 
	{
		y = 1.0 / (i * (i + 1));
		sum += y;
	}
	cout << sum << endl;
}
