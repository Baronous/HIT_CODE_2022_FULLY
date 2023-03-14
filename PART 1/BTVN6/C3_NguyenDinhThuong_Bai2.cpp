#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n];
	cout<<"\nNhap vao so luong phan tu: ";
	cin>>n;
	if (n <=0 ){
		cout<< "Gia tri khong hop le, vui long nhap lai!";
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout<<"\Phan tu a["<<i<<"] = ";
		cin>>a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<< " ";
	}
	return 0;
}
