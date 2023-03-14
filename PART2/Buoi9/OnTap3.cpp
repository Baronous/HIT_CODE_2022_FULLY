#include<iostream>
using namespace std;
struct rectangle
{
	int Length, width;	
};
int dt(int a, int b)
{
	
}

int main()
{
	int length, width;
	int n = 1; 
	rectangle rec[1];
	for (int i = 0; i < n; i++)
	{
		cout<<"\Nhap vao chieu dai = ";
			cin>>rec[i].Length;
		cout<<"\nNhap vao chieu rong = ";
			cin>>rec[i].width;
	}
	cout<<"..................................................."<<endl;
	dt(length, width, dt);
	return 0;
}
