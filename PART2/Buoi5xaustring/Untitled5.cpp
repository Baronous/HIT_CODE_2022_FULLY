#include<iostream>
using namespace std;
int main()
{//cho chuoi s nhap tu ban phim, xoa n ki tu dau
	string s;
	getline(cin,s);
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	s.erase(0,n);
	cout<< s;
}
