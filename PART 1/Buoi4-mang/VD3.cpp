#include<iostream>
using namespace std;
int main()
{
	//nhap n, nhap mang n phan tu va so nguyen(cac phan tu < 100),
	// nhap 1 so x
	// hoi x xuat hien bao nhieu lan trong mang
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x;
	cout<<"nhap x = ";
	cin>>x;
	int so = 0;	
	for (int i = 0;  i < n; i++){
		if (a[i] == x){
			so = so + 1;
		}
	}cout<< so;
}
