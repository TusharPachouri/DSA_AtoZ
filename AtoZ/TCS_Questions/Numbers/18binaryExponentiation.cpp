#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 2, k = 10;
	int num=n,kk=k;
	int ans = 1;
	while (k != 0) {
		if (k % 2 == 0) {
			n = n * n;
			k /= 2;
		}
		else {
			ans = ans * n;
			k--;
		}
	}

	cout <<num<<" raised to the power "<<kk<<" is "<< ans;
}