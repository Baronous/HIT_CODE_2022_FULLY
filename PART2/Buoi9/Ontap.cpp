#include<iostream>
using namespace std;
int nhapchuoi(int n, int a[])
{
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"\nPhan tu thu a["<<i<<"] = ";
        cin>>a[i];
    }
}
int xuatchuoi(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<< " ";
    }
}
int main()
{
	int n; 
	int a[n];
    nhapchuoi(n);
    xuatchuoi(n);
    return 0;
}
