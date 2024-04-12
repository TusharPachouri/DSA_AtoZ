
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}
int main()
{

	int a = 5, b = 6;
	cout << "The GCD of the two numbers is " << gcd(a, b) << endl;
	cout << "The LCM of the two numbers is " << (a * b) / gcd(a, b);
}
