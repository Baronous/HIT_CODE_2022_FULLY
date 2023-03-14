#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;	
	int a[n];
	for (int i = 0; i < n ; i++){
		cout<<"\nPhan tu a["<<i<<"] = ";
		cin>> a[i];
	}
	for (int i = 0; i < n; i++){
		cout<< a[i] << " ";	
	}cout<<endl;
	 cout<<endl;
	int max = a[0];
	for (int i = 1; i < n; i++){
		if (a[i] > max){
			max = a[i];
		}
	}
	int min = a[0];
	for (int i = 1; i < n; i++){
		if (a[i] < min){
			min = a[i];
		}
	}
	int x, vitrithem = 1;
	x = max - min;
	cout<< x << " " << endl;
	for (int i = n - 1; i >=vitrithem - 1;--i){
		a[i + 1] = a[i];
	}
	a[vitrithem - 1] = 5;
	++n;
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
