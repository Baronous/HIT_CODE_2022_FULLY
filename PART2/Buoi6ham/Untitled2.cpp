#include<iostream>
using namespace std;
int sum(int a, int b, int c){
	return a + b + c;
}

void xinchao(){
	cout<<"\nChao moi nguoi";
}

int main()
{
	int a, b, c, d;
	cout<<"a: "; cin >> a;
	cout<<"b: "; cin >> b;
	cout<<"c: "; cin >> c;
	cout<<"d: "; cin >> d;
	cout<<"Tong la: " << ( a+b+c+d);
	xinchao();
	return 0;	
}
