#include<iostream>
using namespace std;
long long giaithua(int n)
{
	long long ans=n;
	for (int i = n - 1; i>=2; i --)
	ans*=i;
	
	return ans;
}
int main()
{
	int n;
	cin >>n;
	cout<< giaithua(n);
}
