#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	int j;
	int x;
	for (int i = 0; i < n; i++){
		cin>>a[i];
	}
	for (int i = 0; i < n; i++){
		cout<< a[i] << " ";
	}cout<<endl;
	for (int i = 0; i < n; i++){
		for(int j=i+1;j<n;j++){
			if(a[i] == a[j]){
				for( i = x; i < n; i++){
						a[i] = a[i + 1];
					}
					n--;
				}
			}
		}	return 0;
	}



