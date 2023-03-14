#include<iostream>
using namespace std;
int main()
{
	//keo = le
	//da = chan
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int S = 0;
	int T = 0;
	int a[n];
	for (int i = 0; i < n ; i++){
		cin>> a[i];
	}
	for (int i = 0; i < n; i++){
		cout<< a[i] << " "; 
		if (a[i] % 2 == 0){
			S += a[i];	
		}else{
			T += a[i];
		}		
	}cout<<endl;
	if (T < S){
		cout<<" Da ";
	}else if (T > S){
		cout<<"Keo";
	}else {
		cout<<"Bang nhau";
	}		
	return 0;
}

