#include<iostream>
using namespace std;
int main()
{
	int n; 
	cout<<"Nhap va so nguyen n: ";
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i ++)
	{
		cout<<"\nPhan tu a["<<i<<"] = ";
		cin>>a[i];
	}
	return 0;
}
