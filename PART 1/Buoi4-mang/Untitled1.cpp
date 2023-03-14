#include<iostream>
using namespace std;
int main()
{
	//<kieu du lieu> <ten mang >[so luong phan tu bang];
	//nhap them so
	//them x vao cuoi bang
	int n;
	cin>>n;// so phan tu cua mang
	int a[n+1] ;//khai bao mang
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x;
	cin>>x;
	a[n] = x;
	for (int i = 0; i <= n; i++){
		cout << a[i] << " " ;
	}
	return 0;
}
