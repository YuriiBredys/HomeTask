#include<iostream>
using namespace std;

int main() 
{
	int a, b, n;
	cin >> a >> n;
	for (a ; a > 0; a /= 10) 
	{
		b = a % 10;
		cout << b << ", ";
	}

}