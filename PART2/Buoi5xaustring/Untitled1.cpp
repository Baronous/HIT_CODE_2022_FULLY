#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100];
	int dem100=0, dem200=0;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if (a[i] == 100)
		dem100++;
		else 
		dem200++;
	}
	if(dem100%2!=0)
		cout<<"No";
	else
	{
		if(dem100==0&&dem200%2!=0)
			cout<<"No";
		cout<<"Yes";
	}
}
