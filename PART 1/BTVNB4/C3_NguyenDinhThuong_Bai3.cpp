#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;	
	int a[n];
	for (int i = 0; i < n ; i++){
		cin>> a[i];
	}cout<<endl;
	for (int i = 0; i < n; i++){
		cout<< a[i] << " ";
	}cout<<endl;
	 cout<<endl;
	for (int i = 0; i < n; i++){
		if (a[i] < 0){
			a[i] = (a[i] * - 1);
		}	
	}	int temp = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if (a[j] < a[i]){
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
			}cout<< a[i] << " ";
		}return 0;		
}
