#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n;i++){//khai bao mang 
		cin>>a[i];
	}
	int tong = 0, tich = 1;
	for (int i = 0; i < n; i++){
		if (a[i] % 2 == 0){
			tong += a[i];
		}else{
		tich *= a[i];
		}		
	}
	cout<< tong << endl;
	cout<< tich ;
	return 0; 
}
