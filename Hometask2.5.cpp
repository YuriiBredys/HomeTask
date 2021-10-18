#include<iostream>
using namespace std;

int main() 
{
	int a, n;
	cin >> a >> n;
	for (int i = n; i > 0; i--) 
	{
		cout << a % int(pow(10, i)) / int(pow(10, i - 1)) << ", ";
	}

}
