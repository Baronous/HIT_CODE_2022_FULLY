#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	if (n <= 0)
	{
		cout<<"\nGia tri khong hop le, vui long nhap lai.";
		return 0; 
	}
	float sum = 1;
	for (int i = 1; i < n; i++)
	{
		sum += (sqrt(n)/n);
	}
	cout<<sum;
	return 0;
}
	

